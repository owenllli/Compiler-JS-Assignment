/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     NUMBER = 259,
     STRING = 260,
     REGEX = 261,
     BREAK = 262,
     CASE = 263,
     CATCH = 264,
     CONTINUE = 265,
     DEFAULT = 266,
     DELETE = 267,
     DO = 268,
     ELSE = 269,
     FINALLY = 270,
     FOR = 271,
     FUNCTION = 272,
     IF = 273,
     IN = 274,
     INSTANCEOF = 275,
     NEW = 276,
     RETURN = 277,
     SWITCH = 278,
     THIS = 279,
     THROW = 280,
     TRY = 281,
     TYPEOF = 282,
     VAR = 283,
     VOID = 284,
     WHILE = 285,
     WITH = 286,
     CONST = 287,
     LET = 288,
     CLASS = 289,
     EXTENDS = 290,
     SUPER = 291,
     STATIC = 292,
     EXPORT = 293,
     IMPORT = 294,
     OF = 295,
     TRUE = 296,
     FALSE = 297,
     NULL_LITERAL = 298,
     LBRACE = 299,
     RBRACE = 300,
     LPAREN = 301,
     RPAREN = 302,
     LBRACKET = 303,
     RBRACKET = 304,
     DOT = 305,
     SEMICOLON = 306,
     COMMA = 307,
     ELLIPSIS = 308,
     ARROW = 309,
     LT = 310,
     GT = 311,
     LE = 312,
     GE = 313,
     EQ = 314,
     NE = 315,
     STRICT_EQ = 316,
     STRICT_NE = 317,
     PLUS = 318,
     MINUS = 319,
     MULTIPLY = 320,
     DIVIDE = 321,
     MOD = 322,
     INCR = 323,
     DECR = 324,
     LSHIFT = 325,
     RSHIFT = 326,
     URSHIFT = 327,
     BITWISE_AND = 328,
     BITWISE_OR = 329,
     BITWISE_XOR = 330,
     BITWISE_NOT = 331,
     NOT = 332,
     LOGICAL_AND = 333,
     LOGICAL_OR = 334,
     QUESTION = 335,
     COLON = 336,
     ASSIGN = 337,
     PLUS_ASSIGN = 338,
     MINUS_ASSIGN = 339,
     MULTIPLY_ASSIGN = 340,
     DIVIDE_ASSIGN = 341,
     MOD_ASSIGN = 342,
     LSHIFT_ASSIGN = 343,
     RSHIFT_ASSIGN = 344,
     URSHIFT_ASSIGN = 345,
     AND_ASSIGN = 346,
     OR_ASSIGN = 347,
     XOR_ASSIGN = 348,
     END = 349,
     LOWER_THAN_ELSE = 350,
     UNARY_MINUS = 351,
     UNARY_PLUS = 352
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define NUMBER 259
#define STRING 260
#define REGEX 261
#define BREAK 262
#define CASE 263
#define CATCH 264
#define CONTINUE 265
#define DEFAULT 266
#define DELETE 267
#define DO 268
#define ELSE 269
#define FINALLY 270
#define FOR 271
#define FUNCTION 272
#define IF 273
#define IN 274
#define INSTANCEOF 275
#define NEW 276
#define RETURN 277
#define SWITCH 278
#define THIS 279
#define THROW 280
#define TRY 281
#define TYPEOF 282
#define VAR 283
#define VOID 284
#define WHILE 285
#define WITH 286
#define CONST 287
#define LET 288
#define CLASS 289
#define EXTENDS 290
#define SUPER 291
#define STATIC 292
#define EXPORT 293
#define IMPORT 294
#define OF 295
#define TRUE 296
#define FALSE 297
#define NULL_LITERAL 298
#define LBRACE 299
#define RBRACE 300
#define LPAREN 301
#define RPAREN 302
#define LBRACKET 303
#define RBRACKET 304
#define DOT 305
#define SEMICOLON 306
#define COMMA 307
#define ELLIPSIS 308
#define ARROW 309
#define LT 310
#define GT 311
#define LE 312
#define GE 313
#define EQ 314
#define NE 315
#define STRICT_EQ 316
#define STRICT_NE 317
#define PLUS 318
#define MINUS 319
#define MULTIPLY 320
#define DIVIDE 321
#define MOD 322
#define INCR 323
#define DECR 324
#define LSHIFT 325
#define RSHIFT 326
#define URSHIFT 327
#define BITWISE_AND 328
#define BITWISE_OR 329
#define BITWISE_XOR 330
#define BITWISE_NOT 331
#define NOT 332
#define LOGICAL_AND 333
#define LOGICAL_OR 334
#define QUESTION 335
#define COLON 336
#define ASSIGN 337
#define PLUS_ASSIGN 338
#define MINUS_ASSIGN 339
#define MULTIPLY_ASSIGN 340
#define DIVIDE_ASSIGN 341
#define MOD_ASSIGN 342
#define LSHIFT_ASSIGN 343
#define RSHIFT_ASSIGN 344
#define URSHIFT_ASSIGN 345
#define AND_ASSIGN 346
#define OR_ASSIGN 347
#define XOR_ASSIGN 348
#define END 349
#define LOWER_THAN_ELSE 350
#define UNARY_MINUS 351
#define UNARY_PLUS 352




/* Copy the first part of user declarations.  */
#line 1 "src/parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern int yylex(void);
extern void init_lexer(const char *input);
extern int yylineno;
extern int line_terminator_seen;
extern int lookahead_token;

void yyerror(const char *s);
ASTNode *root = NULL;
extern int asi_triggered;

// ASI Check
int check_asi() {
    if (line_terminator_seen || lookahead_token == RBRACE || lookahead_token == END) {
        asi_triggered = 1;
        return 1;
    }
    return 0;
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "src/parser.y"
{
    ASTNode *node;
    char *str;
}
/* Line 193 of yacc.c.  */
#line 321 "build/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 334 "build/parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  183
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1695

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  256
/* YYNRULES -- Number of states.  */
#define YYNSTATES  473

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   352

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    12,    14,    16,
      18,    20,    22,    24,    26,    28,    30,    32,    34,    36,
      38,    40,    42,    44,    46,    48,    50,    52,    54,    56,
      58,    60,    62,    64,    66,    68,    70,    72,    74,    76,
      78,    80,    82,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   122,   126,   130,   133,   135,   139,   141,   145,   149,
     152,   156,   159,   161,   165,   167,   171,   173,   176,   178,
     184,   192,   198,   206,   213,   223,   234,   243,   251,   260,
     261,   263,   266,   270,   272,   275,   279,   281,   284,   288,
     290,   293,   299,   305,   308,   312,   314,   317,   321,   326,
     328,   331,   335,   339,   342,   346,   350,   355,   361,   364,
     370,   377,   381,   384,   388,   392,   398,   399,   401,   403,
     406,   412,   417,   423,   425,   430,   436,   442,   449,   451,
     455,   459,   463,   469,   475,   476,   478,   480,   484,   486,
     488,   492,   496,   500,   504,   508,   512,   516,   520,   524,
     528,   532,   536,   538,   544,   546,   550,   552,   556,   558,
     562,   564,   568,   570,   574,   576,   580,   584,   588,   592,
     594,   598,   602,   606,   610,   614,   618,   620,   624,   628,
     632,   634,   638,   642,   644,   648,   652,   656,   658,   661,
     664,   667,   670,   673,   676,   679,   682,   685,   687,   690,
     693,   695,   697,   699,   702,   705,   708,   713,   717,   719,
     721,   723,   728,   732,   736,   738,   740,   742,   744,   746,
     750,   752,   754,   756,   758,   760,   762,   766,   770,   776,
     779,   784,   785,   787,   789,   792,   795,   799,   804,   806,
     808,   810,   814,   820,   823,   827,   829
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      99,     0,    -1,   101,    -1,    -1,     3,    -1,    11,    -1,
      12,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    39,    -1,    28,    -1,    33,    -1,    32,    -1,
      18,    -1,    14,    -1,    13,    -1,    30,    -1,    16,    -1,
      19,    -1,    40,    -1,    10,    -1,     7,    -1,    22,    -1,
      31,    -1,    23,    -1,    25,    -1,    26,    -1,     9,    -1,
      15,    -1,    43,    -1,    41,    -1,    42,    -1,    21,    -1,
      24,    -1,    27,    -1,    29,    -1,    20,    -1,    17,    -1,
     102,    -1,   101,   102,    -1,   103,    -1,   129,    -1,   130,
      -1,   104,    -1,   105,    -1,   108,    -1,   111,    -1,   112,
      -1,   113,    -1,   114,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   125,    -1,   126,    -1,    44,
      45,    -1,    44,   101,    45,    -1,    28,   106,    51,    -1,
      28,   106,    -1,   107,    -1,   106,    52,   107,    -1,     3,
      -1,     3,    82,   141,    -1,    33,   109,    51,    -1,    33,
     109,    -1,    32,   109,    51,    -1,    32,   109,    -1,   110,
      -1,   109,    52,   110,    -1,     3,    -1,     3,    82,   141,
      -1,    51,    -1,   140,    51,    -1,   140,    -1,    18,    46,
     140,    47,   103,    -1,    18,    46,   140,    47,   103,    14,
     103,    -1,    30,    46,   140,    47,   103,    -1,    13,   103,
      30,    46,   140,    47,    51,    -1,    13,   103,    30,    46,
     140,    47,    -1,    16,    46,   115,    51,   115,    51,   115,
      47,   103,    -1,    16,    46,    28,   106,    51,   115,    51,
     115,    47,   103,    -1,    16,    46,   108,   115,    51,   115,
      47,   103,    -1,    16,    46,   155,    19,   140,    47,   103,
      -1,    16,    46,    28,   107,    19,   140,    47,   103,    -1,
      -1,   140,    -1,    10,    51,    -1,    10,     3,    51,    -1,
      10,    -1,     7,    51,    -1,     7,     3,    51,    -1,     7,
      -1,    22,    51,    -1,    22,   140,    51,    -1,    22,    -1,
      22,   140,    -1,    31,    46,   140,    47,   103,    -1,    23,
      46,   140,    47,   121,    -1,    44,    45,    -1,    44,   122,
      45,    -1,   123,    -1,   122,   123,    -1,     8,   140,    81,
      -1,     8,   140,    81,   101,    -1,   124,    -1,    11,    81,
      -1,    11,    81,   101,    -1,    25,   140,    51,    -1,    25,
     140,    -1,    26,   104,   127,    -1,    26,   104,   128,    -1,
      26,   104,   127,   128,    -1,     9,    46,     3,    47,   104,
      -1,    15,   104,    -1,    17,     3,    46,    47,   104,    -1,
      17,     3,    46,   137,    47,   104,    -1,    34,     3,   132,
      -1,    34,   132,    -1,    34,     3,   132,    -1,    44,   133,
      45,    -1,    35,   155,    44,   133,    45,    -1,    -1,   134,
      -1,   135,    -1,   134,   135,    -1,   100,    46,   137,    47,
     104,    -1,   100,    46,    47,   104,    -1,    37,   100,    46,
      47,   104,    -1,    51,    -1,    17,    46,    47,   104,    -1,
      17,    46,   137,    47,   104,    -1,    17,     3,    46,    47,
     104,    -1,    17,     3,    46,   137,    47,   104,    -1,     3,
      -1,   137,    52,     3,    -1,     3,    54,   104,    -1,     3,
      54,   141,    -1,    46,   139,    47,    54,   104,    -1,    46,
     139,    47,    54,   141,    -1,    -1,   137,    -1,   141,    -1,
     140,    52,   141,    -1,   142,    -1,   138,    -1,   155,    82,
     141,    -1,   155,    83,   141,    -1,   155,    84,   141,    -1,
     155,    85,   141,    -1,   155,    86,   141,    -1,   155,    87,
     141,    -1,   155,    88,   141,    -1,   155,    89,   141,    -1,
     155,    90,   141,    -1,   155,    91,   141,    -1,   155,    92,
     141,    -1,   155,    93,   141,    -1,   143,    -1,   143,    80,
     141,    81,   141,    -1,   144,    -1,   143,    79,   144,    -1,
     145,    -1,   144,    78,   145,    -1,   146,    -1,   145,    74,
     146,    -1,   147,    -1,   146,    75,   147,    -1,   148,    -1,
     147,    73,   148,    -1,   149,    -1,   148,    59,   149,    -1,
     148,    60,   149,    -1,   148,    61,   149,    -1,   148,    62,
     149,    -1,   150,    -1,   149,    55,   150,    -1,   149,    56,
     150,    -1,   149,    57,   150,    -1,   149,    58,   150,    -1,
     149,    20,   150,    -1,   149,    19,   150,    -1,   151,    -1,
     150,    70,   151,    -1,   150,    71,   151,    -1,   150,    72,
     151,    -1,   152,    -1,   151,    63,   152,    -1,   151,    64,
     152,    -1,   153,    -1,   152,    65,   153,    -1,   152,    66,
     153,    -1,   152,    67,   153,    -1,   154,    -1,    12,   153,
      -1,    29,   153,    -1,    27,   153,    -1,    68,   153,    -1,
      69,   153,    -1,    63,   153,    -1,    64,   153,    -1,    76,
     153,    -1,    77,   153,    -1,   155,    -1,   155,    68,    -1,
     155,    69,    -1,   156,    -1,   157,    -1,   158,    -1,    21,
     156,    -1,   158,   168,    -1,   157,   168,    -1,   157,    48,
     140,    49,    -1,   157,    50,   100,    -1,   159,    -1,   136,
      -1,   131,    -1,   158,    48,   140,    49,    -1,   158,    50,
     100,    -1,    21,   158,   168,    -1,    24,    -1,     3,    -1,
     160,    -1,   161,    -1,   165,    -1,    46,   140,    47,    -1,
      43,    -1,    41,    -1,    42,    -1,     4,    -1,     5,    -1,
       6,    -1,    48,   163,    49,    -1,    48,   162,    49,    -1,
      48,   162,    52,   163,    49,    -1,   163,   141,    -1,   162,
      52,   163,   141,    -1,    -1,   164,    -1,    52,    -1,   164,
      52,    -1,    44,    45,    -1,    44,   167,    45,    -1,    44,
     167,    52,    45,    -1,   100,    -1,     5,    -1,     4,    -1,
     166,    81,   141,    -1,   167,    52,   166,    81,   141,    -1,
      46,    47,    -1,    46,   169,    47,    -1,   141,    -1,   169,
      52,   141,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   146,   147,   160,   161,   162,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     183,   184,   192,   193,   205,   206,   215,   219,   228,   229,
     232,   233,   239,   240,   249,   253,   261,   265,   269,   282,
     287,   296,   301,   306,   317,   323,   329,   334,   340,   349,
     350,   354,   355,   360,   372,   373,   378,   390,   391,   395,
     409,   425,   433,   441,   442,   446,   447,   456,   460,   465,
     469,   472,   479,   483,   496,   501,   506,   515,   524,   531,
     536,   546,   554,   558,   566,   569,   576,   577,   581,   582,
     595,   602,   607,   612,   616,   620,   625,   630,   639,   643,
     654,   660,   666,   671,   679,   680,   684,   685,   691,   692,
     693,   696,   701,   706,   711,   716,   721,   726,   731,   736,
     741,   746,   754,   755,   764,   765,   773,   774,   782,   783,
     791,   792,   800,   801,   809,   810,   815,   820,   825,   833,
     834,   839,   844,   849,   854,   859,   867,   868,   873,   878,
     886,   887,   892,   900,   901,   906,   911,   919,   920,   924,
     928,   932,   936,   940,   944,   948,   952,   959,   960,   969,
     981,   982,   986,   987,   994,   999,  1004,  1010,  1018,  1019,
    1020,  1021,  1027,  1032,  1040,  1043,  1047,  1048,  1049,  1050,
    1054,  1055,  1056,  1057,  1061,  1065,  1072,  1076,  1080,  1088,
    1094,  1106,  1107,  1111,  1112,  1121,  1122,  1126,  1133,  1134,
    1135,  1139,  1144,  1155,  1156,  1160,  1161
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "NUMBER", "STRING",
  "REGEX", "BREAK", "CASE", "CATCH", "CONTINUE", "DEFAULT", "DELETE", "DO",
  "ELSE", "FINALLY", "FOR", "FUNCTION", "IF", "IN", "INSTANCEOF", "NEW",
  "RETURN", "SWITCH", "THIS", "THROW", "TRY", "TYPEOF", "VAR", "VOID",
  "WHILE", "WITH", "CONST", "LET", "CLASS", "EXTENDS", "SUPER", "STATIC",
  "EXPORT", "IMPORT", "OF", "TRUE", "FALSE", "NULL_LITERAL", "LBRACE",
  "RBRACE", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "DOT", "SEMICOLON",
  "COMMA", "ELLIPSIS", "ARROW", "LT", "GT", "LE", "GE", "EQ", "NE",
  "STRICT_EQ", "STRICT_NE", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MOD",
  "INCR", "DECR", "LSHIFT", "RSHIFT", "URSHIFT", "BITWISE_AND",
  "BITWISE_OR", "BITWISE_XOR", "BITWISE_NOT", "NOT", "LOGICAL_AND",
  "LOGICAL_OR", "QUESTION", "COLON", "ASSIGN", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN", "MOD_ASSIGN",
  "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "AND_ASSIGN",
  "OR_ASSIGN", "XOR_ASSIGN", "END", "LOWER_THAN_ELSE", "UNARY_MINUS",
  "UNARY_PLUS", "$accept", "Program", "IdentifierName", "SourceElements",
  "SourceElement", "Statement", "Block", "VariableStatement",
  "VariableDeclarationList", "VariableDeclaration", "LexicalDeclaration",
  "BindingList", "LexicalBinding", "EmptyStatement", "ExpressionStatement",
  "IfStatement", "IterationStatement", "ExpressionOpt",
  "ContinueStatement", "BreakStatement", "ReturnStatement",
  "WithStatement", "SwitchStatement", "CaseBlock", "CaseClauses",
  "CaseClause", "DefaultClause", "ThrowStatement", "TryStatement", "Catch",
  "Finally", "FunctionDeclaration", "ClassDeclaration", "ClassExpression",
  "ClassTail", "ClassBody", "ClassElementList", "ClassElement",
  "FunctionExpression", "FormalParameterList", "ArrowFunction",
  "ArrowFormalParameters", "Expression", "AssignmentExpression",
  "ConditionalExpression", "LogicalORExpression", "LogicalANDExpression",
  "BitwiseORExpression", "BitwiseXORExpression", "BitwiseANDExpression",
  "EqualityExpression", "RelationalExpression", "ShiftExpression",
  "AdditiveExpression", "MultiplicativeExpression", "UnaryExpression",
  "PostfixExpression", "LeftHandSideExpression", "NewExpression",
  "CallExpression", "MemberExpression", "PrimaryExpression", "Literal",
  "ArrayLiteral", "ElementList", "ElisionOpt", "Elision", "ObjectLiteral",
  "PropertyName", "PropertyNameAndValueList", "Arguments", "ArgumentList", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   109,   109,   110,   110,   111,   112,   112,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   116,   116,   117,   117,   117,   118,   118,   118,
     118,   119,   120,   121,   121,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   127,   128,   129,
     129,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   135,   136,   136,   136,   136,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   150,   150,   150,   150,
     151,   151,   151,   152,   152,   152,   152,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   154,
     155,   155,   156,   156,   157,   157,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   162,
     162,   163,   163,   164,   164,   165,   165,   165,   166,   166,
     166,   167,   167,   168,   168,   169,   169
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     2,     1,     3,     1,     3,     3,     2,
       3,     2,     1,     3,     1,     3,     1,     2,     1,     5,
       7,     5,     7,     6,     9,    10,     8,     7,     8,     0,
       1,     2,     3,     1,     2,     3,     1,     2,     3,     1,
       2,     5,     5,     2,     3,     1,     2,     3,     4,     1,
       2,     3,     3,     2,     3,     3,     4,     5,     2,     5,
       6,     3,     2,     3,     3,     5,     0,     1,     1,     2,
       5,     4,     5,     1,     4,     5,     5,     6,     1,     3,
       3,     3,     5,     5,     0,     1,     1,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       1,     1,     1,     2,     2,     2,     4,     3,     1,     1,
       1,     4,     3,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     5,     2,
       4,     0,     1,     1,     2,     2,     3,     4,     1,     1,
       1,     3,     5,     2,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,   225,   233,   234,   235,    96,    93,     0,     0,     0,
       0,     0,     0,    99,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,   232,   230,     0,
     144,   241,    76,     0,     0,     0,     0,     0,     0,     0,
       2,    41,    43,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    44,    45,   220,
     219,   149,    78,   146,   148,   162,   164,   166,   168,   170,
     172,   174,   179,   186,   190,   193,   197,   207,   210,   211,
     212,   218,   226,   227,   228,     0,     0,    94,     0,    91,
     225,     0,     0,     0,     0,   198,   207,     0,    89,     0,
       0,     0,   213,   212,    97,   100,     0,   113,     0,     0,
     200,    66,    63,    64,   199,     0,     0,    74,    71,    72,
      69,     0,     0,   126,   122,   225,   233,   234,    96,    30,
      93,     5,     6,    18,    17,    31,    20,    40,    16,    21,
      39,    35,    99,    27,   224,    28,    29,    37,    13,    38,
      19,    26,    15,    14,     7,     8,     9,    10,    11,    12,
      22,   231,   232,   230,    60,   248,     0,     0,     0,   225,
     145,     0,     0,   243,     0,     0,   242,   203,   204,   201,
     202,   205,   206,     1,    42,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   215,     0,
       0,   214,   140,   141,    95,    92,     0,     0,     4,   250,
     249,    24,    23,     6,    18,    20,    40,    16,    35,    25,
      27,    36,    28,    29,    37,    13,    38,    19,    26,    15,
      14,     7,    33,    34,    32,   245,     0,     0,    89,     0,
      90,   207,     0,   138,     0,     0,     0,   223,    98,     0,
     112,    60,     0,     0,   114,   115,     0,    62,     0,     0,
       0,     0,    70,     0,    68,   121,     0,    10,   133,     0,
       0,   127,   128,    61,     0,   246,     0,     0,     0,   229,
     237,   241,   236,   239,   244,   147,   165,     0,   167,   169,
     171,   173,   175,   176,   177,   178,   185,   184,   180,   181,
     182,   183,   187,   188,   189,   191,   192,   194,   195,   196,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   253,   255,     0,     0,   217,     0,   222,     0,
     123,     0,     0,    64,     0,    89,     0,     0,     0,   134,
       0,     0,     0,     0,   118,   116,    67,    65,     0,     0,
      75,    73,   126,     0,     0,   124,   129,   251,   247,     0,
     139,     0,     0,     0,   254,     0,   216,   221,     0,     0,
       0,    89,     0,    89,     0,     0,   119,     0,   135,    79,
       0,   102,     0,    81,   101,     0,     0,     0,     0,     0,
     142,   143,   238,   240,   163,   256,   136,     0,    83,     0,
       0,     0,    89,     0,   120,     0,     0,     0,   103,     0,
     105,   109,     0,   125,     0,   131,     0,   252,   137,    82,
      89,     0,     0,     0,    87,    80,     0,   110,   104,   106,
     117,   132,   130,     0,    88,    86,     0,   107,   111,     0,
      84,   108,    85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    39,   165,   166,    41,    42,    43,    44,   112,   113,
      45,   118,   119,    46,    47,    48,    49,   269,    50,    51,
      52,    53,    54,   411,   439,   440,   441,    55,    56,   284,
     285,    57,    58,    59,   124,   300,   301,   302,    60,   170,
      61,   171,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   174,   175,   176,    84,   167,   168,
     228,   354
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -249
static const yytype_int16 yypact[] =
{
     754,   -41,  -249,  -249,  -249,    13,    14,  1247,   822,   -19,
      33,    -8,    27,  1031,    -3,  -249,  1301,    30,  1247,    63,
    1247,     8,    43,    91,    91,    42,  -249,  -249,  -249,   550,
    1355,    58,  -249,  1247,  1247,  1247,  1247,  1247,  1247,   132,
     754,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,   148,  -249,  -249,   126,    81,   117,   142,   130,
     136,    65,   137,   182,   147,  -249,  -249,  1376,  -249,   110,
     144,  -249,  -249,  -249,  -249,  1409,   159,  -249,   174,  -249,
    -249,    34,    47,  1568,  1301,  -249,   179,   232,   263,   218,
       6,  1301,  -249,   144,  -249,   198,  1301,   200,   618,    26,
    -249,   189,   202,  -249,  -249,  1301,  1301,   194,   204,  -249,
     207,    53,    27,  1525,  -249,   -29,   196,   197,    11,  -249,
      12,  -249,  1247,   822,  -249,  -249,   -19,    33,    -8,  -249,
    -249,    27,   444,    -3,   201,  1301,    30,  1247,    63,  1247,
       8,    43,    91,    91,    42,  -249,  -249,  -249,  -249,  -249,
    -249,   205,   208,   212,  1434,  -249,   686,   213,    -6,    54,
     227,   234,    51,  -249,   -28,  1085,   231,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  1301,  1247,  1301,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  -249,  -249,  1301,  1301,  1301,  1301,  1301,  1301,  1301,
    1301,  1301,  1301,  1301,  1301,  1139,  1301,  1652,  -249,  1301,
    1652,  -249,  -249,  -249,  -249,  -249,   239,    53,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,   252,    63,  1301,   248,
     249,   151,    20,  -249,    30,    60,    62,  -249,  -249,    78,
    -249,  -249,   254,    30,   287,  -249,  1301,  -249,    63,   105,
     121,  1301,  -249,    91,  -249,   852,   259,  1652,  -249,   262,
     265,  1525,  -249,  -249,  1301,  -249,  1611,   309,   260,  -249,
    -249,    58,  -249,  -249,  -249,  -249,    81,   238,   117,   142,
     130,   136,    65,    65,    65,    65,   137,   137,   137,   137,
     137,   137,   182,   182,   182,   147,   147,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,   125,    67,  -249,   152,  -249,    25,
    -249,  1301,   209,   294,   264,  1301,  1301,    30,   127,  -249,
      30,   822,   277,   319,  -249,  -249,  -249,  -249,   822,   822,
    -249,  -249,  1525,   278,    31,  -249,  -249,  -249,  -249,   242,
    -249,  1409,  1193,  1301,  -249,  1301,  -249,  -249,    30,   128,
     131,  1301,  1301,  1301,   274,   134,   896,    30,  -249,   314,
      88,  -249,   282,  -249,  -249,   285,   286,    30,   135,  1301,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,    30,   283,   284,
     141,   289,  1301,   822,   940,   822,  1301,   256,  -249,   116,
    -249,  -249,    30,  -249,    30,  -249,    30,  -249,  -249,  -249,
    1301,   822,   822,   291,  -249,  -249,   -34,   754,  -249,  -249,
    -249,  -249,  -249,   295,  -249,  -249,   822,   754,   754,   822,
    -249,   754,  -249
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,  -112,     0,   -37,    -7,    -9,  -249,    74,  -186,
     245,   -18,    52,  -249,  -249,  -249,  -249,  -248,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,   -93,  -249,  -249,  -249,  -249,
      64,  -249,  -249,  -249,  -109,   -31,  -249,    46,  -249,   -96,
    -249,  -249,   -11,   -75,  -249,  -249,   165,   164,   166,   168,
     171,    28,   -35,    23,    66,    22,  -249,   342,    -5,  -249,
      10,  -249,  -249,  -249,  -249,    55,  -249,  -249,    59,  -249,
     -54,  -249
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -251
static const yytype_int16 yytable[] =
{
      40,    97,   105,   184,   275,   107,   120,   102,   109,   273,
     233,   299,   295,    85,    86,    88,    86,    88,   186,   172,
     364,   310,   103,   273,   311,    85,   231,    98,   273,    95,
      90,     2,     3,     4,   273,   282,    99,   236,   101,   305,
     110,   283,   114,   106,    91,   121,   306,   467,    12,   277,
     237,    15,    -4,   274,   115,   177,   178,   179,   180,   181,
     182,    92,    87,    89,    87,    89,   111,   367,    26,    27,
      28,    93,   398,    94,   108,    31,   232,   122,   417,   100,
     100,   363,   122,   172,   197,   198,   123,   270,   122,   116,
     276,   123,   -24,   -23,   117,   279,   436,   123,   309,   437,
     313,  -138,   377,   186,   289,   290,  -138,   370,    85,   371,
     173,   315,   307,   317,   186,   356,   396,   404,   358,   186,
     199,   200,   201,   202,   436,   372,    97,   437,   360,   184,
     186,   105,   183,   438,   107,   120,   102,   109,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     353,   103,   378,   429,    95,   431,   225,   186,   226,   189,
     227,   458,   326,   327,   328,   329,   330,   331,   379,   110,
     366,   114,   394,   186,   407,   427,   368,   395,   428,   307,
     307,   433,   446,   186,   453,   383,   186,   307,   451,   299,
     225,   190,   229,   186,   230,   193,   194,   195,   196,   185,
     186,   397,   463,   192,   186,   187,   188,   203,   204,   205,
     234,   376,   208,   209,   210,   355,   380,   191,   357,   211,
     212,   322,   323,   324,   325,   235,   332,   333,   334,   387,
     337,   338,   339,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   206,   207,   211,   212,   278,
     186,   280,   186,   287,   288,   292,   293,   270,   294,   293,
     401,   288,   266,   399,   272,   369,     1,     2,     3,     4,
     299,   286,   335,   336,   374,     7,   291,  -250,  -249,   307,
      91,   308,   -36,   314,    12,   359,   -33,    15,   418,   -34,
      18,   267,    20,   -32,   304,    23,    24,    92,   361,   365,
     373,   186,   283,   382,    26,    27,    28,    93,   384,    30,
     385,    31,   390,   402,   391,   403,   421,   423,   424,   393,
     425,   410,   412,   419,   416,   432,    33,    34,   435,   442,
     443,    35,    36,   444,   449,   450,   452,   457,   466,    37,
      38,   362,   469,   268,   447,   381,   459,   386,   375,    96,
     400,   415,   316,   318,   270,   405,   319,     0,   406,   320,
      96,   408,    96,   321,   409,   389,   392,     0,     0,     0,
       0,   413,   414,     0,     0,    96,    96,    96,    96,    96,
      96,     0,   420,     0,     0,     0,     0,     0,     0,   426,
     270,   430,   270,     0,     0,     0,     0,     0,   434,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   448,     0,
       0,   270,     0,     0,     0,   456,   454,     0,   455,     0,
       0,   184,     0,   460,   184,   461,     0,   462,     0,   270,
     271,     0,     0,     0,   464,   465,     0,     1,     2,     3,
       4,     0,     0,     0,     0,     0,     7,   468,     0,   470,
       0,    91,   472,     0,   296,    12,     0,   471,    15,     0,
       0,    18,     0,    20,    96,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    93,    96,
      30,    96,    31,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
      37,    38,     0,     0,     0,   -25,     0,     0,     0,    96,
       0,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,   125,   126,   127,     4,   128,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    29,   164,    30,     0,    31,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,    35,    36,
       0,     1,     2,     3,     4,     5,    37,    38,     6,     0,
       7,     8,     0,     0,     9,    10,    11,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,   281,    30,     0,    31,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,     0,    35,    36,     0,     1,
       2,     3,     4,     5,    37,    38,     6,     0,     7,     8,
       0,     0,     9,    10,    11,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,   303,    30,     0,    31,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    35,    36,     0,     1,     2,     3,
       4,     5,    37,    38,     6,     0,     7,     8,     0,     0,
       9,    10,    11,     0,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
      30,     0,    31,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    35,    36,     0,     1,     2,     3,     4,     5,
      37,    38,     6,     0,     7,     8,     0,     0,     9,    91,
      11,     0,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    92,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,     0,    30,     0,
      31,  -123,  -123,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,  -123,     0,  -123,     0,     0,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -136,  -136,  -123,  -123,  -123,
       0,     0,  -123,  -123,  -123,  -123,  -123,  -123,     0,     0,
    -123,  -123,  -123,     0,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -136,     0,  -136,     0,
       0,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -137,
    -137,  -136,  -136,  -136,     0,     0,  -136,  -136,  -136,  -136,
    -136,  -136,     0,     0,  -136,  -136,  -136,     0,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -137,     0,  -137,     0,     0,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,     0,     0,  -137,  -137,  -137,     0,     0,
    -137,  -137,  -137,  -137,  -137,  -137,     0,     0,  -137,  -137,
    -137,     0,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,     1,     2,     3,     4,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,    91,     0,
       0,     0,    12,     0,     0,    15,     0,     0,    18,     0,
      20,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    93,     0,    30,     0,    31,
       0,     0,   104,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     0,     0,    33,    34,     0,     7,     0,    35,
      36,     0,    91,     0,     0,     0,    12,    37,    38,    15,
       0,     0,    18,     0,    20,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    93,
       0,    30,     0,    31,   312,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     0,     0,    33,    34,
       0,     7,     0,    35,    36,     0,    91,     0,     0,     0,
      12,    37,    38,    15,     0,     0,    18,     0,    20,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    93,     0,    30,   352,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       0,     0,    33,    34,     0,     7,     0,    35,    36,     0,
      91,     0,     0,     0,    12,    37,    38,    15,     0,     0,
      18,     0,    20,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    93,     0,    30,
       0,    31,   422,     0,     0,     0,     0,     0,     0,     0,
      90,     2,     3,     4,     0,     0,    33,    34,     0,     7,
       0,    35,    36,     0,    91,     0,     0,     0,    12,    37,
      38,    15,     0,     0,    18,     0,    20,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    93,     0,    94,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     0,     0,
      33,    34,     0,     7,     0,    35,    36,     0,    91,     0,
       0,     0,    12,    37,    38,    15,     0,     0,    18,     0,
      20,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    93,     0,    30,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,   169,     2,
       3,     4,     0,     0,    33,    34,     0,     7,     0,    35,
      36,     0,    91,     0,     0,     0,    12,    37,    38,    15,
       0,     0,    18,     0,    20,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    93,
       0,    30,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     0,     0,    33,    34,
       0,     7,     0,    35,    36,     0,    91,     0,     0,     0,
      12,    37,    38,    15,     0,     0,    18,     0,    20,     0,
       0,     0,     0,    92,   211,   212,     0,     0,     0,     0,
      26,    27,    28,    29,  -245,    30,     0,    31,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,    33,    34,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,  -245,    37,    38,     0,     0,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,     0,     0,  -245,
    -245,  -245,     0,     0,  -245,  -245,  -245,  -245,  -245,  -245,
       0,     0,  -245,  -245,  -245,     0,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   238,     0,
       0,     0,   241,     0,   129,   242,   131,   243,   244,   134,
     135,   245,   246,   247,   139,   140,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     155,   156,   297,   158,   159,   160,   262,   263,   264,     0,
       0,   238,   239,   240,     0,   241,   298,   129,   242,   131,
     243,   244,   134,   135,   245,   246,   247,   139,   140,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   155,   156,   157,   158,   159,   160,   262,
     263,   264,     0,   265,   238,   239,   240,     0,   241,     0,
     129,   242,   131,   243,   244,   134,   135,   245,   246,   247,
     139,   140,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   155,   156,   157,   158,
     159,   160,   262,   263,   264,   238,   388,     0,     0,   241,
       0,   129,   242,   131,   243,   244,   134,   135,   245,   246,
     247,   139,   140,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   155,   156,   157,
     158,   159,   160,   262,   263,   264
};

static const yytype_int16 yycheck[] =
{
       0,     8,    13,    40,   100,    16,    24,    12,    17,     3,
      85,   123,   121,    54,     3,     3,     3,     3,    52,    30,
     268,    49,    12,     3,    52,    54,    80,    46,     3,     7,
       3,     4,     5,     6,     3,     9,     3,     3,    46,    45,
      18,    15,    20,    46,    17,     3,    52,    81,    21,   103,
       3,    24,    81,    47,    46,    33,    34,    35,    36,    37,
      38,    34,    51,    51,    51,    51,     3,    47,    41,    42,
      43,    44,    47,    46,    44,    48,    85,    35,    47,    46,
      46,   267,    35,    94,    19,    20,    44,    98,    35,    46,
     101,    44,    81,    81,     3,   106,     8,    44,    47,    11,
     175,    47,   288,    52,   115,   116,    52,    47,    54,    47,
      52,   186,    52,   188,    52,   227,    49,   365,   230,    52,
      55,    56,    57,    58,     8,    47,   133,    11,   237,   166,
      52,   142,     0,    45,   145,   153,   141,   146,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   141,    47,   401,   132,   403,    46,    52,    48,    78,
      50,    45,   197,   198,   199,   200,   201,   202,    47,   147,
      19,   149,    47,    52,    47,    47,   272,    52,    47,    52,
      52,    47,    47,    52,   432,   297,    52,    52,    47,   301,
      46,    74,    48,    52,    50,    59,    60,    61,    62,    51,
      52,    49,   450,    73,    52,    79,    80,    70,    71,    72,
      51,   286,    65,    66,    67,   226,   291,    75,   229,    68,
      69,   193,   194,   195,   196,    51,   203,   204,   205,   304,
     208,   209,   210,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    63,    64,    68,    69,    51,
      52,    51,    52,    51,    52,    51,    52,   268,    51,    52,
      51,    52,    30,   359,    46,   274,     3,     4,     5,     6,
     382,    82,   206,   207,   283,    12,    82,    81,    81,    52,
      17,    47,    81,    52,    21,    46,    81,    24,   384,    81,
      27,    28,    29,    81,    81,    32,    33,    34,    46,    51,
      46,    52,    15,    44,    41,    42,    43,    44,    46,    46,
      45,    48,     3,    19,    54,    51,   391,   392,   393,    81,
     395,    44,     3,    81,    46,    51,    63,    64,    14,    47,
      45,    68,    69,    47,    51,    51,    47,    81,    47,    76,
      77,   267,    47,    98,   419,   293,   439,   301,   284,     7,
     361,   382,   187,   189,   365,   366,   190,    -1,   367,   191,
      18,   370,    20,   192,   371,   306,   311,    -1,    -1,    -1,
      -1,   378,   379,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,   391,    -1,    -1,    -1,    -1,    -1,    -1,   398,
     401,   402,   403,    -1,    -1,    -1,    -1,    -1,   407,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,
      -1,   432,    -1,    -1,    -1,   436,   433,    -1,   435,    -1,
      -1,   468,    -1,   442,   471,   444,    -1,   446,    -1,   450,
      98,    -1,    -1,    -1,   451,   452,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,   457,    -1,   466,
      -1,    17,   469,    -1,   122,    21,    -1,   467,    24,    -1,
      -1,    27,    -1,    29,   132,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,   147,
      46,   149,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,   187,
      -1,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,    69,
      -1,     3,     4,     5,     6,     7,    76,    77,    10,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    69,    -1,     3,
       4,     5,     6,     7,    76,    77,    10,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    69,    -1,     3,     4,     5,
       6,     7,    76,    77,    10,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    69,    -1,     3,     4,     5,     6,     7,
      76,    77,    10,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,    -1,
      48,    19,    20,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    19,    20,    65,    66,    67,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,    -1,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    19,
      20,    65,    66,    67,    -1,    -1,    70,    71,    72,    73,
      74,    75,    -1,    -1,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    71,    72,    73,    74,    75,    -1,    -1,    78,    79,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    63,    64,    -1,    12,    -1,    68,
      69,    -1,    17,    -1,    -1,    -1,    21,    76,    77,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    63,    64,
      -1,    12,    -1,    68,    69,    -1,    17,    -1,    -1,    -1,
      21,    76,    77,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    63,    64,    -1,    12,    -1,    68,    69,    -1,
      17,    -1,    -1,    -1,    21,    76,    77,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      -1,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    63,    64,    -1,    12,
      -1,    68,    69,    -1,    17,    -1,    -1,    -1,    21,    76,
      77,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      63,    64,    -1,    12,    -1,    68,    69,    -1,    17,    -1,
      -1,    -1,    21,    76,    77,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    63,    64,    -1,    12,    -1,    68,
      69,    -1,    17,    -1,    -1,    -1,    21,    76,    77,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    63,    64,
      -1,    12,    -1,    68,    69,    -1,    17,    -1,    -1,    -1,
      21,    76,    77,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    34,    68,    69,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    20,    46,    -1,    48,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    50,    76,    77,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
      -1,    -1,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,     3,    -1,
      -1,    -1,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,     3,     4,     5,    -1,     7,    51,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     3,    45,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    12,    13,    16,
      17,    18,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    41,    42,    43,    44,
      46,    48,    51,    63,    64,    68,    69,    76,    77,    99,
     101,   102,   103,   104,   105,   108,   111,   112,   113,   114,
     116,   117,   118,   119,   120,   125,   126,   129,   130,   131,
     136,   138,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   165,    54,     3,    51,     3,    51,
       3,    17,    34,    44,    46,   153,   155,   103,    46,     3,
      46,    46,   156,   158,    51,   140,    46,   140,    44,   104,
     153,     3,   106,   107,   153,    46,    46,     3,   109,   110,
     109,     3,    35,    44,   132,     3,     4,     5,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    45,   100,   101,   166,   167,     3,
     137,   139,   140,    52,   162,   163,   164,   153,   153,   153,
     153,   153,   153,     0,   102,    51,    52,    79,    80,    78,
      74,    75,    73,    59,    60,    61,    62,    19,    20,    55,
      56,    57,    58,    70,    71,    72,    63,    64,    65,    66,
      67,    68,    69,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    46,    48,    50,   168,    48,
      50,   168,   104,   141,    51,    51,     3,     3,     3,     4,
       5,     7,    10,    12,    13,    16,    17,    18,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    41,    42,    43,    45,    30,    28,   108,   115,
     140,   155,    46,     3,    47,   137,   140,   168,    51,   140,
      51,    45,     9,    15,   127,   128,    82,    51,    52,   140,
     140,    82,    51,    52,    51,   132,   155,    37,    51,   100,
     133,   134,   135,    45,    81,    45,    52,    52,    47,    47,
      49,    52,    49,   141,    52,   141,   144,   141,   145,   146,
     147,   148,   149,   149,   149,   149,   150,   150,   150,   150,
     150,   150,   151,   151,   151,   152,   152,   153,   153,   153,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,    47,   141,   169,   140,   100,   140,   100,    46,
     132,    46,   106,   107,   115,    51,    19,    47,   137,   104,
      47,    47,    47,    46,   104,   128,   141,   107,    47,    47,
     141,   110,    44,   100,    46,    45,   135,   141,    45,   166,
       3,    54,   163,    81,    47,    52,    49,    49,    47,   137,
     140,    51,    19,    51,   115,   140,   104,    47,   104,   103,
      44,   121,     3,   103,   103,   133,    46,    47,   137,    81,
     104,   141,    49,   141,   141,   141,   104,    47,    47,   115,
     140,   115,    51,    47,   104,    14,     8,    11,    45,   122,
     123,   124,    47,    45,    47,   104,    47,   141,   104,    51,
      51,    47,    47,   115,   103,   103,   140,    81,    45,   123,
     104,   104,   104,   115,   103,   103,    47,    81,   101,    47,
     103,   101,   103
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 100 "src/parser.y"
    { root = (yyvsp[(1) - (1)].node); YYACCEPT; ;}
    break;

  case 3:
#line 101 "src/parser.y"
    { root = create_node(NODE_PROGRAM, NULL); YYACCEPT; ;}
    break;

  case 4:
#line 106 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 5:
#line 107 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "default"); ;}
    break;

  case 6:
#line 108 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "delete"); ;}
    break;

  case 7:
#line 109 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "class"); ;}
    break;

  case 8:
#line 110 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "extends"); ;}
    break;

  case 9:
#line 111 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "super"); ;}
    break;

  case 10:
#line 112 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "static"); ;}
    break;

  case 11:
#line 113 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "export"); ;}
    break;

  case 12:
#line 114 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "import"); ;}
    break;

  case 13:
#line 115 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "var"); ;}
    break;

  case 14:
#line 116 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "let"); ;}
    break;

  case 15:
#line 117 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "const"); ;}
    break;

  case 16:
#line 118 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "if"); ;}
    break;

  case 17:
#line 119 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "else"); ;}
    break;

  case 18:
#line 120 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "do"); ;}
    break;

  case 19:
#line 121 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "while"); ;}
    break;

  case 20:
#line 122 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "for"); ;}
    break;

  case 21:
#line 123 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "in"); ;}
    break;

  case 22:
#line 124 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "of"); ;}
    break;

  case 23:
#line 125 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "continue"); ;}
    break;

  case 24:
#line 126 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "break"); ;}
    break;

  case 25:
#line 127 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "return"); ;}
    break;

  case 26:
#line 128 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "with"); ;}
    break;

  case 27:
#line 129 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "switch"); ;}
    break;

  case 28:
#line 130 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "throw"); ;}
    break;

  case 29:
#line 131 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "try"); ;}
    break;

  case 30:
#line 132 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "catch"); ;}
    break;

  case 31:
#line 133 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "finally"); ;}
    break;

  case 32:
#line 134 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "null"); ;}
    break;

  case 33:
#line 135 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "true"); ;}
    break;

  case 34:
#line 136 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "false"); ;}
    break;

  case 35:
#line 137 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "new"); ;}
    break;

  case 36:
#line 138 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "this"); ;}
    break;

  case 37:
#line 139 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "typeof"); ;}
    break;

  case 38:
#line 140 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "void"); ;}
    break;

  case 39:
#line 141 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "instanceof"); ;}
    break;

  case 40:
#line 142 "src/parser.y"
    { (yyval.node) = create_node(NODE_IDENTIFIER, "function"); ;}
    break;

  case 41:
#line 146 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 42:
#line 147 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        if ((yyval.node)) {
            ASTNode *temp = (yyval.node);
            while (temp->next) temp = temp->next;
            temp->next = (yyvsp[(2) - (2)].node);
        } else {
            (yyval.node) = (yyvsp[(2) - (2)].node);
        }
    ;}
    break;

  case 43:
#line 160 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 44:
#line 161 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 45:
#line 162 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:
#line 166 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 47:
#line 167 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 48:
#line 168 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 49:
#line 169 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 50:
#line 170 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 51:
#line 171 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 52:
#line 172 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 53:
#line 173 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 54:
#line 174 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 55:
#line 175 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 56:
#line 176 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 57:
#line 177 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 58:
#line 178 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 59:
#line 179 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 60:
#line 183 "src/parser.y"
    { (yyval.node) = create_node(NODE_BLOCK_STMT, NULL); ;}
    break;

  case 61:
#line 184 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BLOCK_STMT, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 62:
#line 192 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 63:
#line 193 "src/parser.y"
    {
        if (check_asi()) {
            (yyval.node) = (yyvsp[(2) - (2)].node);
            yyerrok;
        } else {
            yyerror("Missing semicolon in variable statement");
            YYABORT;
        }
    ;}
    break;

  case 64:
#line 205 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 65:
#line 206 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 66:
#line 215 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_VAR_DECL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 67:
#line 219 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_VAR_DECL, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 68:
#line 228 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 69:
#line 229 "src/parser.y"
    {
         if (check_asi()) { (yyval.node) = (yyvsp[(2) - (2)].node); yyerrok; } else { yyerror("Missing semicolon in let"); YYABORT; }
    ;}
    break;

  case 70:
#line 232 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 71:
#line 233 "src/parser.y"
    {
         if (check_asi()) { (yyval.node) = (yyvsp[(2) - (2)].node); yyerrok; } else { yyerror("Missing semicolon in const"); YYABORT; }
    ;}
    break;

  case 72:
#line 239 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 73:
#line 240 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 74:
#line 249 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LET_DECL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 75:
#line 253 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LET_DECL, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 76:
#line 261 "src/parser.y"
    { (yyval.node) = create_node(NODE_EMPTY_STMT, NULL); ;}
    break;

  case 77:
#line 265 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 78:
#line 269 "src/parser.y"
    {
        if (check_asi()) {
            (yyval.node) = create_node(NODE_EXPR_STMT, NULL);
            (yyval.node)->left = (yyvsp[(1) - (1)].node);
            yyerrok;
        } else {
            yyerror("Missing semicolon in expression statement");
            YYABORT;
        }
    ;}
    break;

  case 79:
#line 282 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IF_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 80:
#line 287 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IF_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (7)].node);
        (yyval.node)->right = (yyvsp[(5) - (7)].node);
        (yyval.node)->extra = (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 81:
#line 296 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_WHILE_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 82:
#line 301 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_WHILE_STMT, "do-while");
        (yyval.node)->left = (yyvsp[(5) - (7)].node);
        (yyval.node)->right = (yyvsp[(2) - (7)].node);
    ;}
    break;

  case 83:
#line 306 "src/parser.y"
    {
        if (check_asi()) {
            (yyval.node) = create_node(NODE_WHILE_STMT, "do-while");
            (yyval.node)->left = (yyvsp[(5) - (6)].node);
            (yyval.node)->right = (yyvsp[(2) - (6)].node);
            yyerrok;
        } else {
            yyerror("Missing semicolon in do-while statement");
            YYABORT;
        }
    ;}
    break;

  case 84:
#line 317 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (9)].node);
        (yyval.node)->right = (yyvsp[(5) - (9)].node);
        (yyval.node)->extra = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node));
    ;}
    break;

  case 85:
#line 323 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(4) - (10)].node);
        (yyval.node)->right = (yyvsp[(6) - (10)].node);
        (yyval.node)->extra = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(8) - (10)].node), (yyvsp[(10) - (10)].node));
    ;}
    break;

  case 86:
#line 329 "src/parser.y"
    {
         /* Simplified ES6 for structure */
         (yyval.node) = create_node(NODE_FOR_STMT, "for-let");
         (yyval.node)->left = (yyvsp[(3) - (8)].node);
    ;}
    break;

  case 87:
#line 334 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, "for-in");
        (yyval.node)->left = (yyvsp[(3) - (7)].node);
        (yyval.node)->right = (yyvsp[(5) - (7)].node);
        (yyval.node)->extra = (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 88:
#line 340 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, "for-in-var");
        (yyval.node)->left = (yyvsp[(4) - (8)].node);
        (yyval.node)->right = (yyvsp[(6) - (8)].node);
        (yyval.node)->extra = (yyvsp[(8) - (8)].node);
    ;}
    break;

  case 89:
#line 349 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 90:
#line 350 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 91:
#line 354 "src/parser.y"
    { (yyval.node) = create_node(NODE_EXPR_STMT, "continue"); ;}
    break;

  case 92:
#line 355 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "continue");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(2) - (3)].str));
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 93:
#line 360 "src/parser.y"
    {
        if (check_asi()) {
            (yyval.node) = create_node(NODE_EXPR_STMT, "continue");
            yyerrok;
        } else {
            yyerror("Missing semicolon after continue");
            YYABORT;
        }
    ;}
    break;

  case 94:
#line 372 "src/parser.y"
    { (yyval.node) = create_node(NODE_EXPR_STMT, "break"); ;}
    break;

  case 95:
#line 373 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "break");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(2) - (3)].str));
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 96:
#line 378 "src/parser.y"
    {
        if (check_asi()) {
            (yyval.node) = create_node(NODE_EXPR_STMT, "break");
            yyerrok;
        } else {
            yyerror("Missing semicolon after break");
            YYABORT;
        }
    ;}
    break;

  case 97:
#line 390 "src/parser.y"
    { (yyval.node) = create_node(NODE_RETURN_STMT, NULL); ;}
    break;

  case 98:
#line 391 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_RETURN_STMT, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 99:
#line 395 "src/parser.y"
    {
        /* Handle Return ASI: if newline seen, it's return undefined */
        if (line_terminator_seen || check_asi()) {
            (yyval.node) = create_node(NODE_RETURN_STMT, NULL);
            yyerrok;
        } else {
            /* This path is actually unreachable if lookahead validly starts an expression
               because Bison shifts. Ideally we need GLR or precedence hacks.
               But for this project, check_asi covers the "end of block" case.
            */
            yyerror("Missing semicolon or value after return");
            YYABORT;
        }
    ;}
    break;

  case 100:
#line 409 "src/parser.y"
    {
        /* Ambiguity: return \n a; -> parsed as return a; by default in Bison LALR(1) 
           unless we check line_terminator_seen explicitly inside actions, but that's late.
           For this project, we assume standard shifting unless explicit ASI trigger. */
        if (check_asi()) {
            (yyval.node) = create_node(NODE_RETURN_STMT, NULL);
            (yyval.node)->left = (yyvsp[(2) - (2)].node);
            yyerrok;
        } else {
            yyerror("Missing semicolon after return value");
            YYABORT;
        }
    ;}
    break;

  case 101:
#line 425 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "with");
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 102:
#line 433 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "switch");
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 103:
#line 441 "src/parser.y"
    { (yyval.node) = create_node(NODE_BLOCK_STMT, NULL); ;}
    break;

  case 104:
#line 442 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 105:
#line 446 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 106:
#line 447 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 107:
#line 456 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "case");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 108:
#line 460 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "case");
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
        (yyval.node)->right = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 109:
#line 465 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 110:
#line 469 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "default");
    ;}
    break;

  case 111:
#line 472 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "default");
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 112:
#line 479 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "throw");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 113:
#line 483 "src/parser.y"
    {
        if (check_asi()) {
            (yyval.node) = create_node(NODE_EXPR_STMT, "throw");
            (yyval.node)->left = (yyvsp[(2) - (2)].node);
            yyerrok;
        } else {
            yyerror("Missing semicolon after throw");
            YYABORT;
        }
    ;}
    break;

  case 114:
#line 496 "src/parser.y"
    { 
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 115:
#line 501 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 116:
#line 506 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
        (yyval.node)->extra = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 117:
#line 515 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "catch");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (5)].str));
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 118:
#line 524 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "finally");
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 119:
#line 531 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (5)].str));
        (yyval.node)->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(2) - (5)].str));
    ;}
    break;

  case 120:
#line 536 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (6)].str));
        (yyval.node)->left = (yyvsp[(4) - (6)].node);
        (yyval.node)->right = (yyvsp[(6) - (6)].node);
        free((yyvsp[(2) - (6)].str));
    ;}
    break;

  case 121:
#line 546 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CLASS_DECL, (yyvsp[(2) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 122:
#line 554 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CLASS_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 123:
#line 558 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CLASS_EXPR, (yyvsp[(2) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 124:
#line 566 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 125:
#line 569 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(4) - (5)].node);
        (yyval.node)->extra = (yyvsp[(2) - (5)].node); /* Store extended class in extra */
    ;}
    break;

  case 126:
#line 576 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 127:
#line 577 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 128:
#line 581 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 129:
#line 582 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        if ((yyval.node)) {
             ASTNode *temp = (yyval.node);
             while (temp->next) temp = temp->next;
             temp->next = (yyvsp[(2) - (2)].node);
        } else {
             (yyval.node) = (yyvsp[(2) - (2)].node);
        }
    ;}
    break;

  case 130:
#line 595 "src/parser.y"
    {
        /* Method Definition */
        (yyval.node) = create_node(NODE_METHOD_DEF, NULL);
        (yyval.node)->left = (yyvsp[(1) - (5)].node); /* Name */
        (yyval.node)->right = (yyvsp[(5) - (5)].node); /* Body */
        /* Params implicitly in $5 context or we need structure. Simplified here */
    ;}
    break;

  case 131:
#line 602 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_METHOD_DEF, NULL);
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 132:
#line 607 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_METHOD_DEF, "static");
        (yyval.node)->left = (yyvsp[(2) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 133:
#line 612 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 134:
#line 616 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, NULL);
        (yyval.node)->left = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 135:
#line 620 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 136:
#line 625 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (5)].str));
        (yyval.node)->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(2) - (5)].str));
    ;}
    break;

  case 137:
#line 630 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (6)].str));
        (yyval.node)->left = (yyvsp[(4) - (6)].node);
        (yyval.node)->right = (yyvsp[(6) - (6)].node);
        free((yyvsp[(2) - (6)].str));
    ;}
    break;

  case 138:
#line 639 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 139:
#line 643 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (3)].str));
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 140:
#line 654 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (3)].str));
         (yyval.node)->right = (yyvsp[(3) - (3)].node);
         free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 141:
#line 660 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (3)].str));
         (yyval.node)->right = (yyvsp[(3) - (3)].node);
         free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 142:
#line 666 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = (yyvsp[(2) - (5)].node);
         (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 143:
#line 671 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = (yyvsp[(2) - (5)].node);
         (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 144:
#line 679 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 145:
#line 680 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 146:
#line 684 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 147:
#line 685 "src/parser.y"
    {
        (yyval.node) = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 148:
#line 691 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 149:
#line 692 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 150:
#line 693 "src/parser.y"
    {
        (yyval.node) = create_binary_node(NODE_ASSIGNMENT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 151:
#line 696 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "+=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 152:
#line 701 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "-=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 153:
#line 706 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "*=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 154:
#line 711 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "/=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 155:
#line 716 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "%=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 156:
#line 721 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "<<=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 157:
#line 726 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, ">>=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 158:
#line 731 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, ">>>=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 159:
#line 736 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "&=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 160:
#line 741 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "|=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 161:
#line 746 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "^=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 162:
#line 754 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 163:
#line 755 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CONDITIONAL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (5)].node);
        (yyval.node)->right = (yyvsp[(3) - (5)].node);
        (yyval.node)->extra = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 164:
#line 764 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 165:
#line 765 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "||");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 166:
#line 773 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 167:
#line 774 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "&&");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 168:
#line 782 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 169:
#line 783 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "|");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 170:
#line 791 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 171:
#line 792 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "^");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 172:
#line 800 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 173:
#line 801 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "&");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 174:
#line 809 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 175:
#line 810 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "==");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 176:
#line 815 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "!=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 177:
#line 820 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "===");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 178:
#line 825 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "!==");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 179:
#line 833 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 180:
#line 834 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 181:
#line 839 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 182:
#line 844 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 183:
#line 849 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 184:
#line 854 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "instanceof");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 185:
#line 859 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "in");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 186:
#line 867 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 187:
#line 868 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<<");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 188:
#line 873 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">>");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 189:
#line 878 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">>>");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 190:
#line 886 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 191:
#line 887 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "+");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 192:
#line 892 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "-");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 193:
#line 900 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 194:
#line 901 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "*");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 195:
#line 906 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "/");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 196:
#line 911 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "%");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 197:
#line 919 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 198:
#line 920 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("delete");
    ;}
    break;

  case 199:
#line 924 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("void");
    ;}
    break;

  case 200:
#line 928 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("typeof");
    ;}
    break;

  case 201:
#line 932 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("++pre");
    ;}
    break;

  case 202:
#line 936 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("--pre");
    ;}
    break;

  case 203:
#line 940 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("+");
    ;}
    break;

  case 204:
#line 944 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("-");
    ;}
    break;

  case 205:
#line 948 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("~");
    ;}
    break;

  case 206:
#line 952 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("!");
    ;}
    break;

  case 207:
#line 959 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 208:
#line 960 "src/parser.y"
    {
        if (line_terminator_seen) {
            (yyval.node) = (yyvsp[(1) - (2)].node);
            asi_triggered = 1;
        } else {
            (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(1) - (2)].node));
            (yyval.node)->value = strdup("++post");
        }
    ;}
    break;

  case 209:
#line 969 "src/parser.y"
    {
        if (line_terminator_seen) {
            (yyval.node) = (yyvsp[(1) - (2)].node);
            asi_triggered = 1;
        } else {
            (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(1) - (2)].node));
            (yyval.node)->value = strdup("--post");
        }
    ;}
    break;

  case 210:
#line 981 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 211:
#line 982 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 212:
#line 986 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 213:
#line 987 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_NEW_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 214:
#line 994 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CALL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
        (yyval.node)->right = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 215:
#line 999 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CALL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
        (yyval.node)->right = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 216:
#line 1004 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, "[]");
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 217:
#line 1010 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, ".");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 218:
#line 1018 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 219:
#line 1019 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 220:
#line 1020 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 221:
#line 1021 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, "[]");
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 222:
#line 1027 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, ".");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 223:
#line 1032 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_NEW_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 224:
#line 1040 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_THIS_EXPR, NULL);
    ;}
    break;

  case 225:
#line 1043 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 226:
#line 1047 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 227:
#line 1048 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 228:
#line 1049 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 229:
#line 1050 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 230:
#line 1054 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "null"); ;}
    break;

  case 231:
#line 1055 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "true"); ;}
    break;

  case 232:
#line 1056 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "false"); ;}
    break;

  case 233:
#line 1057 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 234:
#line 1061 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 235:
#line 1065 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 236:
#line 1072 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 237:
#line 1076 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 238:
#line 1080 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (5)].node);
        (yyval.node)->right = (yyvsp[(4) - (5)].node);
    ;}
    break;

  case 239:
#line 1088 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(2) - (2)].node);
        if ((yyvsp[(1) - (2)].node)) {
            (yyval.node)->next = (yyvsp[(1) - (2)].node);
        }
    ;}
    break;

  case 240:
#line 1094 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (4)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(4) - (4)].node);
        if ((yyvsp[(3) - (4)].node)) {
            (yyvsp[(4) - (4)].node)->next = (yyvsp[(3) - (4)].node);
        }
    ;}
    break;

  case 241:
#line 1106 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 242:
#line 1107 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 243:
#line 1111 "src/parser.y"
    { (yyval.node) = create_node(NODE_EMPTY_STMT, NULL); ;}
    break;

  case 244:
#line 1112 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_EMPTY_STMT, NULL);
    ;}
    break;

  case 245:
#line 1121 "src/parser.y"
    { (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL); ;}
    break;

  case 246:
#line 1122 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 247:
#line 1126 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
    ;}
    break;

  case 248:
#line 1133 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 249:
#line 1134 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 250:
#line 1135 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 251:
#line 1139 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_PROPERTY, NULL);
        (yyval.node)->left = (yyvsp[(1) - (3)].node); /* Key */
        (yyval.node)->right = (yyvsp[(3) - (3)].node); /* Value */
    ;}
    break;

  case 252:
#line 1144 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, NULL);
        temp->next->left = (yyvsp[(3) - (5)].node);
        temp->next->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 253:
#line 1155 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 254:
#line 1156 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 255:
#line 1160 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 256:
#line 1161 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4111 "build/parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1169 "src/parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Parse error at line %d: %s\n", yylineno, s);
}

int parse_javascript(const char *input) {
    init_lexer(input);
    int result = yyparse();
    return result;
}

ASTNode* get_ast_root() {
    return root;
}
