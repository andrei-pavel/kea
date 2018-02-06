// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Take the name prefix into account.
#define yylex   parser6_lex

// First part of user declarations.

#line 39 "dhcp6_parser.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "dhcp6_parser.h"

// User implementation prologue.

#line 53 "dhcp6_parser.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 34 "dhcp6_parser.yy" // lalr1.cc:413

#include <dhcp6/parser_context.h>

#line 59 "dhcp6_parser.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if PARSER6_DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !PARSER6_DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !PARSER6_DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 14 "dhcp6_parser.yy" // lalr1.cc:479
namespace isc { namespace dhcp {
#line 145 "dhcp6_parser.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Dhcp6Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  Dhcp6Parser::Dhcp6Parser (isc::dhcp::Parser6Context& ctx_yyarg)
    :
#if PARSER6_DEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      ctx (ctx_yyarg)
  {}

  Dhcp6Parser::~Dhcp6Parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  Dhcp6Parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  Dhcp6Parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  Dhcp6Parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  Dhcp6Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  Dhcp6Parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  Dhcp6Parser::symbol_number_type
  Dhcp6Parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  Dhcp6Parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  Dhcp6Parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 173: // value
      case 177: // map_value
      case 221: // db_type
      case 297: // hr_mode
      case 431: // duid_type
      case 464: // ncr_protocol_value
      case 472: // replace_client_name_value
        value.move< ElementPtr > (that.value);
        break;

      case 156: // "boolean"
        value.move< bool > (that.value);
        break;

      case 155: // "floating point"
        value.move< double > (that.value);
        break;

      case 154: // "integer"
        value.move< int64_t > (that.value);
        break;

      case 153: // "constant string"
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  Dhcp6Parser::stack_symbol_type&
  Dhcp6Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 173: // value
      case 177: // map_value
      case 221: // db_type
      case 297: // hr_mode
      case 431: // duid_type
      case 464: // ncr_protocol_value
      case 472: // replace_client_name_value
        value.copy< ElementPtr > (that.value);
        break;

      case 156: // "boolean"
        value.copy< bool > (that.value);
        break;

      case 155: // "floating point"
        value.copy< double > (that.value);
        break;

      case 154: // "integer"
        value.copy< int64_t > (that.value);
        break;

      case 153: // "constant string"
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  Dhcp6Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if PARSER6_DEBUG
  template <typename Base>
  void
  Dhcp6Parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
            case 153: // "constant string"

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 364 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 154: // "integer"

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< int64_t > (); }
#line 371 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 155: // "floating point"

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< double > (); }
#line 378 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 156: // "boolean"

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< bool > (); }
#line 385 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 173: // value

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< ElementPtr > (); }
#line 392 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 177: // map_value

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< ElementPtr > (); }
#line 399 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 221: // db_type

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< ElementPtr > (); }
#line 406 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 297: // hr_mode

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< ElementPtr > (); }
#line 413 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 431: // duid_type

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< ElementPtr > (); }
#line 420 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 464: // ncr_protocol_value

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< ElementPtr > (); }
#line 427 "dhcp6_parser.cc" // lalr1.cc:636
        break;

      case 472: // replace_client_name_value

#line 229 "dhcp6_parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< ElementPtr > (); }
#line 434 "dhcp6_parser.cc" // lalr1.cc:636
        break;


      default:
        break;
    }
    yyo << ')';
  }
#endif

  inline
  void
  Dhcp6Parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  Dhcp6Parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  Dhcp6Parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if PARSER6_DEBUG
  std::ostream&
  Dhcp6Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Dhcp6Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Dhcp6Parser::debug_level_type
  Dhcp6Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Dhcp6Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // PARSER6_DEBUG

  inline Dhcp6Parser::state_type
  Dhcp6Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  Dhcp6Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  Dhcp6Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Dhcp6Parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (ctx));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 173: // value
      case 177: // map_value
      case 221: // db_type
      case 297: // hr_mode
      case 431: // duid_type
      case 464: // ncr_protocol_value
      case 472: // replace_client_name_value
        yylhs.value.build< ElementPtr > ();
        break;

      case 156: // "boolean"
        yylhs.value.build< bool > ();
        break;

      case 155: // "floating point"
        yylhs.value.build< double > ();
        break;

      case 154: // "integer"
        yylhs.value.build< int64_t > ();
        break;

      case 153: // "constant string"
        yylhs.value.build< std::string > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 238 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.NO_KEYWORD; }
#line 680 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 4:
#line 239 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.CONFIG; }
#line 686 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 240 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.DHCP6; }
#line 692 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 241 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.INTERFACES_CONFIG; }
#line 698 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 242 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.SUBNET6; }
#line 704 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 243 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.POOLS; }
#line 710 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 244 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.PD_POOLS; }
#line 716 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 245 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.RESERVATIONS; }
#line 722 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 246 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.DHCP6; }
#line 728 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 247 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.OPTION_DEF; }
#line 734 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 248 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.OPTION_DATA; }
#line 740 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 249 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.HOOKS_LIBRARIES; }
#line 746 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 250 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.DHCP_DDNS; }
#line 752 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 251 "dhcp6_parser.yy" // lalr1.cc:859
    { ctx.ctx_ = ctx.LOGGING; }
#line 758 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 259 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location))); }
#line 764 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 31:
#line 260 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new DoubleElement(yystack_[0].value.as< double > (), ctx.loc2pos(yystack_[0].location))); }
#line 770 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 32:
#line 261 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location))); }
#line 776 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 33:
#line 262 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location))); }
#line 782 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 34:
#line 263 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new NullElement(ctx.loc2pos(yystack_[0].location))); }
#line 788 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 35:
#line 264 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 794 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 265 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 800 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 268 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Push back the JSON value on the stack
    ctx.stack_.push_back(yystack_[0].value.as< ElementPtr > ());
}
#line 809 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 273 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 820 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 278 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.
}
#line 830 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 284 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ctx.stack_.back(); ctx.stack_.pop_back(); }
#line 836 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 43:
#line 291 "dhcp6_parser.yy" // lalr1.cc:859
    {
                  // map containing a single entry
                  ctx.stack_.back()->set(yystack_[2].value.as< std::string > (), yystack_[0].value.as< ElementPtr > ());
                  }
#line 845 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 44:
#line 295 "dhcp6_parser.yy" // lalr1.cc:859
    {
                  // map consisting of a shorter map followed by
                  // comma and string:value
                  ctx.stack_.back()->set(yystack_[2].value.as< std::string > (), yystack_[0].value.as< ElementPtr > ());
                  }
#line 855 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 45:
#line 302 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(l);
}
#line 864 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 46:
#line 305 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // list parsing complete. Put any sanity checking here
}
#line 872 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 49:
#line 313 "dhcp6_parser.yy" // lalr1.cc:859
    {
                  // List consisting of a single element.
                  ctx.stack_.back()->add(yystack_[0].value.as< ElementPtr > ());
                  }
#line 881 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 50:
#line 317 "dhcp6_parser.yy" // lalr1.cc:859
    {
                  // List ending with , and a value.
                  ctx.stack_.back()->add(yystack_[0].value.as< ElementPtr > ());
                  }
#line 890 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 51:
#line 324 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // List parsing about to start
}
#line 898 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 52:
#line 326 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // list parsing complete. Put any sanity checking here
    //ctx.stack_.pop_back();
}
#line 907 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 55:
#line 335 "dhcp6_parser.yy" // lalr1.cc:859
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 916 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 56:
#line 339 "dhcp6_parser.yy" // lalr1.cc:859
    {
                          ElementPtr s(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
                          ctx.stack_.back()->add(s);
                          }
#line 925 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 57:
#line 350 "dhcp6_parser.yy" // lalr1.cc:859
    {
    const std::string& where = ctx.contextName();
    const std::string& keyword = yystack_[1].value.as< std::string > ();
    error(yystack_[1].location,
          "got unexpected keyword \"" + keyword + "\" in " + where + " map.");
}
#line 936 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 58:
#line 360 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 947 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 59:
#line 365 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // map parsing completed. If we ever want to do any wrap up
    // (maybe some sanity checking), this would be the best place
    // for it.

    // Dhcp6 is required
    ctx.require("Dhcp6", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
}
#line 960 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 68:
#line 388 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // This code is executed when we're about to start parsing
    // the content of the map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Dhcp6", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.DHCP6);
}
#line 973 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 69:
#line 395 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // No global parameter is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 983 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 70:
#line 403 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the Dhcp6 map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 993 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 71:
#line 407 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // No global parameter is required
    // parsing completed
}
#line 1002 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 99:
#line 445 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("preferred-lifetime", prf);
}
#line 1011 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 100:
#line 450 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("valid-lifetime", prf);
}
#line 1020 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 101:
#line 455 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("renew-timer", prf);
}
#line 1029 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 102:
#line 460 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("rebind-timer", prf);
}
#line 1038 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 103:
#line 465 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr dpp(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("decline-probation-period", dpp);
}
#line 1047 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 104:
#line 470 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces-config", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.INTERFACES_CONFIG);
}
#line 1058 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 105:
#line 475 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // No interfaces config param is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1068 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 106:
#line 481 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the interfaces-config map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1078 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 107:
#line 485 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // No interfaces config param is required
    // parsing completed
}
#line 1087 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 115:
#line 501 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interfaces", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1098 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 116:
#line 506 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1107 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 117:
#line 511 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("re-detect", b);
}
#line 1116 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 118:
#line 517 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("lease-database", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.LEASE_DATABASE);
}
#line 1127 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 119:
#line 522 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1138 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 120:
#line 529 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr i(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hosts-database", i);
    ctx.stack_.push_back(i);
    ctx.enter(ctx.HOSTS_DATABASE);
}
#line 1149 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 121:
#line 534 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The type parameter is required
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1160 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 137:
#line 560 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.DATABASE_TYPE);
}
#line 1168 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 138:
#line 562 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("type", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 1177 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 139:
#line 567 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("memfile", ctx.loc2pos(yystack_[0].location))); }
#line 1183 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 140:
#line 568 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("mysql", ctx.loc2pos(yystack_[0].location))); }
#line 1189 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 141:
#line 569 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("postgresql", ctx.loc2pos(yystack_[0].location))); }
#line 1195 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 142:
#line 570 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("cql", ctx.loc2pos(yystack_[0].location))); }
#line 1201 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 143:
#line 573 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1209 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 144:
#line 575 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr user(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("user", user);
    ctx.leave();
}
#line 1219 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 145:
#line 581 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1227 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 146:
#line 583 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr pwd(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("password", pwd);
    ctx.leave();
}
#line 1237 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 147:
#line 589 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1245 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 148:
#line 591 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr h(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("host", h);
    ctx.leave();
}
#line 1255 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 149:
#line 597 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr p(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("port", p);
}
#line 1264 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 150:
#line 602 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1272 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 151:
#line 604 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr name(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("name", name);
    ctx.leave();
}
#line 1282 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 152:
#line 610 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("persist", n);
}
#line 1291 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 153:
#line 615 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr n(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("lfc-interval", n);
}
#line 1300 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 154:
#line 620 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr n(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("readonly", n);
}
#line 1309 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 155:
#line 625 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr n(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("connect-timeout", n);
}
#line 1318 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 156:
#line 630 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1326 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 157:
#line 632 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr cp(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("contact-points", cp);
    ctx.leave();
}
#line 1336 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 158:
#line 638 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1344 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 159:
#line 640 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr ks(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("keyspace", ks);
    ctx.leave();
}
#line 1354 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 160:
#line 647 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("mac-sources", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.MAC_SOURCES);
}
#line 1365 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 161:
#line 652 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1374 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 166:
#line 665 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr duid(new StringElement("duid", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(duid);
}
#line 1383 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 167:
#line 670 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr duid(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(duid);
}
#line 1392 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 168:
#line 675 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("host-reservation-identifiers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOST_RESERVATION_IDENTIFIERS);
}
#line 1403 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 169:
#line 680 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1412 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 175:
#line 694 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr hwaddr(new StringElement("hw-address", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(hwaddr);
}
#line 1421 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 176:
#line 699 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr flex_id(new StringElement("flex-id", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(flex_id);
}
#line 1430 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 177:
#line 706 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("relay-supplied-options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1441 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 178:
#line 711 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1450 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 179:
#line 716 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hooks-libraries", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.HOOKS_LIBRARIES);
}
#line 1461 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 180:
#line 721 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1470 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 185:
#line 734 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1480 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 186:
#line 738 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The library hooks parameter is required
    ctx.require("library", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1490 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 187:
#line 744 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the hooks-libraries list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1500 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 188:
#line 748 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The library hooks parameter is required
    ctx.require("library", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 1510 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 194:
#line 763 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1518 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 195:
#line 765 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr lib(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("library", lib);
    ctx.leave();
}
#line 1528 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 196:
#line 771 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1536 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 197:
#line 773 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("parameters", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 1545 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 198:
#line 779 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("expired-leases-processing", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.EXPIRED_LEASES_PROCESSING);
}
#line 1556 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 199:
#line 784 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // No expired lease parameter is required
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1566 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 208:
#line 802 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr value(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reclaim-timer-wait-time", value);
}
#line 1575 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 209:
#line 807 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr value(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush-reclaimed-timer-wait-time", value);
}
#line 1584 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 210:
#line 812 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr value(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hold-reclaimed-time", value);
}
#line 1593 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 211:
#line 817 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr value(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reclaim-leases", value);
}
#line 1602 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 212:
#line 822 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr value(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-reclaim-time", value);
}
#line 1611 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 213:
#line 827 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr value(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("unwarned-reclaim-cycles", value);
}
#line 1620 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 214:
#line 835 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("subnet6", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.SUBNET6);
}
#line 1631 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 215:
#line 840 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1640 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 220:
#line 860 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1650 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 221:
#line 864 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Once we reached this place, the subnet parsing is now complete.
    // If we want to, we can implement default values here.
    // In particular we can do things like this:
    // if (!ctx.stack_.back()->get("interface")) {
    //     ctx.stack_.back()->set("interface", StringElement("loopback"));
    // }
    //
    // We can also stack up one level (Dhcp6) and copy over whatever
    // global parameters we want to:
    // if (!ctx.stack_.back()->get("renew-timer")) {
    //     ElementPtr renew = ctx_stack_[...].get("renew-timer");
    //     if (renew) {
    //         ctx.stack_.back()->set("renew-timer", renew);
    //     }
    // }

    // The subnet subnet6 parameter is required
    ctx.require("subnet", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1676 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 222:
#line 886 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the subnet6 list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1686 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 223:
#line 890 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The subnet subnet6 parameter is required
    ctx.require("subnet", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 1696 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 245:
#line 923 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1704 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 246:
#line 925 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr subnet(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("subnet", subnet);
    ctx.leave();
}
#line 1714 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 247:
#line 931 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1722 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 248:
#line 933 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interface", iface);
    ctx.leave();
}
#line 1732 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 249:
#line 939 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1740 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 250:
#line 941 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr iface(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("interface-id", iface);
    ctx.leave();
}
#line 1750 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 251:
#line 947 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.CLIENT_CLASS);
}
#line 1758 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 252:
#line 949 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr cls(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-class", cls);
    ctx.leave();
}
#line 1768 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 253:
#line 955 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.RESERVATION_MODE);
}
#line 1776 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 254:
#line 957 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("reservation-mode", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 1785 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 255:
#line 962 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("disabled", ctx.loc2pos(yystack_[0].location))); }
#line 1791 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 256:
#line 963 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("out-of-pool", ctx.loc2pos(yystack_[0].location))); }
#line 1797 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 257:
#line 964 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("all", ctx.loc2pos(yystack_[0].location))); }
#line 1803 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 258:
#line 967 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr id(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("id", id);
}
#line 1812 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 259:
#line 972 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr rc(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("rapid-commit", rc);
}
#line 1821 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 260:
#line 980 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("shared-networks", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.SHARED_NETWORK);
}
#line 1832 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 261:
#line 985 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1841 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 266:
#line 1000 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1851 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 267:
#line 1004 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
}
#line 1859 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 286:
#line 1034 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("option-def", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OPTION_DEF);
}
#line 1870 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 287:
#line 1039 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 1879 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 288:
#line 1047 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1888 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 289:
#line 1050 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // parsing completed
}
#line 1896 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 294:
#line 1066 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 1906 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 295:
#line 1070 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The name, code and type option def parameters are required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("code", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 1918 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 296:
#line 1081 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the option-def list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 1928 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 297:
#line 1085 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The name, code and type option def parameters are required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("code", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("type", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 1940 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 313:
#line 1117 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr code(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("code", code);
}
#line 1949 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 315:
#line 1124 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1957 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 316:
#line 1126 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("type", prf);
    ctx.leave();
}
#line 1967 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 317:
#line 1132 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1975 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 318:
#line 1134 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr rtypes(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("record-types", rtypes);
    ctx.leave();
}
#line 1985 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 319:
#line 1140 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 1993 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 320:
#line 1142 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr space(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("space", space);
    ctx.leave();
}
#line 2003 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 322:
#line 1150 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2011 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 323:
#line 1152 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr encap(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("encapsulate", encap);
    ctx.leave();
}
#line 2021 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 324:
#line 1158 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr array(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("array", array);
}
#line 2030 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 325:
#line 1167 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("option-data", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OPTION_DATA);
}
#line 2041 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 326:
#line 1172 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2050 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 331:
#line 1191 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2060 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 332:
#line 1195 "dhcp6_parser.yy" // lalr1.cc:859
    {
    /// @todo: the code or name parameters are required.
    ctx.stack_.pop_back();
}
#line 2069 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 333:
#line 1203 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the option-data list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2079 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 334:
#line 1207 "dhcp6_parser.yy" // lalr1.cc:859
    {
    /// @todo: the code or name parameters are required.
    // parsing completed
}
#line 2088 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 349:
#line 1240 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2096 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 350:
#line 1242 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr data(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("data", data);
    ctx.leave();
}
#line 2106 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 353:
#line 1252 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr space(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("csv-format", space);
}
#line 2115 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 354:
#line 1257 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr persist(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("always-send", persist);
}
#line 2124 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 355:
#line 1265 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pools", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.POOLS);
}
#line 2135 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 356:
#line 1270 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2144 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 361:
#line 1285 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2154 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 362:
#line 1289 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The pool parameter is required.
    ctx.require("pool", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2164 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 363:
#line 1295 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the pool list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2174 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 364:
#line 1299 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The pool parameter is required.
    ctx.require("pool", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
}
#line 2183 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 373:
#line 1316 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2191 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 374:
#line 1318 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr pool(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pool", pool);
    ctx.leave();
}
#line 2201 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 375:
#line 1324 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2209 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 376:
#line 1326 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr parent = ctx.stack_.back();
    ElementPtr user_context = yystack_[0].value.as< ElementPtr > ();
    ConstElementPtr old = parent->get("user-context");

    // Handle already existing user context
    if (old) {
        // Check if it was a comment or a duplicate
        if ((old->size() != 1) || !old->contains("comment")) {
            std::stringstream msg;
            msg << "duplicate user-context entries (previous at "
                << old->getPosition().str() << ")";
            error(yystack_[3].location, msg.str());
        }
        // Merge the comment
        user_context->set("comment", old->get("comment"));
    }

    // Set the user context
    parent->set("user-context", user_context);
    ctx.leave();
}
#line 2236 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 377:
#line 1349 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2244 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 378:
#line 1351 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr parent = ctx.stack_.back();
    ElementPtr user_context(new MapElement(ctx.loc2pos(yystack_[3].location)));
    ElementPtr comment(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    user_context->set("comment", comment);

    // Handle already existing user context
    ConstElementPtr old = parent->get("user-context");
    if (old) {
        // Check for duplicate comment
        if (old->contains("comment")) {
            std::stringstream msg;
            msg << "duplicate user-context/comment entries (previous at "
                << old->getPosition().str() << ")";
            error(yystack_[3].location, msg.str());
        }
        // Merge the user context in the comment
        merge(user_context, old);
    }

    // Set the user context
    parent->set("user-context", user_context);
    ctx.leave();
}
#line 2273 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 379:
#line 1379 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("pd-pools", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.PD_POOLS);
}
#line 2284 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 380:
#line 1384 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2293 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 385:
#line 1399 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2303 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 386:
#line 1403 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The prefix, prefix len and delegated len parameters are required.
    ctx.require("prefix", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("prefix-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("delegated-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2315 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 387:
#line 1411 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the pd-pool list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2325 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 388:
#line 1415 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The prefix, prefix len and delegated len parameters are required.
    ctx.require("prefix", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("prefix-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.require("delegated-len", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2337 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 401:
#line 1439 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2345 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 402:
#line 1441 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix", prf);
    ctx.leave();
}
#line 2355 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 403:
#line 1447 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefix-len", prf);
}
#line 2364 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 404:
#line 1452 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2372 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 405:
#line 1454 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("excluded-prefix", prf);
    ctx.leave();
}
#line 2382 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 406:
#line 1460 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr prf(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("excluded-prefix-len", prf);
}
#line 2391 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 407:
#line 1465 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr deleg(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("delegated-len", deleg);
}
#line 2400 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 408:
#line 1473 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("reservations", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.RESERVATIONS);
}
#line 2411 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 409:
#line 1478 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2420 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 414:
#line 1491 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2430 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 415:
#line 1495 "dhcp6_parser.yy" // lalr1.cc:859
    {
    /// @todo: an identifier parameter is required.
    ctx.stack_.pop_back();
}
#line 2439 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 416:
#line 1500 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the reservations list entry map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2449 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 417:
#line 1504 "dhcp6_parser.yy" // lalr1.cc:859
    {
    /// @todo: an identifier parameter is required.
    // parsing completed
}
#line 2458 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 433:
#line 1531 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ip-addresses", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2469 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 434:
#line 1536 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2478 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 435:
#line 1541 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("prefixes", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2489 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 436:
#line 1546 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2498 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 437:
#line 1551 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2506 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 438:
#line 1553 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr d(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("duid", d);
    ctx.leave();
}
#line 2516 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 439:
#line 1559 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2524 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 440:
#line 1561 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hw-address", hw);
    ctx.leave();
}
#line 2534 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 441:
#line 1567 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2542 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 442:
#line 1569 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr host(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("hostname", host);
    ctx.leave();
}
#line 2552 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 443:
#line 1575 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2560 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 444:
#line 1577 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr hw(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flex-id", hw);
    ctx.leave();
}
#line 2570 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 445:
#line 1583 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr c(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-classes", c);
    ctx.stack_.push_back(c);
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2581 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 446:
#line 1588 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2590 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 447:
#line 1596 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("relay", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.RELAY);
}
#line 2601 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 448:
#line 1601 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2610 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 449:
#line 1606 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2618 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 450:
#line 1608 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr ip(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ip-address", ip);
    ctx.leave();
}
#line 2628 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 451:
#line 1617 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("client-classes", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.CLIENT_CLASSES);
}
#line 2639 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 452:
#line 1622 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2648 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 455:
#line 1631 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 2658 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 456:
#line 1635 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The name client class parameter is required.
    ctx.require("name", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
}
#line 2668 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 468:
#line 1659 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2676 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 469:
#line 1661 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr test(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("test", test);
    ctx.leave();
}
#line 2686 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 470:
#line 1670 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-id", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.SERVER_ID);
}
#line 2697 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 471:
#line 1675 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The type parameter is required.
    ctx.require("type", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2708 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 483:
#line 1697 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.DUID_TYPE);
}
#line 2716 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 484:
#line 1699 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("type", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 2725 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 485:
#line 1704 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("LLT", ctx.loc2pos(yystack_[0].location))); }
#line 2731 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 486:
#line 1705 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("EN", ctx.loc2pos(yystack_[0].location))); }
#line 2737 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 487:
#line 1706 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("LL", ctx.loc2pos(yystack_[0].location))); }
#line 2743 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 488:
#line 1709 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr htype(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("htype", htype);
}
#line 2752 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 489:
#line 1714 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2760 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 490:
#line 1716 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr id(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("identifier", id);
    ctx.leave();
}
#line 2770 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 491:
#line 1722 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr time(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("time", time);
}
#line 2779 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 492:
#line 1727 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr time(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("enterprise-id", time);
}
#line 2788 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 493:
#line 1734 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr time(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("dhcp4o6-port", time);
}
#line 2797 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 494:
#line 1741 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("control-socket", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.CONTROL_SOCKET);
}
#line 2808 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 495:
#line 1746 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2817 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 503:
#line 1762 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2825 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 504:
#line 1764 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr stype(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("socket-type", stype);
    ctx.leave();
}
#line 2835 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 505:
#line 1770 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2843 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 506:
#line 1772 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr name(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("socket-name", name);
    ctx.leave();
}
#line 2853 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 507:
#line 1780 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("dhcp-ddns", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.DHCP_DDNS);
}
#line 2864 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 508:
#line 1785 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The enable updates DHCP DDNS parameter is required.
    ctx.require("enable-updates", ctx.loc2pos(yystack_[2].location), ctx.loc2pos(yystack_[0].location));
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 2875 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 509:
#line 1792 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the dhcp-ddns map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 2885 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 510:
#line 1796 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // The enable updates DHCP DDNS parameter is required.
    ctx.require("enable-updates", ctx.loc2pos(yystack_[3].location), ctx.loc2pos(yystack_[0].location));
    // parsing completed
}
#line 2895 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 530:
#line 1825 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("enable-updates", b);
}
#line 2904 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 531:
#line 1830 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2912 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 532:
#line 1832 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr s(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("qualifying-suffix", s);
    ctx.leave();
}
#line 2922 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 533:
#line 1838 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2930 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 534:
#line 1840 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr s(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-ip", s);
    ctx.leave();
}
#line 2940 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 535:
#line 1846 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr i(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("server-port", i);
}
#line 2949 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 536:
#line 1851 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 2957 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 537:
#line 1853 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr s(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sender-ip", s);
    ctx.leave();
}
#line 2967 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 538:
#line 1859 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr i(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("sender-port", i);
}
#line 2976 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 539:
#line 1864 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr i(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("max-queue-size", i);
}
#line 2985 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 540:
#line 1869 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NCR_PROTOCOL);
}
#line 2993 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 541:
#line 1871 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("ncr-protocol", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 3002 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 542:
#line 1877 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("UDP", ctx.loc2pos(yystack_[0].location))); }
#line 3008 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 543:
#line 1878 "dhcp6_parser.yy" // lalr1.cc:859
    { yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("TCP", ctx.loc2pos(yystack_[0].location))); }
#line 3014 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 544:
#line 1881 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NCR_FORMAT);
}
#line 3022 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 545:
#line 1883 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr json(new StringElement("JSON", ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("ncr-format", json);
    ctx.leave();
}
#line 3032 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 546:
#line 1889 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("always-include-fqdn", b);
}
#line 3041 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 547:
#line 1894 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("override-no-update", b);
}
#line 3050 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 548:
#line 1899 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr b(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("override-client-update", b);
}
#line 3059 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 549:
#line 1904 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.REPLACE_CLIENT_NAME);
}
#line 3067 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 550:
#line 1906 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("replace-client-name", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 3076 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 551:
#line 1912 "dhcp6_parser.yy" // lalr1.cc:859
    {
      yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("when-present", ctx.loc2pos(yystack_[0].location))); 
      }
#line 3084 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 552:
#line 1915 "dhcp6_parser.yy" // lalr1.cc:859
    {
      yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("never", ctx.loc2pos(yystack_[0].location)));
      }
#line 3092 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 553:
#line 1918 "dhcp6_parser.yy" // lalr1.cc:859
    {
      yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("always", ctx.loc2pos(yystack_[0].location)));
      }
#line 3100 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 554:
#line 1921 "dhcp6_parser.yy" // lalr1.cc:859
    {
      yylhs.value.as< ElementPtr > () = ElementPtr(new StringElement("when-not-present", ctx.loc2pos(yystack_[0].location)));
      }
#line 3108 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 555:
#line 1924 "dhcp6_parser.yy" // lalr1.cc:859
    {
      error(yystack_[0].location, "boolean values for the replace-client-name are "
                "no longer supported");
      }
#line 3117 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 556:
#line 1930 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3125 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 557:
#line 1932 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr s(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("generated-prefix", s);
    ctx.leave();
}
#line 3135 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 558:
#line 1940 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3143 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 559:
#line 1942 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("Dhcp4", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 3152 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 560:
#line 1947 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3160 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 561:
#line 1949 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("DhcpDdns", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 3169 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 562:
#line 1954 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3177 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 563:
#line 1956 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.back()->set("Control-agent", yystack_[0].value.as< ElementPtr > ());
    ctx.leave();
}
#line 3186 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 564:
#line 1967 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("Logging", m);
    ctx.stack_.push_back(m);
    ctx.enter(ctx.LOGGING);
}
#line 3197 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 565:
#line 1972 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3206 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 566:
#line 1977 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // Parse the Logging map
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.push_back(m);
}
#line 3216 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 567:
#line 1981 "dhcp6_parser.yy" // lalr1.cc:859
    {
    // parsing completed
}
#line 3224 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 571:
#line 1997 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("loggers", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.LOGGERS);
}
#line 3235 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 572:
#line 2002 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3244 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 575:
#line 2014 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(l);
    ctx.stack_.push_back(l);
}
#line 3254 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 576:
#line 2018 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
}
#line 3262 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 586:
#line 2035 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr dl(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("debuglevel", dl);
}
#line 3271 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 587:
#line 2040 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3279 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 588:
#line 2042 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("severity", sev);
    ctx.leave();
}
#line 3289 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 589:
#line 2048 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr l(new ListElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output_options", l);
    ctx.stack_.push_back(l);
    ctx.enter(ctx.OUTPUT_OPTIONS);
}
#line 3300 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 590:
#line 2053 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
    ctx.leave();
}
#line 3309 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 593:
#line 2062 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr m(new MapElement(ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->add(m);
    ctx.stack_.push_back(m);
}
#line 3319 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 594:
#line 2066 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.stack_.pop_back();
}
#line 3327 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 601:
#line 2080 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ctx.enter(ctx.NO_KEYWORD);
}
#line 3335 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 602:
#line 2082 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr sev(new StringElement(yystack_[0].value.as< std::string > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("output", sev);
    ctx.leave();
}
#line 3345 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 603:
#line 2088 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr flush(new BoolElement(yystack_[0].value.as< bool > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("flush", flush);
}
#line 3354 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 604:
#line 2093 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr maxsize(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxsize", maxsize);
}
#line 3363 "dhcp6_parser.cc" // lalr1.cc:859
    break;

  case 605:
#line 2098 "dhcp6_parser.yy" // lalr1.cc:859
    {
    ElementPtr maxver(new IntElement(yystack_[0].value.as< int64_t > (), ctx.loc2pos(yystack_[0].location)));
    ctx.stack_.back()->set("maxver", maxver);
}
#line 3372 "dhcp6_parser.cc" // lalr1.cc:859
    break;


#line 3376 "dhcp6_parser.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  Dhcp6Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  Dhcp6Parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int Dhcp6Parser::yypact_ninf_ = -750;

  const signed char Dhcp6Parser::yytable_ninf_ = -1;

  const short int
  Dhcp6Parser::yypact_[] =
  {
     406,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,    51,    27,    42,   115,   123,
     140,   159,   160,   170,   180,   194,   207,   208,   215,   221,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,    27,   -88,
      36,    49,    32,   200,   150,    72,   141,   103,    92,   236,
     -46,   351,   109,  -750,    67,   240,   264,   279,   241,  -750,
    -750,  -750,  -750,  -750,   285,  -750,    34,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,   303,   319,   329,   339,
     341,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,   342,  -750,  -750,  -750,    40,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,   344,  -750,    54,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,   346,   352,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,    63,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,    71,
    -750,  -750,  -750,  -750,  -750,   359,  -750,   363,   364,  -750,
    -750,  -750,  -750,  -750,   133,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,   290,   315,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,   347,  -750,  -750,   366,  -750,  -750,  -750,   369,
    -750,  -750,   370,   368,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,   371,   373,  -750,
    -750,  -750,  -750,   372,   378,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,   161,  -750,  -750,
    -750,   379,  -750,  -750,   380,  -750,   381,   383,  -750,  -750,
     386,   387,   389,  -750,  -750,  -750,  -750,  -750,   162,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,   183,  -750,  -750,  -750,    27,
      27,  -750,   242,   390,   398,   400,   405,   407,  -750,    36,
    -750,   408,   409,   410,   220,   265,   266,   267,   268,   411,
     413,   414,   421,   424,   427,   428,   429,   430,   431,   432,
     433,   434,   288,   435,   437,    49,  -750,   439,   289,    32,
    -750,   440,   442,   443,   445,   446,   302,   295,   451,   467,
     468,   469,   200,  -750,   473,   150,  -750,   474,   325,   476,
     327,   328,    72,  -750,   479,   480,   481,   482,   483,   484,
     485,  -750,   141,  -750,   489,   490,   343,   491,   494,   495,
     345,  -750,    92,   496,   349,   350,  -750,   236,   498,   499,
       7,  -750,   353,   503,   504,   356,   507,   361,   362,   513,
     514,   365,   374,   375,   515,   518,   351,  -750,   519,   109,
    -750,  -750,  -750,   522,   520,   521,    27,    27,    27,  -750,
     525,   526,   527,  -750,  -750,  -750,  -750,  -750,   524,   530,
     531,   536,   384,   554,   555,   556,   557,   558,   559,   560,
     561,  -750,   562,   563,  -750,   566,  -750,  -750,   567,   568,
     412,   422,   423,  -750,  -750,   189,   425,   569,   570,  -750,
     426,  -750,   436,  -750,   438,  -750,  -750,  -750,   566,   566,
     566,   441,   444,   447,   448,  -750,   449,   450,  -750,   452,
     453,   454,  -750,  -750,   455,  -750,  -750,  -750,   456,    27,
    -750,  -750,   457,   458,  -750,   459,  -750,  -750,   -43,   460,
    -750,  -750,  -750,   116,   461,  -750,   575,  -750,    27,    49,
     109,  -750,  -750,  -750,    32,    74,    74,   574,   576,   577,
    -750,  -750,  -750,   578,   -42,    27,    66,   579,   580,    68,
      96,    58,   351,  -750,  -750,   581,   583,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,   585,   511,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,   588,
    -750,   205,   227,   243,  -750,  -750,  -750,  -750,   592,   594,
     595,   600,   609,  -750,  -750,  -750,   244,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
     262,  -750,   610,   612,  -750,  -750,   611,   615,  -750,  -750,
     613,   617,  -750,  -750,   616,   618,  -750,  -750,  -750,    44,
    -750,  -750,  -750,   619,  -750,  -750,  -750,   223,  -750,  -750,
    -750,  -750,   261,  -750,  -750,   620,   621,  -750,   623,   624,
     625,   626,   627,   628,   263,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,   629,   630,   631,  -750,  -750,  -750,
    -750,   280,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   283,  -750,  -750,  -750,   287,   470,  -750,
     632,   633,  -750,  -750,   634,   636,  -750,  -750,   635,   639,
    -750,  -750,   637,  -750,   314,  -750,  -750,  -750,  -750,   640,
     642,   643,   644,   497,   487,   500,   493,   501,   646,   648,
      74,  -750,  -750,   200,  -750,   574,    92,  -750,   576,   236,
    -750,   577,   367,  -750,   578,   -42,  -750,  -750,    66,  -750,
      37,   579,  -750,   -46,  -750,   580,   502,   505,   506,   508,
     509,   510,    68,  -750,   649,   653,   512,   516,   517,    96,
    -750,   654,   657,    58,  -750,  -750,  -750,   659,   664,   150,
    -750,   581,    72,  -750,   583,   141,  -750,   585,   665,  -750,
     153,   588,  -750,   321,   523,   529,   532,  -750,  -750,  -750,
    -750,  -750,   534,   535,  -750,   293,  -750,   660,  -750,   666,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   294,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,   667,   669,
    -750,  -750,  -750,  -750,   297,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   235,   538,  -750,  -750,  -750,  -750,   540,
     543,  -750,  -750,   548,   301,  -750,   305,  -750,   670,  -750,
     549,  -750,   673,  -750,  -750,  -750,  -750,  -750,   308,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,   367,  -750,   675,
    -750,    37,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,   680,   564,   705,   153,  -750,
    -750,   571,  -750,   668,  -750,   572,  -750,  -750,   703,  -750,
    -750,   322,  -750,    70,   703,  -750,  -750,   708,   709,   711,
     311,  -750,  -750,  -750,  -750,  -750,  -750,   712,   565,   573,
     584,    70,  -750,   591,  -750,  -750,  -750,  -750,  -750
  };

  const unsigned short int
  Dhcp6Parser::yydefact_[] =
  {
       0,     2,     4,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    45,    38,    34,    33,    30,    31,    32,    37,     3,
      35,    36,    58,     5,    70,     7,   106,     9,   222,    11,
     363,    13,   387,    15,   416,    17,   288,    19,   296,    21,
     333,    23,   187,    25,   509,    27,   566,    29,    47,    41,
       0,     0,     0,     0,     0,     0,   418,     0,   298,   335,
       0,     0,     0,    49,     0,    48,     0,     0,    42,    68,
     564,   558,   560,   562,     0,    67,     0,    60,    62,    64,
      65,    66,    63,   104,   118,   120,     0,     0,     0,     0,
       0,   214,   286,   325,   375,   377,   260,   160,   177,   168,
     451,   179,   198,   470,     0,   494,   507,    98,     0,    72,
      74,    75,    76,    77,    78,    81,    82,    83,    84,    86,
      85,    90,    91,    79,    80,    88,    89,    96,    97,    87,
      92,    93,    94,    95,   115,     0,   114,     0,   108,   110,
     111,   112,   113,   355,   379,   245,   247,   249,     0,     0,
     253,   251,   408,   447,   244,   226,   227,   228,   229,     0,
     224,   233,   234,   235,   238,   240,   236,   237,   230,   231,
     242,   243,   232,   239,   241,   373,   372,   369,   368,     0,
     365,   367,   370,   371,   401,     0,   404,     0,     0,   400,
     395,   394,   398,   399,     0,   389,   391,   392,   396,   397,
     393,   445,   433,   435,   437,   439,   441,   443,   432,   429,
     430,   431,     0,   419,   420,   424,   425,   422,   426,   427,
     428,   423,     0,   315,   150,     0,   319,   317,   322,     0,
     311,   312,     0,   299,   300,   302,   314,   303,   304,   305,
     321,   306,   307,   308,   309,   310,   349,     0,     0,   347,
     348,   351,   352,     0,   336,   337,   339,   340,   341,   342,
     343,   344,   345,   346,   194,   196,   191,     0,   189,   192,
     193,     0,   531,   533,     0,   536,     0,     0,   540,   544,
       0,     0,     0,   549,   556,   529,   527,   528,     0,   511,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   571,     0,   568,   570,    46,     0,
       0,    39,     0,     0,     0,     0,     0,     0,    57,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,   364,     0,     0,     0,
       0,     0,     0,   388,     0,     0,     0,     0,     0,     0,
       0,   417,     0,   289,     0,     0,     0,     0,     0,     0,
       0,   297,     0,     0,     0,     0,   334,     0,     0,     0,
       0,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   510,     0,     0,
     567,    50,    43,     0,     0,     0,     0,     0,     0,    61,
       0,     0,     0,    99,   100,   101,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   493,     0,     0,    73,     0,   117,   109,     0,     0,
       0,     0,     0,   258,   259,     0,     0,     0,     0,   225,
       0,   366,     0,   403,     0,   406,   407,   390,     0,     0,
       0,     0,     0,     0,     0,   421,     0,     0,   313,     0,
       0,     0,   324,   301,     0,   353,   354,   338,     0,     0,
     190,   530,     0,     0,   535,     0,   538,   539,     0,     0,
     546,   547,   548,     0,     0,   512,     0,   569,     0,     0,
       0,   559,   561,   563,     0,     0,     0,   216,   290,   327,
      40,   376,   378,   262,     0,    47,     0,     0,   181,     0,
       0,     0,     0,    51,   116,   357,   381,   246,   248,   250,
     255,   256,   257,   254,   252,   410,     0,   374,   402,   405,
     446,   434,   436,   438,   440,   442,   444,   316,   151,   320,
     318,   323,   350,   195,   197,   532,   534,   537,   542,   543,
     541,   545,   551,   552,   553,   554,   555,   550,   557,     0,
      44,     0,     0,     0,   137,   143,   145,   147,     0,     0,
       0,     0,     0,   156,   158,   136,     0,   122,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   220,     0,   217,   218,   294,     0,   291,   292,   331,
       0,   328,   329,   266,     0,   263,   264,   166,   167,     0,
     162,   164,   165,     0,   175,   176,   172,     0,   170,   173,
     174,   455,     0,   453,   185,     0,   182,   183,     0,     0,
       0,     0,     0,     0,     0,   200,   202,   203,   204,   205,
     206,   207,   483,   489,     0,     0,     0,   482,   479,   480,
     481,     0,   472,   474,   477,   475,   476,   478,   503,   505,
     502,   500,   501,     0,   496,   498,   499,     0,    53,   361,
       0,   358,   359,   385,     0,   382,   383,   414,     0,   411,
     412,   449,     0,   575,     0,   573,    69,   565,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   121,     0,   215,     0,   298,   287,     0,   335,
     326,     0,     0,   261,     0,     0,   161,   178,     0,   169,
     457,     0,   452,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,     0,
     471,     0,     0,     0,   495,   508,    55,     0,    54,     0,
     356,     0,     0,   380,     0,   418,   409,     0,     0,   448,
       0,     0,   572,     0,     0,     0,     0,   149,   152,   153,
     154,   155,     0,     0,   123,     0,   219,     0,   293,     0,
     330,   285,   280,   282,   274,   275,   270,   271,   272,   273,
     279,   278,   281,     0,   268,   276,   283,   284,   277,   265,
     163,   171,   468,   466,   467,   463,   464,   465,     0,   458,
     459,   461,   462,   454,     0,   184,   208,   209,   210,   211,
     212,   213,   201,     0,     0,   488,   491,   492,   473,     0,
       0,   497,    52,     0,     0,   360,     0,   384,     0,   413,
       0,   589,     0,   587,   585,   579,   583,   584,     0,   577,
     581,   582,   580,   574,   139,   140,   141,   142,   138,   144,
     146,   148,   157,   159,   221,   295,   332,     0,   267,     0,
     456,     0,   186,   485,   486,   487,   484,   490,   504,   506,
      56,   362,   386,   415,   450,     0,     0,     0,     0,   576,
     269,     0,   460,     0,   586,     0,   578,   469,     0,   588,
     593,     0,   591,     0,     0,   590,   601,     0,     0,     0,
       0,   595,   597,   598,   599,   600,   592,     0,     0,     0,
       0,     0,   594,     0,   603,   604,   605,   596,   602
  };

  const short int
  Dhcp6Parser::yypgoto_[] =
  {
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,     6,  -750,   105,  -750,
    -750,  -750,  -750,  -750,  -750,    82,  -750,  -139,  -750,  -750,
    -750,   -70,  -750,  -750,  -750,   391,  -750,  -750,  -750,  -750,
     178,   355,   -72,   -58,   -56,   -55,  -750,  -750,  -750,  -750,
    -750,   182,   377,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
     185,   -16,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,    -7,  -750,  -553,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,   -28,  -544,  -750,  -750,  -750,
    -750,   -19,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
     -27,  -750,  -750,  -750,   -15,   333,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   -23,  -750,  -750,  -750,  -750,  -750,  -750,
    -749,  -750,  -750,  -750,     5,  -750,  -750,  -750,     8,   385,
    -750,  -750,  -746,  -750,  -742,  -750,   -34,  -750,  -741,  -750,
    -750,  -750,  -739,  -750,  -750,  -750,  -750,     2,  -750,  -750,
    -147,   694,  -750,  -750,  -750,  -750,  -750,    14,  -750,  -750,
    -750,    18,  -750,   376,  -750,   -65,  -750,  -750,  -750,  -750,
    -750,   -60,  -750,  -750,  -750,  -750,  -750,    -6,  -750,  -750,
    -750,    15,  -750,  -750,  -750,    16,  -750,   360,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,   -21,
    -750,  -750,  -750,   -18,   393,  -750,  -750,   -48,  -750,   -20,
    -750,  -750,  -750,  -750,  -750,   -17,  -750,  -750,  -750,   -13,
     392,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,   -24,  -750,  -750,  -750,   -14,  -750,   395,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -733,  -750,  -750,  -750,  -750,  -750,  -750,
      21,  -750,  -750,  -750,  -135,  -750,  -750,  -750,  -750,  -750,
    -750,     9,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,     1,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   233,   382,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,   260,   388,
    -750,  -750,  -750,   -10,  -750,  -750,  -136,  -750,  -750,  -750,
    -750,  -750,  -750,  -150,  -750,  -750,  -166,  -750,  -750,  -750,
    -750,  -750
  };

  const short int
  Dhcp6Parser::yydefgoto_[] =
  {
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    83,    39,    40,    69,
     551,    87,    88,    41,    68,    84,    85,   564,   718,   797,
     798,   127,    43,    70,    96,    97,    98,   333,    45,    71,
     128,   129,   130,   131,   132,   133,   134,   135,   341,    47,
      72,   157,   158,   159,   367,   160,   136,   342,   137,   343,
     626,   627,   628,   739,   908,   629,   740,   630,   741,   631,
     742,   632,   251,   405,   634,   635,   636,   637,   638,   748,
     639,   749,   138,   355,   659,   660,   661,   662,   139,   357,
     667,   668,   669,   670,   140,   356,   141,   359,   675,   676,
     677,   773,    63,    80,   287,   288,   289,   418,   290,   419,
     142,   360,   684,   685,   686,   687,   688,   689,   690,   691,
     143,   349,   642,   643,   644,   753,    49,    73,   179,   180,
     181,   373,   182,   374,   183,   375,   184,   379,   185,   378,
     573,   186,   187,   144,   354,   654,   655,   656,   762,   843,
     844,   145,   350,    57,    77,   646,   647,   648,   756,    59,
      78,   252,   253,   254,   255,   256,   257,   258,   404,   259,
     408,   260,   407,   261,   262,   409,   263,   146,   351,   650,
     651,   652,   759,    61,    79,   273,   274,   275,   276,   277,
     413,   278,   279,   280,   281,   189,   371,   720,   721,   722,
     799,    51,    74,   199,   200,   201,   384,   147,   352,   148,
     353,   192,   372,   724,   725,   726,   802,    53,    75,   214,
     215,   216,   387,   217,   218,   389,   219,   220,   193,   380,
     728,   729,   730,   805,    55,    76,   232,   233,   234,   235,
     395,   236,   396,   237,   397,   238,   398,   239,   399,   240,
     400,   241,   394,   194,   381,   732,   808,   149,   358,   672,
     673,   770,   858,   859,   860,   861,   862,   919,   150,   361,
     701,   702,   703,   784,   926,   704,   705,   785,   706,   707,
     151,   152,   363,   713,   714,   715,   791,   716,   792,   153,
     364,    65,    81,   308,   309,   310,   311,   423,   312,   424,
     313,   314,   426,   315,   316,   317,   429,   600,   318,   430,
     319,   320,   321,   322,   434,   607,   323,   435,    99,   335,
     100,   336,   101,   337,   102,   334,    67,    82,   325,   326,
     327,   438,   734,   735,   810,   898,   899,   900,   901,   937,
     902,   935,   951,   952,   953,   960,   961,   962,   967,   963,
     964,   965
  };

  const unsigned short int
  Dhcp6Parser::yytable_[] =
  {
      95,   175,   156,   174,   196,   209,   228,   698,   250,   269,
     286,   305,   666,   837,   271,   176,   838,   177,   178,   272,
     839,   841,    38,   842,   161,   190,   202,   212,   230,   848,
     264,   282,    31,   306,    32,   657,    33,   339,   284,   285,
     197,   210,   340,   365,   154,   155,    89,   765,   366,    42,
     766,    30,   162,   191,   203,   213,   231,   369,   265,   283,
     103,   307,   370,   104,   105,    86,   382,   188,   198,   211,
     229,   383,   270,   328,   385,   113,   244,   598,   599,   386,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     614,   284,   285,   114,   115,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   114,   115,    94,   243,   852,
     113,   658,   692,   244,   114,   115,   116,   117,   118,   119,
     120,   619,    44,   204,   205,   206,   207,   208,   114,   115,
      46,   244,   121,   245,   246,   122,   392,   247,   248,   249,
     112,   393,   123,   657,   664,   171,   665,    48,   114,   115,
     124,   125,   114,   115,   126,   678,   679,   680,   681,   682,
     683,   708,   709,    90,   420,   436,    50,    52,   837,   421,
     437,   838,    91,    92,    93,   839,   841,    54,   842,   113,
      34,    35,    36,    37,   848,    94,   439,    56,   113,    94,
      94,   440,   244,   693,   694,   695,   696,   114,   115,   195,
     956,    58,    94,   957,   958,   959,   114,   115,   365,   114,
     115,    94,   221,   736,    60,    62,   222,   223,   224,   225,
     226,   227,    64,   171,   666,    94,   768,    94,    66,   769,
     439,   106,   107,   108,   109,   737,   698,   324,   113,   602,
     603,   604,   605,   329,   332,    94,   369,   750,   163,    94,
     164,   738,   751,   570,   571,   572,   114,   115,   165,   166,
     167,   168,   169,   170,   771,   750,   782,   772,   330,    95,
     752,   783,   606,   171,   172,   244,   266,   245,   246,   267,
     268,   173,   891,   789,   892,   893,   793,   331,   790,   338,
     436,   794,   114,   115,    94,   795,   382,   917,   401,   156,
     420,   914,   918,    94,   385,   922,    94,   344,   392,   931,
     175,   938,   174,   932,   971,   196,   939,   811,   402,   972,
     812,   161,   209,   345,   176,   954,   177,   178,   955,   923,
     924,   925,   228,   346,   190,   441,   442,   202,   904,   905,
     906,   907,   250,   347,   212,   348,   362,   269,   368,   162,
     376,   197,   271,    94,   230,   403,   377,   272,   210,   580,
     581,   582,   191,   388,   264,   203,   305,   390,   391,   282,
     406,   412,   213,   410,   453,   414,   188,   415,   411,   198,
     416,   417,   231,   422,   425,   427,   211,   428,   306,    94,
     431,   432,   265,   433,   444,   443,   229,   283,   106,   107,
     108,   109,   445,   111,   446,   113,   244,   114,   115,   447,
     270,   448,   450,   451,   452,   458,   307,   459,   460,   454,
     455,   456,   457,   114,   115,   461,   166,   167,   462,   169,
     170,   463,   464,   465,   466,   467,   468,   469,   470,   472,
     171,   473,   471,   475,   478,   476,   479,   480,   173,   481,
     482,   484,   541,   542,   543,   485,   483,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   486,   487,   488,   156,   625,   625,   490,   492,   493,
     494,   495,   496,   498,   499,   500,   501,   502,   503,   504,
     697,   710,   305,   506,   507,   509,   161,   508,   510,   511,
     514,   512,   518,   519,    94,   515,   516,   522,   523,   521,
     524,   525,   699,   711,   306,   526,   527,   528,   529,   533,
      94,   530,   534,   536,   162,   594,   538,   539,   540,   547,
     531,   532,   544,   545,   546,   548,   549,   552,   633,   633,
     700,   712,   307,    32,   610,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   553,
     554,   555,   556,   557,   558,   567,   550,   559,   560,   561,
     562,   563,   565,   566,   575,   568,   569,   576,   574,   577,
     609,   641,   601,   645,   649,   653,   671,   674,   719,   578,
     723,   579,   727,   731,   583,   733,   743,   584,   744,   745,
     585,   586,   587,   588,   746,   589,   590,   591,   592,   593,
     595,   596,   597,   747,   608,   755,   754,   757,   758,   760,
     761,   764,   763,   796,   775,   767,   774,   776,   777,   778,
     779,   780,   781,   786,   787,   788,   801,   663,   800,   804,
     803,   806,   807,   818,   813,   809,   814,   815,   816,   820,
     822,   817,   823,   873,   819,   821,   866,   874,   879,   867,
     868,   880,   869,   870,   871,   882,   875,   883,   915,   890,
     876,   877,   921,   948,   916,   920,   909,   936,   933,   941,
     625,   175,   910,   174,   943,   911,   250,   912,   913,   269,
     832,   927,   831,   928,   271,   176,   929,   177,   178,   272,
     853,   930,   934,   286,   833,   190,   834,   835,   264,   945,
     950,   282,   968,   969,   846,   970,   973,   611,   944,   697,
     474,   974,   856,   710,   947,   949,   613,   975,   840,   196,
     449,   640,   209,   191,   824,   228,   265,   850,   976,   283,
     894,   699,   847,   633,   978,   711,   477,   188,   865,   851,
     857,   202,   270,   520,   212,   836,   845,   230,   864,   872,
     826,   825,   896,   854,   855,   197,   849,   489,   210,   700,
     940,   242,   828,   712,   827,   829,   830,   517,   491,   203,
     885,   884,   213,   889,   497,   231,   942,   887,   513,   886,
     897,   888,   863,   198,   881,   717,   211,   505,   878,   229,
     612,   903,   946,   895,   966,   977,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   535,     0,
       0,     0,     0,     0,     0,     0,     0,   537,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   832,     0,   831,     0,     0,
       0,   853,     0,     0,     0,     0,     0,     0,     0,   833,
       0,   834,   835,     0,     0,     0,     0,     0,   894,   846,
       0,     0,     0,   856,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   840,     0,     0,     0,     0,     0,     0,
     896,     0,     0,     0,     0,     0,     0,   847,     0,     0,
       0,   857,     0,     0,     0,     0,     0,     0,     0,     0,
     836,   845,     0,     0,   854,   855,     0,     0,   897,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   895
  };

  const short int
  Dhcp6Parser::yycheck_[] =
  {
      70,    73,    72,    73,    74,    75,    76,   560,    78,    79,
      80,    81,   556,   762,    79,    73,   762,    73,    73,    79,
     762,   762,    16,   762,    72,    73,    74,    75,    76,   762,
      78,    79,     5,    81,     7,    77,     9,     3,    84,    85,
      74,    75,     8,     3,    12,    13,    10,     3,     8,     7,
       6,     0,    72,    73,    74,    75,    76,     3,    78,    79,
      11,    81,     8,    14,    15,   153,     3,    73,    74,    75,
      76,     8,    79,     6,     3,    38,    39,   120,   121,     8,
      31,    32,    33,    34,    35,    36,    37,    38,    56,    57,
      16,    84,    85,    56,    57,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    56,    57,   153,    16,    72,
      38,   153,    16,    39,    56,    57,    67,    68,    69,    70,
      71,    25,     7,    51,    52,    53,    54,    55,    56,    57,
       7,    39,    83,    41,    42,    86,     3,    45,    46,    47,
      37,     8,    93,    77,    78,    73,    80,     7,    56,    57,
     101,   102,    56,    57,   105,    87,    88,    89,    90,    91,
      92,   103,   104,   127,     3,     3,     7,     7,   917,     8,
       8,   917,   136,   137,   138,   917,   917,     7,   917,    38,
     153,   154,   155,   156,   917,   153,     3,     7,    38,   153,
     153,     8,    39,    97,    98,    99,   100,    56,    57,    49,
     130,     7,   153,   133,   134,   135,    56,    57,     3,    56,
      57,   153,    71,     8,     7,     7,    75,    76,    77,    78,
      79,    80,     7,    73,   768,   153,     3,   153,     7,     6,
       3,    31,    32,    33,    34,     8,   789,   128,    38,   123,
     124,   125,   126,     3,     3,   153,     3,     3,    48,   153,
      50,     8,     8,    64,    65,    66,    56,    57,    58,    59,
      60,    61,    62,    63,     3,     3,     3,     6,     4,   339,
       8,     8,   156,    73,    74,    39,    40,    41,    42,    43,
      44,    81,   129,     3,   131,   132,     3,     8,     8,     4,
       3,     8,    56,    57,   153,     8,     3,     3,     8,   369,
       3,     8,     8,   153,     3,     8,   153,     4,     3,     8,
     382,     3,   382,     8,     3,   385,     8,     3,     3,     8,
       6,   369,   392,     4,   382,     3,   382,   382,     6,    94,
      95,    96,   402,     4,   382,   329,   330,   385,    17,    18,
      19,    20,   412,     4,   392,     4,     4,   417,     4,   369,
       4,   385,   417,   153,   402,     8,     4,   417,   392,   498,
     499,   500,   382,     4,   412,   385,   436,     4,     4,   417,
       4,     3,   392,     4,   154,     4,   382,     4,     8,   385,
       8,     3,   402,     4,     4,     4,   392,     4,   436,   153,
       4,     4,   412,     4,     4,   153,   402,   417,    31,    32,
      33,    34,     4,    36,     4,    38,    39,    56,    57,     4,
     417,     4,     4,     4,     4,     4,   436,     4,     4,   154,
     154,   154,   154,    56,    57,     4,    59,    60,     4,    62,
      63,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      73,     4,   154,     4,     4,   156,     4,     4,    81,     4,
       4,   156,   446,   447,   448,     4,   154,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     4,     4,     4,   544,   545,   546,     4,     4,   154,
       4,   154,   154,     4,     4,     4,     4,     4,     4,     4,
     560,   561,   562,     4,     4,     4,   544,   154,     4,     4,
       4,   156,     4,     4,   153,   156,   156,     4,     4,   156,
     154,     4,   560,   561,   562,   154,   154,     4,     4,     4,
     153,   156,     4,     4,   544,   519,     4,     7,     7,     5,
     156,   156,     7,     7,     7,     5,     5,   153,   545,   546,
     560,   561,   562,     7,   538,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     5,
       5,     5,     5,     5,     5,   153,   461,     7,     7,     7,
       7,     5,     5,     5,     5,   153,   153,     7,   153,   153,
       5,     7,   122,     7,     7,     7,     7,     7,     7,   153,
       7,   153,     7,    82,   153,     7,     4,   153,     4,     4,
     153,   153,   153,   153,     4,   153,   153,   153,   153,   153,
     153,   153,   153,     4,   153,     3,     6,     6,     3,     6,
       3,     3,     6,   153,     3,     6,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,   555,     6,     3,
       6,     6,     3,   156,     4,     8,     4,     4,     4,   156,
       4,   154,     4,     4,   154,   154,   154,     4,     4,   154,
     154,     4,   154,   154,   154,     6,   154,     3,     8,     4,
     154,   154,     3,     5,     8,     8,   153,     4,     8,     4,
     750,   753,   153,   753,     4,   153,   756,   153,   153,   759,
     762,   153,   762,   153,   759,   753,   153,   753,   753,   759,
     770,   153,   153,   773,   762,   753,   762,   762,   756,     4,
       7,   759,     4,     4,   762,     4,     4,   539,   154,   789,
     365,   156,   770,   793,   153,   153,   544,   154,   762,   799,
     339,   546,   802,   753,   750,   805,   756,   765,   154,   759,
     810,   789,   762,   750,   153,   793,   369,   753,   775,   768,
     770,   799,   759,   420,   802,   762,   762,   805,   773,   782,
     755,   753,   810,   770,   770,   799,   764,   382,   802,   789,
     917,    77,   758,   793,   756,   759,   761,   417,   385,   799,
     801,   799,   802,   807,   392,   805,   921,   804,   412,   802,
     810,   805,   771,   799,   793,   562,   802,   402,   789,   805,
     540,   811,   938,   810,   954,   971,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   917,    -1,   917,    -1,    -1,
      -1,   921,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   917,
      -1,   917,   917,    -1,    -1,    -1,    -1,    -1,   938,   917,
      -1,    -1,    -1,   921,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   917,    -1,    -1,    -1,    -1,    -1,    -1,
     938,    -1,    -1,    -1,    -1,    -1,    -1,   917,    -1,    -1,
      -1,   921,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     917,   917,    -1,    -1,   921,   921,    -1,    -1,   938,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   938
  };

  const unsigned short int
  Dhcp6Parser::yystos_[] =
  {
       0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,     5,     7,     9,   153,   154,   155,   156,   173,   174,
     175,   180,     7,   189,     7,   195,     7,   206,     7,   283,
       7,   358,     7,   374,     7,   391,     7,   310,     7,   316,
       7,   340,     7,   259,     7,   448,     7,   483,   181,   176,
     190,   196,   207,   284,   359,   375,   392,   311,   317,   341,
     260,   449,   484,   173,   182,   183,   153,   178,   179,    10,
     127,   136,   137,   138,   153,   188,   191,   192,   193,   475,
     477,   479,   481,    11,    14,    15,    31,    32,    33,    34,
      35,    36,    37,    38,    56,    57,    67,    68,    69,    70,
      71,    83,    86,    93,   101,   102,   105,   188,   197,   198,
     199,   200,   201,   202,   203,   204,   213,   215,   239,   245,
     251,   253,   267,   277,   300,   308,   334,   364,   366,   414,
     425,   437,   438,   446,    12,    13,   188,   208,   209,   210,
     212,   364,   366,    48,    50,    58,    59,    60,    61,    62,
      63,    73,    74,    81,   188,   199,   200,   201,   202,   285,
     286,   287,   289,   291,   293,   295,   298,   299,   334,   352,
     364,   366,   368,   385,   410,    49,   188,   293,   334,   360,
     361,   362,   364,   366,    51,    52,    53,    54,    55,   188,
     293,   334,   364,   366,   376,   377,   378,   380,   381,   383,
     384,    71,    75,    76,    77,    78,    79,    80,   188,   334,
     364,   366,   393,   394,   395,   396,   398,   400,   402,   404,
     406,   408,   308,    16,    39,    41,    42,    45,    46,    47,
     188,   229,   318,   319,   320,   321,   322,   323,   324,   326,
     328,   330,   331,   333,   364,   366,    40,    43,    44,   188,
     229,   322,   328,   342,   343,   344,   345,   346,   348,   349,
     350,   351,   364,   366,    84,    85,   188,   261,   262,   263,
     265,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   188,   364,   366,   450,   451,
     452,   453,   455,   457,   458,   460,   461,   462,   465,   467,
     468,   469,   470,   473,   128,   485,   486,   487,     6,     3,
       4,     8,     3,   194,   482,   476,   478,   480,     4,     3,
       8,   205,   214,   216,     4,     4,     4,     4,     4,   278,
     309,   335,   365,   367,   301,   240,   252,   246,   415,   254,
     268,   426,     4,   439,   447,     3,     8,   211,     4,     3,
       8,   353,   369,   288,   290,   292,     4,     4,   296,   294,
     386,   411,     3,     8,   363,     3,     8,   379,     4,   382,
       4,     4,     3,     8,   409,   397,   399,   401,   403,   405,
     407,     8,     3,     8,   325,   230,     4,   329,   327,   332,
       4,     8,     3,   347,     4,     4,     8,     3,   264,   266,
       3,     8,     4,   454,   456,     4,   459,     4,     4,   463,
     466,     4,     4,     4,   471,   474,     3,     8,   488,     3,
       8,   173,   173,   153,     4,     4,     4,     4,     4,   192,
       4,     4,     4,   154,   154,   154,   154,   154,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,   154,     4,     4,   198,     4,   156,   209,     4,     4,
       4,     4,     4,   154,   156,     4,     4,     4,     4,   286,
       4,   361,     4,   154,     4,   154,   154,   377,     4,     4,
       4,     4,     4,     4,     4,   395,     4,     4,   154,     4,
       4,     4,   156,   320,     4,   156,   156,   344,     4,     4,
     262,   156,     4,     4,   154,     4,   154,   154,     4,     4,
     156,   156,   156,     4,     4,   451,     4,   486,     4,     7,
       7,   173,   173,   173,     7,     7,     7,     5,     5,     5,
     175,   177,   153,     5,     5,     5,     5,     5,     5,     7,
       7,     7,     7,     5,   184,     5,     5,   153,   153,   153,
      64,    65,    66,   297,   153,     5,     7,   153,   153,   153,
     184,   184,   184,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   173,   153,   153,   153,   120,   121,
     464,   122,   123,   124,   125,   126,   156,   472,   153,     5,
     173,   197,   485,   208,    16,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   188,   217,   218,   219,   222,
     224,   226,   228,   229,   231,   232,   233,   234,   235,   237,
     217,     7,   279,   280,   281,     7,   312,   313,   314,     7,
     336,   337,   338,     7,   302,   303,   304,    77,   153,   241,
     242,   243,   244,   182,    78,    80,   243,   247,   248,   249,
     250,     7,   416,   417,     7,   255,   256,   257,    87,    88,
      89,    90,    91,    92,   269,   270,   271,   272,   273,   274,
     275,   276,    16,    97,    98,    99,   100,   188,   231,   364,
     366,   427,   428,   429,   432,   433,   435,   436,   103,   104,
     188,   364,   366,   440,   441,   442,   444,   450,   185,     7,
     354,   355,   356,     7,   370,   371,   372,     7,   387,   388,
     389,    82,   412,     7,   489,   490,     8,     8,     8,   220,
     223,   225,   227,     4,     4,     4,     4,     4,   236,   238,
       3,     8,     8,   282,     6,     3,   315,     6,     3,   339,
       6,     3,   305,     6,     3,     3,     6,     6,     3,     6,
     418,     3,     6,   258,     6,     3,     4,     4,     4,     4,
       4,     4,     3,     8,   430,   434,     4,     4,     4,     3,
       8,   443,   445,     3,     8,     8,   153,   186,   187,   357,
       6,     3,   373,     6,     3,   390,     6,     3,   413,     8,
     491,     3,     6,     4,     4,     4,     4,   154,   156,   154,
     156,   154,     4,     4,   218,   285,   281,   318,   314,   342,
     338,   188,   199,   200,   201,   202,   229,   277,   289,   291,
     293,   295,   299,   306,   307,   334,   364,   366,   410,   304,
     242,   248,    72,   188,   229,   334,   364,   366,   419,   420,
     421,   422,   423,   417,   261,   257,   154,   154,   154,   154,
     154,   154,   270,     4,     4,   154,   154,   154,   428,     4,
       4,   441,     6,     3,   360,   356,   376,   372,   393,   389,
       4,   129,   131,   132,   188,   229,   364,   366,   492,   493,
     494,   495,   497,   490,    17,    18,    19,    20,   221,   153,
     153,   153,   153,   153,     8,     8,     8,     3,     8,   424,
       8,     3,     8,    94,    95,    96,   431,   153,   153,   153,
     153,     8,     8,     8,   153,   498,     4,   496,     3,     8,
     307,     4,   421,     4,   154,     4,   493,   153,     5,   153,
       7,   499,   500,   501,     3,     6,   130,   133,   134,   135,
     502,   503,   504,   506,   507,   508,   500,   505,     4,     4,
       4,     3,     8,     4,   156,   154,   154,   503,   153
  };

  const unsigned short int
  Dhcp6Parser::yyr1_[] =
  {
       0,   157,   159,   158,   160,   158,   161,   158,   162,   158,
     163,   158,   164,   158,   165,   158,   166,   158,   167,   158,
     168,   158,   169,   158,   170,   158,   171,   158,   172,   158,
     173,   173,   173,   173,   173,   173,   173,   174,   176,   175,
     177,   178,   178,   179,   179,   181,   180,   182,   182,   183,
     183,   185,   184,   186,   186,   187,   187,   188,   190,   189,
     191,   191,   192,   192,   192,   192,   192,   192,   194,   193,
     196,   195,   197,   197,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   199,
     200,   201,   202,   203,   205,   204,   207,   206,   208,   208,
     209,   209,   209,   209,   209,   211,   210,   212,   214,   213,
     216,   215,   217,   217,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   220,   219,   221,
     221,   221,   221,   223,   222,   225,   224,   227,   226,   228,
     230,   229,   231,   232,   233,   234,   236,   235,   238,   237,
     240,   239,   241,   241,   242,   242,   243,   244,   246,   245,
     247,   247,   248,   248,   248,   249,   250,   252,   251,   254,
     253,   255,   255,   256,   256,   258,   257,   260,   259,   261,
     261,   261,   262,   262,   264,   263,   266,   265,   268,   267,
     269,   269,   270,   270,   270,   270,   270,   270,   271,   272,
     273,   274,   275,   276,   278,   277,   279,   279,   280,   280,
     282,   281,   284,   283,   285,   285,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   288,   287,   290,   289,   292,
     291,   294,   293,   296,   295,   297,   297,   297,   298,   299,
     301,   300,   302,   302,   303,   303,   305,   304,   306,   306,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   309,   308,   311,   310,
     312,   312,   313,   313,   315,   314,   317,   316,   318,   318,
     319,   319,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   321,   322,   323,   325,   324,   327,   326,   329,
     328,   330,   332,   331,   333,   335,   334,   336,   336,   337,
     337,   339,   338,   341,   340,   342,   342,   343,   343,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   345,   347,
     346,   348,   349,   350,   351,   353,   352,   354,   354,   355,
     355,   357,   356,   359,   358,   360,   360,   361,   361,   361,
     361,   361,   361,   363,   362,   365,   364,   367,   366,   369,
     368,   370,   370,   371,   371,   373,   372,   375,   374,   376,
     376,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   379,   378,   380,   382,   381,   383,   384,   386,   385,
     387,   387,   388,   388,   390,   389,   392,   391,   393,   393,
     394,   394,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   397,   396,   399,   398,   401,   400,   403,
     402,   405,   404,   407,   406,   409,   408,   411,   410,   413,
     412,   415,   414,   416,   416,   418,   417,   419,   419,   420,
     420,   421,   421,   421,   421,   421,   421,   422,   424,   423,
     426,   425,   427,   427,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   430,   429,   431,   431,   431,   432,   434,
     433,   435,   436,   437,   439,   438,   440,   440,   441,   441,
     441,   441,   441,   443,   442,   445,   444,   447,   446,   449,
     448,   450,   450,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     452,   454,   453,   456,   455,   457,   459,   458,   460,   461,
     463,   462,   464,   464,   466,   465,   467,   468,   469,   471,
     470,   472,   472,   472,   472,   472,   474,   473,   476,   475,
     478,   477,   480,   479,   482,   481,   484,   483,   485,   485,
     486,   488,   487,   489,   489,   491,   490,   492,   492,   493,
     493,   493,   493,   493,   493,   493,   494,   496,   495,   498,
     497,   499,   499,   501,   500,   502,   502,   503,   503,   503,
     503,   505,   504,   506,   507,   508
  };

  const unsigned char
  Dhcp6Parser::yyr2_[] =
  {
       0,     2,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     0,     1,     3,     5,     0,     4,     0,     1,     1,
       3,     0,     4,     0,     1,     1,     3,     2,     0,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     0,     6,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     0,     6,     0,     4,     1,     3,
       1,     1,     1,     1,     1,     0,     4,     3,     0,     6,
       0,     6,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     1,
       1,     1,     1,     0,     4,     0,     4,     0,     4,     3,
       0,     4,     3,     3,     3,     3,     0,     4,     0,     4,
       0,     6,     1,     3,     1,     1,     1,     1,     0,     6,
       1,     3,     1,     1,     1,     1,     1,     0,     6,     0,
       6,     0,     1,     1,     3,     0,     4,     0,     4,     1,
       3,     1,     1,     1,     0,     4,     0,     4,     0,     6,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     0,     6,     0,     1,     1,     3,
       0,     4,     0,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     1,     1,     3,     3,
       0,     6,     0,     1,     1,     3,     0,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     6,     0,     4,
       0,     1,     1,     3,     0,     4,     0,     4,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     0,     4,     0,     4,     0,
       4,     1,     0,     4,     3,     0,     6,     0,     1,     1,
       3,     0,     4,     0,     4,     0,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     1,     3,     3,     0,     6,     0,     1,     1,
       3,     0,     4,     0,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     4,     0,     4,     0,
       6,     0,     1,     1,     3,     0,     4,     0,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     3,     0,     4,     3,     3,     0,     6,
       0,     1,     1,     3,     0,     4,     0,     4,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     6,     0,
       4,     0,     6,     1,     3,     0,     4,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     6,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     1,     1,     1,     3,     0,
       4,     3,     3,     3,     0,     6,     1,     3,     1,     1,
       1,     1,     1,     0,     4,     0,     4,     0,     6,     0,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     4,     0,     4,     3,     0,     4,     3,     3,
       0,     4,     1,     1,     0,     4,     3,     3,     3,     0,
       4,     1,     1,     1,     1,     1,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     6,     0,     4,     1,     3,
       1,     0,     6,     1,     3,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     4,     0,
       6,     1,     3,     0,     4,     1,     3,     1,     1,     1,
       1,     0,     4,     3,     3,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const Dhcp6Parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "\":\"", "\"[\"",
  "\"]\"", "\"{\"", "\"}\"", "\"null\"", "\"Dhcp6\"",
  "\"interfaces-config\"", "\"interfaces\"", "\"re-detect\"",
  "\"lease-database\"", "\"hosts-database\"", "\"type\"", "\"memfile\"",
  "\"mysql\"", "\"postgresql\"", "\"cql\"", "\"user\"", "\"password\"",
  "\"host\"", "\"port\"", "\"persist\"", "\"lfc-interval\"",
  "\"readonly\"", "\"connect-timeout\"", "\"contact-points\"",
  "\"keyspace\"", "\"preferred-lifetime\"", "\"valid-lifetime\"",
  "\"renew-timer\"", "\"rebind-timer\"", "\"decline-probation-period\"",
  "\"subnet6\"", "\"option-def\"", "\"option-data\"", "\"name\"",
  "\"data\"", "\"code\"", "\"space\"", "\"csv-format\"", "\"always-send\"",
  "\"record-types\"", "\"encapsulate\"", "\"array\"", "\"pools\"",
  "\"pool\"", "\"pd-pools\"", "\"prefix\"", "\"prefix-len\"",
  "\"excluded-prefix\"", "\"excluded-prefix-len\"", "\"delegated-len\"",
  "\"user-context\"", "\"comment\"", "\"subnet\"", "\"interface\"",
  "\"interface-id\"", "\"id\"", "\"rapid-commit\"", "\"reservation-mode\"",
  "\"disabled\"", "\"out-of-pool\"", "\"all\"", "\"shared-networks\"",
  "\"mac-sources\"", "\"relay-supplied-options\"",
  "\"host-reservation-identifiers\"", "\"client-classes\"", "\"test\"",
  "\"client-class\"", "\"reservations\"", "\"ip-addresses\"",
  "\"prefixes\"", "\"duid\"", "\"hw-address\"", "\"hostname\"",
  "\"flex-id\"", "\"relay\"", "\"ip-address\"", "\"hooks-libraries\"",
  "\"library\"", "\"parameters\"", "\"expired-leases-processing\"",
  "\"reclaim-timer-wait-time\"", "\"flush-reclaimed-timer-wait-time\"",
  "\"hold-reclaimed-time\"", "\"max-reclaim-leases\"",
  "\"max-reclaim-time\"", "\"unwarned-reclaim-cycles\"", "\"server-id\"",
  "\"LLT\"", "\"EN\"", "\"LL\"", "\"identifier\"", "\"htype\"", "\"time\"",
  "\"enterprise-id\"", "\"dhcp4o6-port\"", "\"control-socket\"",
  "\"socket-type\"", "\"socket-name\"", "\"dhcp-ddns\"",
  "\"enable-updates\"", "\"qualifying-suffix\"", "\"server-ip\"",
  "\"server-port\"", "\"sender-ip\"", "\"sender-port\"",
  "\"max-queue-size\"", "\"ncr-protocol\"", "\"ncr-format\"",
  "\"always-include-fqdn\"", "\"override-no-update\"",
  "\"override-client-update\"", "\"replace-client-name\"",
  "\"generated-prefix\"", "\"UDP\"", "\"TCP\"", "\"JSON\"",
  "\"when-present\"", "\"never\"", "\"always\"", "\"when-not-present\"",
  "\"Logging\"", "\"loggers\"", "\"output_options\"", "\"output\"",
  "\"debuglevel\"", "\"severity\"", "\"flush\"", "\"maxsize\"",
  "\"maxver\"", "\"Dhcp4\"", "\"DhcpDdns\"", "\"Control-agent\"",
  "TOPLEVEL_JSON", "TOPLEVEL_DHCP6", "SUB_DHCP6", "SUB_INTERFACES6",
  "SUB_SUBNET6", "SUB_POOL6", "SUB_PD_POOL", "SUB_RESERVATION",
  "SUB_OPTION_DEFS", "SUB_OPTION_DEF", "SUB_OPTION_DATA",
  "SUB_HOOKS_LIBRARY", "SUB_DHCP_DDNS", "SUB_LOGGING",
  "\"constant string\"", "\"integer\"", "\"floating point\"",
  "\"boolean\"", "$accept", "start", "$@1", "$@2", "$@3", "$@4", "$@5",
  "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14",
  "value", "sub_json", "map2", "$@15", "map_value", "map_content",
  "not_empty_map", "list_generic", "$@16", "list_content",
  "not_empty_list", "list_strings", "$@17", "list_strings_content",
  "not_empty_list_strings", "unknown_map_entry", "syntax_map", "$@18",
  "global_objects", "global_object", "dhcp6_object", "$@19", "sub_dhcp6",
  "$@20", "global_params", "global_param", "preferred_lifetime",
  "valid_lifetime", "renew_timer", "rebind_timer",
  "decline_probation_period", "interfaces_config", "$@21",
  "sub_interfaces6", "$@22", "interfaces_config_params",
  "interfaces_config_param", "interfaces_list", "$@23", "re_detect",
  "lease_database", "$@24", "hosts_database", "$@25",
  "database_map_params", "database_map_param", "database_type", "$@26",
  "db_type", "user", "$@27", "password", "$@28", "host", "$@29", "port",
  "name", "$@30", "persist", "lfc_interval", "readonly", "connect_timeout",
  "contact_points", "$@31", "keyspace", "$@32", "mac_sources", "$@33",
  "mac_sources_list", "mac_sources_value", "duid_id", "string_id",
  "host_reservation_identifiers", "$@34",
  "host_reservation_identifiers_list", "host_reservation_identifier",
  "hw_address_id", "flex_id", "relay_supplied_options", "$@35",
  "hooks_libraries", "$@36", "hooks_libraries_list",
  "not_empty_hooks_libraries_list", "hooks_library", "$@37",
  "sub_hooks_library", "$@38", "hooks_params", "hooks_param", "library",
  "$@39", "parameters", "$@40", "expired_leases_processing", "$@41",
  "expired_leases_params", "expired_leases_param",
  "reclaim_timer_wait_time", "flush_reclaimed_timer_wait_time",
  "hold_reclaimed_time", "max_reclaim_leases", "max_reclaim_time",
  "unwarned_reclaim_cycles", "subnet6_list", "$@42",
  "subnet6_list_content", "not_empty_subnet6_list", "subnet6", "$@43",
  "sub_subnet6", "$@44", "subnet6_params", "subnet6_param", "subnet",
  "$@45", "interface", "$@46", "interface_id", "$@47", "client_class",
  "$@48", "reservation_mode", "$@49", "hr_mode", "id", "rapid_commit",
  "shared_networks", "$@50", "shared_networks_content",
  "shared_networks_list", "shared_network", "$@51",
  "shared_network_params", "shared_network_param", "option_def_list",
  "$@52", "sub_option_def_list", "$@53", "option_def_list_content",
  "not_empty_option_def_list", "option_def_entry", "$@54",
  "sub_option_def", "$@55", "option_def_params",
  "not_empty_option_def_params", "option_def_param", "option_def_name",
  "code", "option_def_code", "option_def_type", "$@56",
  "option_def_record_types", "$@57", "space", "$@58", "option_def_space",
  "option_def_encapsulate", "$@59", "option_def_array", "option_data_list",
  "$@60", "option_data_list_content", "not_empty_option_data_list",
  "option_data_entry", "$@61", "sub_option_data", "$@62",
  "option_data_params", "not_empty_option_data_params",
  "option_data_param", "option_data_name", "option_data_data", "$@63",
  "option_data_code", "option_data_space", "option_data_csv_format",
  "option_data_always_send", "pools_list", "$@64", "pools_list_content",
  "not_empty_pools_list", "pool_list_entry", "$@65", "sub_pool6", "$@66",
  "pool_params", "pool_param", "pool_entry", "$@67", "user_context",
  "$@68", "comment", "$@69", "pd_pools_list", "$@70",
  "pd_pools_list_content", "not_empty_pd_pools_list", "pd_pool_entry",
  "$@71", "sub_pd_pool", "$@72", "pd_pool_params", "pd_pool_param",
  "pd_prefix", "$@73", "pd_prefix_len", "excluded_prefix", "$@74",
  "excluded_prefix_len", "pd_delegated_len", "reservations", "$@75",
  "reservations_list", "not_empty_reservations_list", "reservation",
  "$@76", "sub_reservation", "$@77", "reservation_params",
  "not_empty_reservation_params", "reservation_param", "ip_addresses",
  "$@78", "prefixes", "$@79", "duid", "$@80", "hw_address", "$@81",
  "hostname", "$@82", "flex_id_value", "$@83",
  "reservation_client_classes", "$@84", "relay", "$@85", "relay_map",
  "$@86", "client_classes", "$@87", "client_classes_list",
  "client_class_entry", "$@88", "client_class_params",
  "not_empty_client_class_params", "client_class_param",
  "client_class_name", "client_class_test", "$@89", "server_id", "$@90",
  "server_id_params", "server_id_param", "server_id_type", "$@91",
  "duid_type", "htype", "identifier", "$@92", "time", "enterprise_id",
  "dhcp4o6_port", "control_socket", "$@93", "control_socket_params",
  "control_socket_param", "socket_type", "$@94", "socket_name", "$@95",
  "dhcp_ddns", "$@96", "sub_dhcp_ddns", "$@97", "dhcp_ddns_params",
  "dhcp_ddns_param", "enable_updates", "qualifying_suffix", "$@98",
  "server_ip", "$@99", "server_port", "sender_ip", "$@100", "sender_port",
  "max_queue_size", "ncr_protocol", "$@101", "ncr_protocol_value",
  "ncr_format", "$@102", "always_include_fqdn", "override_no_update",
  "override_client_update", "replace_client_name", "$@103",
  "replace_client_name_value", "generated_prefix", "$@104",
  "dhcp4_json_object", "$@105", "dhcpddns_json_object", "$@106",
  "control_agent_json_object", "$@107", "logging_object", "$@108",
  "sub_logging", "$@109", "logging_params", "logging_param", "loggers",
  "$@110", "loggers_entries", "logger_entry", "$@111", "logger_params",
  "logger_param", "debuglevel", "severity", "$@112", "output_options_list",
  "$@113", "output_options_list_content", "output_entry", "$@114",
  "output_params_list", "output_params", "output", "$@115", "flush",
  "maxsize", "maxver", YY_NULLPTR
  };

#if PARSER6_DEBUG
  const unsigned short int
  Dhcp6Parser::yyrline_[] =
  {
       0,   238,   238,   238,   239,   239,   240,   240,   241,   241,
     242,   242,   243,   243,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   248,   249,   249,   250,   250,   251,   251,
     259,   260,   261,   262,   263,   264,   265,   268,   273,   273,
     284,   287,   288,   291,   295,   302,   302,   309,   310,   313,
     317,   324,   324,   331,   332,   335,   339,   350,   360,   360,
     375,   376,   380,   381,   382,   383,   384,   385,   388,   388,
     403,   403,   412,   413,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   445,
     450,   455,   460,   465,   470,   470,   481,   481,   490,   491,
     494,   495,   496,   497,   498,   501,   501,   511,   517,   517,
     529,   529,   541,   542,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   560,   560,   567,
     568,   569,   570,   573,   573,   581,   581,   589,   589,   597,
     602,   602,   610,   615,   620,   625,   630,   630,   638,   638,
     647,   647,   657,   658,   661,   662,   665,   670,   675,   675,
     685,   686,   689,   690,   691,   694,   699,   706,   706,   716,
     716,   726,   727,   730,   731,   734,   734,   744,   744,   754,
     755,   756,   759,   760,   763,   763,   771,   771,   779,   779,
     790,   791,   794,   795,   796,   797,   798,   799,   802,   807,
     812,   817,   822,   827,   835,   835,   848,   849,   852,   853,
     860,   860,   886,   886,   897,   898,   902,   903,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   923,   923,   931,   931,   939,
     939,   947,   947,   955,   955,   962,   963,   964,   967,   972,
     980,   980,   991,   992,   996,   997,  1000,  1000,  1008,  1009,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1034,  1034,  1047,  1047,
    1056,  1057,  1060,  1061,  1066,  1066,  1081,  1081,  1095,  1096,
    1099,  1100,  1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,
    1111,  1112,  1115,  1117,  1122,  1124,  1124,  1132,  1132,  1140,
    1140,  1148,  1150,  1150,  1158,  1167,  1167,  1179,  1180,  1185,
    1186,  1191,  1191,  1203,  1203,  1215,  1216,  1221,  1222,  1227,
    1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1238,  1240,
    1240,  1248,  1250,  1252,  1257,  1265,  1265,  1277,  1278,  1281,
    1282,  1285,  1285,  1295,  1295,  1304,  1305,  1308,  1309,  1310,
    1311,  1312,  1313,  1316,  1316,  1324,  1324,  1349,  1349,  1379,
    1379,  1391,  1392,  1395,  1396,  1399,  1399,  1411,  1411,  1423,
    1424,  1427,  1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,
    1436,  1439,  1439,  1447,  1452,  1452,  1460,  1465,  1473,  1473,
    1483,  1484,  1487,  1488,  1491,  1491,  1500,  1500,  1509,  1510,
    1513,  1514,  1518,  1519,  1520,  1521,  1522,  1523,  1524,  1525,
    1526,  1527,  1528,  1531,  1531,  1541,  1541,  1551,  1551,  1559,
    1559,  1567,  1567,  1575,  1575,  1583,  1583,  1596,  1596,  1606,
    1606,  1617,  1617,  1627,  1628,  1631,  1631,  1641,  1642,  1645,
    1646,  1649,  1650,  1651,  1652,  1653,  1654,  1657,  1659,  1659,
    1670,  1670,  1682,  1683,  1686,  1687,  1688,  1689,  1690,  1691,
    1692,  1693,  1694,  1697,  1697,  1704,  1705,  1706,  1709,  1714,
    1714,  1722,  1727,  1734,  1741,  1741,  1751,  1752,  1755,  1756,
    1757,  1758,  1759,  1762,  1762,  1770,  1770,  1780,  1780,  1792,
    1792,  1802,  1803,  1806,  1807,  1808,  1809,  1810,  1811,  1812,
    1813,  1814,  1815,  1816,  1817,  1818,  1819,  1820,  1821,  1822,
    1825,  1830,  1830,  1838,  1838,  1846,  1851,  1851,  1859,  1864,
    1869,  1869,  1877,  1878,  1881,  1881,  1889,  1894,  1899,  1904,
    1904,  1912,  1915,  1918,  1921,  1924,  1930,  1930,  1940,  1940,
    1947,  1947,  1954,  1954,  1967,  1967,  1977,  1977,  1988,  1989,
    1993,  1997,  1997,  2009,  2010,  2014,  2014,  2022,  2023,  2026,
    2027,  2028,  2029,  2030,  2031,  2032,  2035,  2040,  2040,  2048,
    2048,  2058,  2059,  2062,  2062,  2070,  2071,  2074,  2075,  2076,
    2077,  2080,  2080,  2088,  2093,  2098
  };

  // Print the state stack on the debug stream.
  void
  Dhcp6Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  Dhcp6Parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // PARSER6_DEBUG


#line 14 "dhcp6_parser.yy" // lalr1.cc:1167
} } // isc::dhcp
#line 4593 "dhcp6_parser.cc" // lalr1.cc:1167
#line 2103 "dhcp6_parser.yy" // lalr1.cc:1168


void
isc::dhcp::Dhcp6Parser::error(const location_type& loc,
                              const std::string& what)
{
    ctx.error(loc, what);
}
