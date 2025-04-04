#!/bin/bash -eu

# https://reports.kea.isc.org/new-fuzzer.html

script_path="$(dirname "$(readlink -f "${0}")")"
cd "${script_path}/.."

# Use a wrapper function to allow "return 1" instead of "exit 1" which may have
# unforeseen consequences in case this script is sourced.
install_kea() {
  # ccache
  export CCACHE_DIR=/cache
  export PATH="/usr/lib/ccache:$PATH"
  export KEA_BUILD_DIR="${KEA_BUILD_DIR-/builds/isc-projects/kea}"

  cxxflags=
  if test "${SANITIZER}" = 'none'; then
    cxxflags="${cxxflags} -fno-sanitize=all"
    enable_fuzzing='--enable-fuzzing'
  else
    cxxflags="${cxxflags} -fsanitize=${SANITIZER}"
    enable_fuzzing='--enable-fuzzing=ci'
  fi
  export CXXFLAGS="${cxxflags}"
  export LDFLAGS='-L/usr/lib/gcc/x86_64-linux-gnu/9 -lstdc++fs'
  if ! meson setup build --prefix='/opt/kea' -D fuzz=enabled -D tests=enabled; then
    printf 'meson setup failed. Here is meson-log.txt:\n'
    cat build/meson-logs/meson-log.txt
    return 1
  fi
  meson compile -C build
  meson install -C build

  # Copy internal libraries.
  # SC2156 (warning): Injecting filenames is fragile and insecure. Use parameters.
  # shellcheck disable=SC2156
  find "/opt/kea/lib" -mindepth 1 -maxdepth 1 -not -type d -exec sh -c "cp {} ${KEA_BUILD_DIR}" ';'

  # Copy the binaries.
  for fuzzer in fuzz_config_kea_dhcp4 fuzz_http_endpoint_kea_dhcp4 fuzz_packets_kea_dhcp4 fuzz_unix_socket_kea_dhcp4 \
                fuzz_config_kea_dhcp6 fuzz_http_endpoint_kea_dhcp6 fuzz_packets_kea_dhcp6 fuzz_unix_socket_kea_dhcp6 \
      ; do
    cp "/opt/kea/sbin/${fuzzer}" "${OUT}/${fuzzer}"
    # copy all required libraries
    echo "ldd ${OUT}/${fuzzer}: "
    ldd "${OUT}/${fuzzer}"
    EXTENDED_PATH=$(readelf -d "${OUT}/${fuzzer}" | grep 'R.*PATH' | cut -d '[' -f 2 | cut -d ']' -f 1)
    patchelf --set-rpath "/usr/lib/x86_64-linux-gnu:/lib/x86_64-linux-gnu:${EXTENDED_PATH}" "${OUT}/${fuzzer}"
    readelf -d "${OUT}/${fuzzer}" | grep 'R.*PATH' || true
    for i in $(ldd "${OUT}/${fuzzer}" | cut -f 2 | cut -d ' ' -f 3); do
      cp "${i}" "${KEA_BUILD_DIR}"
    done
  done
}

install_kea
