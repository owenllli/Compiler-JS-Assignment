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
#define YYFINAL  186
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1819

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  263
/* YYNRULES -- Number of states.  */
#define YYNSTATES  484

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
     119,   122,   126,   130,   133,   135,   139,   141,   143,   145,
     147,   151,   155,   158,   162,   165,   167,   171,   173,   177,
     179,   182,   184,   190,   198,   204,   212,   219,   229,   240,
     249,   257,   266,   267,   269,   272,   276,   278,   281,   285,
     287,   290,   294,   296,   299,   305,   311,   314,   318,   320,
     323,   327,   332,   334,   337,   341,   345,   348,   352,   356,
     361,   367,   370,   376,   383,   387,   390,   394,   398,   404,
     405,   407,   409,   412,   418,   423,   429,   431,   436,   442,
     448,   455,   457,   461,   465,   469,   475,   481,   482,   484,
     486,   490,   492,   494,   498,   502,   506,   510,   514,   518,
     522,   526,   530,   534,   538,   542,   544,   550,   552,   556,
     558,   562,   564,   568,   570,   574,   576,   580,   582,   586,
     590,   594,   598,   600,   604,   608,   612,   616,   620,   624,
     626,   630,   634,   638,   640,   644,   648,   650,   654,   658,
     662,   664,   667,   670,   673,   676,   679,   682,   685,   688,
     691,   693,   696,   699,   701,   703,   705,   708,   711,   714,
     719,   723,   725,   727,   729,   734,   738,   742,   744,   746,
     748,   750,   752,   756,   758,   760,   762,   764,   766,   768,
     772,   776,   782,   785,   789,   794,   800,   801,   803,   805,
     808,   811,   815,   820,   822,   824,   826,   830,   836,   839,
     843,   845,   848,   852
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
     102,    -1,   101,   102,    -1,   103,    -1,   130,    -1,   131,
      -1,   104,    -1,   105,    -1,   109,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   117,    -1,   118,    -1,   119,
      -1,   120,    -1,   121,    -1,   126,    -1,   127,    -1,    44,
      45,    -1,    44,   101,    45,    -1,    28,   106,    51,    -1,
      28,   106,    -1,   108,    -1,   106,    52,   108,    -1,     3,
      -1,   162,    -1,   166,    -1,   107,    -1,   107,    82,   142,
      -1,    33,   110,    51,    -1,    33,   110,    -1,    32,   110,
      51,    -1,    32,   110,    -1,   111,    -1,   110,    52,   111,
      -1,   107,    -1,   107,    82,   142,    -1,    51,    -1,   141,
      51,    -1,   141,    -1,    18,    46,   141,    47,   103,    -1,
      18,    46,   141,    47,   103,    14,   103,    -1,    30,    46,
     141,    47,   103,    -1,    13,   103,    30,    46,   141,    47,
      51,    -1,    13,   103,    30,    46,   141,    47,    -1,    16,
      46,   116,    51,   116,    51,   116,    47,   103,    -1,    16,
      46,    28,   106,    51,   116,    51,   116,    47,   103,    -1,
      16,    46,   109,   116,    51,   116,    47,   103,    -1,    16,
      46,   156,    19,   141,    47,   103,    -1,    16,    46,    28,
     108,    19,   141,    47,   103,    -1,    -1,   141,    -1,    10,
      51,    -1,    10,     3,    51,    -1,    10,    -1,     7,    51,
      -1,     7,     3,    51,    -1,     7,    -1,    22,    51,    -1,
      22,   141,    51,    -1,    22,    -1,    22,   141,    -1,    31,
      46,   141,    47,   103,    -1,    23,    46,   141,    47,   122,
      -1,    44,    45,    -1,    44,   123,    45,    -1,   124,    -1,
     123,   124,    -1,     8,   141,    81,    -1,     8,   141,    81,
     101,    -1,   125,    -1,    11,    81,    -1,    11,    81,   101,
      -1,    25,   141,    51,    -1,    25,   141,    -1,    26,   104,
     128,    -1,    26,   104,   129,    -1,    26,   104,   128,   129,
      -1,     9,    46,     3,    47,   104,    -1,    15,   104,    -1,
      17,     3,    46,    47,   104,    -1,    17,     3,    46,   138,
      47,   104,    -1,    34,     3,   133,    -1,    34,   133,    -1,
      34,     3,   133,    -1,    44,   134,    45,    -1,    35,   156,
      44,   134,    45,    -1,    -1,   135,    -1,   136,    -1,   135,
     136,    -1,   100,    46,   138,    47,   104,    -1,   100,    46,
      47,   104,    -1,    37,   100,    46,    47,   104,    -1,    51,
      -1,    17,    46,    47,   104,    -1,    17,    46,   138,    47,
     104,    -1,    17,     3,    46,    47,   104,    -1,    17,     3,
      46,   138,    47,   104,    -1,     3,    -1,   138,    52,     3,
      -1,     3,    54,   104,    -1,     3,    54,   142,    -1,    46,
     140,    47,    54,   104,    -1,    46,   140,    47,    54,   142,
      -1,    -1,   138,    -1,   142,    -1,   141,    52,   142,    -1,
     143,    -1,   139,    -1,   156,    82,   142,    -1,   156,    83,
     142,    -1,   156,    84,   142,    -1,   156,    85,   142,    -1,
     156,    86,   142,    -1,   156,    87,   142,    -1,   156,    88,
     142,    -1,   156,    89,   142,    -1,   156,    90,   142,    -1,
     156,    91,   142,    -1,   156,    92,   142,    -1,   156,    93,
     142,    -1,   144,    -1,   144,    80,   142,    81,   142,    -1,
     145,    -1,   144,    79,   145,    -1,   146,    -1,   145,    78,
     146,    -1,   147,    -1,   146,    74,   147,    -1,   148,    -1,
     147,    75,   148,    -1,   149,    -1,   148,    73,   149,    -1,
     150,    -1,   149,    59,   150,    -1,   149,    60,   150,    -1,
     149,    61,   150,    -1,   149,    62,   150,    -1,   151,    -1,
     150,    55,   151,    -1,   150,    56,   151,    -1,   150,    57,
     151,    -1,   150,    58,   151,    -1,   150,    20,   151,    -1,
     150,    19,   151,    -1,   152,    -1,   151,    70,   152,    -1,
     151,    71,   152,    -1,   151,    72,   152,    -1,   153,    -1,
     152,    63,   153,    -1,   152,    64,   153,    -1,   154,    -1,
     153,    65,   154,    -1,   153,    66,   154,    -1,   153,    67,
     154,    -1,   155,    -1,    12,   154,    -1,    29,   154,    -1,
      27,   154,    -1,    68,   154,    -1,    69,   154,    -1,    63,
     154,    -1,    64,   154,    -1,    76,   154,    -1,    77,   154,
      -1,   156,    -1,   156,    68,    -1,   156,    69,    -1,   157,
      -1,   158,    -1,   159,    -1,    21,   157,    -1,   159,   169,
      -1,   158,   169,    -1,   158,    48,   141,    49,    -1,   158,
      50,   100,    -1,   160,    -1,   137,    -1,   132,    -1,   159,
      48,   141,    49,    -1,   159,    50,   100,    -1,    21,   159,
     169,    -1,    24,    -1,     3,    -1,   161,    -1,   162,    -1,
     166,    -1,    46,   141,    47,    -1,    43,    -1,    41,    -1,
      42,    -1,     4,    -1,     5,    -1,     6,    -1,    48,   164,
      49,    -1,    48,   163,    49,    -1,    48,   163,    52,   164,
      49,    -1,   164,   142,    -1,   164,    53,   142,    -1,   163,
      52,   164,   142,    -1,   163,    52,   164,    53,   142,    -1,
      -1,   165,    -1,    52,    -1,   165,    52,    -1,    44,    45,
      -1,    44,   168,    45,    -1,    44,   168,    52,    45,    -1,
     100,    -1,     5,    -1,     4,    -1,   167,    81,   142,    -1,
     168,    52,   167,    81,   142,    -1,    46,    47,    -1,    46,
     170,    47,    -1,   142,    -1,    53,   142,    -1,   170,    52,
     142,    -1,   170,    52,    53,   142,    -1
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
     183,   184,   192,   193,   205,   206,   216,   220,   221,   225,
     230,   240,   241,   244,   245,   251,   252,   262,   266,   274,
     278,   282,   295,   300,   309,   314,   319,   330,   336,   342,
     347,   353,   362,   363,   367,   368,   373,   385,   386,   391,
     403,   404,   408,   422,   438,   446,   454,   455,   459,   460,
     469,   473,   478,   482,   485,   492,   496,   509,   514,   519,
     528,   537,   544,   549,   559,   567,   571,   579,   582,   589,
     590,   594,   595,   608,   615,   620,   625,   629,   633,   638,
     643,   652,   656,   667,   673,   679,   684,   692,   693,   697,
     698,   704,   705,   706,   709,   714,   719,   724,   729,   734,
     739,   744,   749,   754,   759,   767,   768,   777,   778,   786,
     787,   795,   796,   804,   805,   813,   814,   822,   823,   828,
     833,   838,   846,   847,   852,   857,   862,   867,   872,   880,
     881,   886,   891,   899,   900,   905,   913,   914,   919,   924,
     932,   933,   937,   941,   945,   949,   953,   957,   961,   965,
     972,   973,   982,   994,   995,   999,  1000,  1007,  1012,  1017,
    1023,  1031,  1032,  1033,  1034,  1040,  1045,  1053,  1056,  1060,
    1061,  1062,  1063,  1067,  1068,  1069,  1070,  1074,  1078,  1085,
    1089,  1093,  1101,  1105,  1110,  1117,  1129,  1130,  1134,  1135,
    1144,  1145,  1149,  1156,  1157,  1158,  1162,  1167,  1178,  1179,
    1183,  1184,  1188,  1194
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
  "VariableDeclarationList", "BindingIdentifierOrPattern",
  "VariableDeclaration", "LexicalDeclaration", "BindingList",
  "LexicalBinding", "EmptyStatement", "ExpressionStatement", "IfStatement",
  "IterationStatement", "ExpressionOpt", "ContinueStatement",
  "BreakStatement", "ReturnStatement", "WithStatement", "SwitchStatement",
  "CaseBlock", "CaseClauses", "CaseClause", "DefaultClause",
  "ThrowStatement", "TryStatement", "Catch", "Finally",
  "FunctionDeclaration", "ClassDeclaration", "ClassExpression",
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
     104,   104,   105,   105,   106,   106,   107,   107,   107,   108,
     108,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   117,   117,   118,   118,   118,
     119,   119,   119,   119,   120,   121,   122,   122,   123,   123,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     128,   129,   130,   130,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   136,   137,   137,   137,
     137,   138,   138,   139,   139,   139,   139,   140,   140,   141,
     141,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     149,   149,   150,   150,   150,   150,   150,   150,   150,   151,
     151,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     155,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     158,   159,   159,   159,   159,   159,   159,   160,   160,   160,
     160,   160,   160,   161,   161,   161,   161,   161,   161,   162,
     162,   162,   163,   163,   163,   163,   164,   164,   165,   165,
     166,   166,   166,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   170,   170
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
       2,     3,     3,     2,     1,     3,     1,     1,     1,     1,
       3,     3,     2,     3,     2,     1,     3,     1,     3,     1,
       2,     1,     5,     7,     5,     7,     6,     9,    10,     8,
       7,     8,     0,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     1,     2,     5,     5,     2,     3,     1,     2,
       3,     4,     1,     2,     3,     3,     2,     3,     3,     4,
       5,     2,     5,     6,     3,     2,     3,     3,     5,     0,
       1,     1,     2,     5,     4,     5,     1,     4,     5,     5,
       6,     1,     3,     3,     3,     5,     5,     0,     1,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     1,     1,     1,     2,     2,     2,     4,
       3,     1,     1,     1,     4,     3,     3,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     5,     2,     3,     4,     5,     0,     1,     1,     2,
       2,     3,     4,     1,     1,     1,     3,     5,     2,     3,
       1,     2,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,   228,   236,   237,   238,    99,    96,     0,     0,     0,
       0,     0,     0,   102,     0,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,   235,   233,     0,
     147,   246,    79,     0,     0,     0,     0,     0,     0,     0,
       2,    41,    43,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    44,    45,   223,
     222,   152,    81,   149,   151,   165,   167,   169,   171,   173,
     175,   177,   182,   189,   193,   196,   200,   210,   213,   214,
     215,   221,   229,   230,   231,     0,     0,    97,     0,    94,
     228,     0,     0,     0,     0,   201,   210,     0,    92,     0,
       0,     0,   216,   215,   100,   103,     0,   116,     0,     0,
     203,    66,    63,    69,    64,    67,    68,   202,     0,     0,
      77,    74,    75,    72,     0,     0,   129,   125,   228,   236,
     237,    99,    30,    96,     5,     6,    18,    17,    31,    20,
      40,    16,    21,    39,    35,   102,    27,   227,    28,    29,
      37,    13,    38,    19,    26,    15,    14,     7,     8,     9,
      10,    11,    12,    22,   234,   235,   233,    60,   253,     0,
       0,     0,   228,   148,     0,     0,   248,     0,     0,   247,
     206,   207,   204,   205,   208,   209,     1,    42,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,   217,   143,   144,    98,    95,     0,
       0,     4,   255,   254,    24,    23,     6,    18,    20,    40,
      16,    35,    25,    27,    36,    28,    29,    37,    13,    38,
      19,    26,    15,    14,     7,    33,    34,    32,   250,     0,
       0,    92,     0,    93,   210,     0,   141,     0,     0,     0,
     226,   101,     0,   115,    60,     0,     0,   117,   118,    62,
       0,     0,     0,     0,     0,    73,     0,    71,   124,     0,
      10,   136,     0,     0,   130,   131,    61,     0,   251,     0,
       0,     0,   232,   240,   246,   239,     0,   242,   249,   150,
     168,     0,   170,   172,   174,   176,   178,   179,   180,   181,
     188,   187,   183,   184,   185,   186,   190,   191,   192,   194,
     195,   197,   198,   199,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   258,     0,   260,     0,
       0,   220,     0,   225,     0,   126,     0,     0,    64,     0,
      92,     0,     0,     0,   137,     0,     0,     0,     0,   121,
     119,    65,    70,     0,     0,    78,    76,   129,     0,     0,
     127,   132,   256,   252,     0,   142,     0,     0,   243,     0,
     261,   259,     0,   219,   224,     0,     0,     0,    92,     0,
      92,     0,     0,   122,     0,   138,    82,     0,   105,     0,
      84,   104,     0,     0,     0,     0,     0,   145,   146,   241,
       0,   244,   166,     0,   262,   139,     0,    86,     0,     0,
       0,    92,     0,   123,     0,     0,     0,   106,     0,   108,
     112,     0,   128,     0,   134,     0,   257,   245,   263,   140,
      85,    92,     0,     0,     0,    90,    83,     0,   113,   107,
     109,   120,   135,   133,     0,    91,    89,     0,   110,   114,
       0,    87,   111,    88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    39,   168,   169,    41,    42,    43,    44,   112,   120,
     114,    45,   121,   122,    46,    47,    48,    49,   272,    50,
      51,    52,    53,    54,   418,   448,   449,   450,    55,    56,
     287,   288,    57,    58,    59,   127,   303,   304,   305,    60,
     173,    61,   174,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   177,   178,   179,    84,   170,
     171,   231,   359
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -244
static const yytype_int16 yypact[] =
{
     726,   -23,  -244,  -244,  -244,    20,    21,  1327,   794,    -9,
      14,    -3,  1646,  1219,     7,  -244,  1381,    13,  1327,    31,
    1327,    27,    71,    31,    31,    15,  -244,  -244,  -244,   522,
    1435,    58,  -244,  1327,  1327,  1327,  1327,  1327,  1327,    76,
     726,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,   133,  -244,  -244,   114,    11,    53,    61,    51,
     225,    36,   181,   160,   199,  -244,  -244,   397,  -244,   185,
     196,  -244,  -244,  -244,  -244,  1489,    82,  -244,   110,  -244,
    -244,    39,    23,  1692,  1381,  -244,   206,   137,  1003,    98,
      22,  1381,  -244,   196,  -244,   229,  1381,   243,   590,    30,
    -244,  -244,   245,    95,  -244,  -244,  -244,  -244,  1381,  1381,
     105,   249,  -244,   251,    62,  1646,  1605,  -244,    24,    94,
     124,    17,  -244,    19,  -244,  1327,   794,  -244,  -244,    -9,
      14,    -3,  -244,  -244,  1646,   186,     7,   127,  1381,    13,
    1327,    31,  1327,    27,    71,    31,    31,    15,  -244,  -244,
    -244,  -244,  -244,  -244,   135,   145,   155,  1514,  -244,   658,
     162,    59,    49,   193,   167,    66,  -244,    25,  1057,   204,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  1381,
    1327,  1381,  1327,  1327,  1327,  1327,  1327,  1327,  1327,  1327,
    1327,  1327,  1327,  1327,  1327,  1327,  1327,  1327,  1327,  1327,
    1327,  1327,  1327,  1327,  -244,  -244,  1381,  1381,  1381,  1381,
    1381,  1381,  1381,  1381,  1381,  1381,  1381,  1381,  1111,  1381,
    1776,  -244,  1381,  1776,  -244,  -244,  -244,  -244,  -244,   202,
      62,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   213,
      31,  1381,   210,   224,   297,    33,  -244,    13,    67,    69,
    -244,  -244,    78,  -244,  -244,   252,    13,   289,  -244,  -244,
      31,  1381,    88,   129,  1381,  -244,    31,  -244,   824,   266,
    1776,  -244,   265,   267,  1605,  -244,  -244,  1381,  -244,  1735,
     310,   260,  -244,  -244,    58,  -244,  1381,  -244,  -244,  -244,
      11,   234,    53,    61,    51,   225,    36,    36,    36,    36,
     181,   181,   181,   181,   181,   181,   160,   160,   160,   199,
     199,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  1381,  -244,   136,
      50,  -244,    74,  -244,    35,  -244,  1381,   255,   298,   268,
    1381,  1381,    13,   148,  -244,    13,   794,   276,   318,  -244,
    -244,  -244,  -244,   794,   794,  -244,  -244,  1605,   277,    37,
    -244,  -244,  -244,  -244,   241,  -244,  1489,  1165,  -244,  1381,
    -244,  -244,  1273,  -244,  -244,    13,   149,   150,  1381,  1381,
    1381,   273,   157,   868,    13,  -244,   312,    41,  -244,   278,
    -244,  -244,   287,   288,    13,   159,  1381,  -244,  -244,  -244,
    1381,  -244,  -244,  1381,  -244,  -244,    13,   283,   285,   165,
     290,  1381,   794,   912,   794,  1381,   257,  -244,    43,  -244,
    -244,    13,  -244,    13,  -244,    13,  -244,  -244,  -244,  -244,
    -244,  1381,   794,   794,   292,  -244,  -244,   -40,   726,  -244,
    -244,  -244,  -244,  -244,   293,  -244,  -244,   794,   726,   726,
     794,  -244,   726,  -244
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -118,     0,   -37,    -7,    -4,  -244,    72,   -12,
    -243,   253,   -15,    45,  -244,  -244,  -244,  -244,  -242,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -105,  -244,  -244,  -244,
    -244,    63,  -244,  -244,  -244,  -109,   -35,  -244,    52,  -244,
     -96,  -244,  -244,   -11,   -69,  -244,  -244,   163,   166,   161,
     168,   172,    93,   -31,    64,    99,    28,  -244,   311,     2,
    -244,    18,  -244,  -244,   -13,  -244,    56,  -244,     9,    54,
    -244,   -59,  -244
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -256
static const yytype_int16 yytable[] =
{
      40,    97,   105,   187,   278,   107,   115,   113,   302,   123,
     115,   115,   189,   109,   102,   298,   236,    99,   124,   175,
      86,   234,    88,    86,    88,   276,   240,   368,   116,   369,
     103,    85,   116,   116,   111,    95,   276,    98,   276,   285,
     276,   478,   239,   101,   280,   286,   110,   381,   117,   445,
     125,   445,   446,   106,   446,   200,   201,   108,   125,   126,
     100,   180,   181,   182,   183,   184,   185,   126,    87,   277,
      89,    87,    89,   118,   313,    93,   186,   314,    85,    31,
     372,   235,   405,   175,   424,   100,   447,   273,   469,   192,
     279,   202,   203,   204,   205,   282,  -141,   125,   -24,   403,
     -23,  -141,   189,    85,   308,    -4,   126,   292,   293,   317,
     176,   309,   361,   312,   375,   363,   376,   119,   189,   310,
     319,   189,   321,   404,   195,   377,   189,   193,   411,    97,
     189,   365,   187,   237,   105,   383,   194,   107,   115,   113,
     189,   123,   115,   115,   275,   109,   102,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   358,
     116,   238,   103,    95,   116,   116,   438,   269,   440,   330,
     331,   332,   333,   334,   335,  -255,   384,   291,   110,   373,
     117,   189,   388,   401,   188,   189,   302,   294,   402,     1,
       2,     3,     4,   190,   191,   414,   436,   437,     7,   464,
     310,   310,   189,    91,   442,  -254,   455,    12,   -36,   189,
      15,   310,   462,    18,   311,    20,   -33,   189,   360,   474,
      92,   362,   382,   209,   210,   385,   -34,    26,    27,    28,
      93,   228,    30,   229,    31,   230,   -32,   104,   392,   341,
     342,   343,   228,   307,   232,   310,   233,   398,   364,    33,
      34,   206,   207,   208,    35,    36,   318,   115,   113,   366,
     273,   370,    37,    38,   211,   212,   213,   -25,   406,   302,
     336,   337,   338,   374,   214,   215,   189,   115,   113,   116,
     281,   189,   379,   115,   196,   197,   198,   199,   400,   326,
     327,   328,   329,   425,   283,   189,   289,   290,   378,   116,
     295,   296,   297,   296,   286,   116,   408,   290,   339,   340,
     387,   389,   390,   395,   396,   399,   371,   409,    96,   410,
     417,   419,   426,   423,   441,   451,   444,   428,   431,    96,
     432,    96,   452,   434,   460,   453,   461,   463,   468,   477,
     480,   386,   367,   470,    96,    96,    96,    96,    96,    96,
     380,   271,   422,   320,   323,   407,   391,   456,   322,   273,
     412,   457,   324,   394,   458,   214,   215,   325,   413,   416,
     397,   415,     0,     0,     0,     0,   420,   421,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,     0,   427,     0,     0,     0,     0,   273,   439,   273,
       0,   435,     0,     0,     0,     0,     0,     0,     0,   274,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     454,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     273,     0,   459,     0,   467,   465,   299,   466,     0,     0,
       0,     0,   187,     0,     0,   187,    96,   471,     0,   472,
     273,   473,     0,     0,     0,   475,   476,     0,     0,     0,
       0,    96,     0,    96,     0,   214,   215,     0,   479,     0,
     481,     0,     0,   483,     0,     0,     0,     0,   482,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,   128,   129,   130,     4,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,    29,   167,    30,     0,
      31,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,     0,     0,
      35,    36,     0,     1,     2,     3,     4,     5,    37,    38,
       6,     0,     7,     8,     0,     0,     9,    10,    11,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,   284,    30,     0,    31,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,    35,    36,
       0,     1,     2,     3,     4,     5,    37,    38,     6,     0,
       7,     8,     0,     0,     9,    10,    11,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,   306,    30,     0,    31,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,     0,    35,    36,     0,     1,
       2,     3,     4,     5,    37,    38,     6,     0,     7,     8,
       0,     0,     9,    10,    11,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,    30,     0,    31,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    35,    36,     0,     1,     2,     3,
       4,     5,    37,    38,     6,     0,     7,     8,     0,     0,
       9,    91,    11,     0,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    92,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
      30,     0,    31,  -126,  -126,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
      37,    38,     0,     0,  -126,     0,  -126,     0,     0,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -139,  -139,  -126,
    -126,  -126,     0,     0,  -126,  -126,  -126,  -126,  -126,  -126,
       0,     0,  -126,  -126,  -126,     0,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -139,     0,
    -139,     0,     0,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -140,  -140,  -139,  -139,  -139,     0,     0,  -139,  -139,
    -139,  -139,  -139,  -139,     0,     0,  -139,  -139,  -139,     0,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -140,     0,  -140,     0,     0,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,     0,     0,  -140,  -140,  -140,
       0,     0,  -140,  -140,  -140,  -140,  -140,  -140,     0,     0,
    -140,  -140,  -140,     0,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,     1,     2,     3,     4,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
      91,     0,     0,     0,    12,     0,     0,    15,     0,     0,
      18,   270,    20,     0,     0,    23,    24,    92,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    93,     0,    30,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     0,     0,    33,    34,     0,     7,
       0,    35,    36,     0,    91,     0,     0,     0,    12,    37,
      38,    15,     0,     0,    18,     0,    20,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    93,     0,    30,     0,    31,   315,     0,     0,     0,
     316,     0,     0,     0,     1,     2,     3,     4,     0,     0,
      33,    34,     0,     7,     0,    35,    36,     0,    91,     0,
       0,     0,    12,    37,    38,    15,     0,     0,    18,     0,
      20,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    93,     0,    30,   356,    31,
       0,     0,     0,     0,   357,     0,     0,     0,     1,     2,
       3,     4,     0,     0,    33,    34,     0,     7,     0,    35,
      36,     0,    91,     0,     0,     0,    12,    37,    38,    15,
       0,     0,    18,     0,    20,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    93,
       0,    30,     0,    31,   429,     0,     0,     0,   430,     0,
       0,     0,     1,     2,     3,     4,     0,     0,    33,    34,
       0,     7,     0,    35,    36,     0,    91,     0,     0,     0,
      12,    37,    38,    15,     0,     0,    18,     0,    20,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    93,     0,    30,     0,    31,     0,     0,
     104,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       0,     0,    33,    34,     0,     7,     0,    35,    36,     0,
      91,     0,     0,     0,    12,    37,    38,    15,     0,     0,
      18,     0,    20,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    93,     0,    30,
       0,    31,     0,     0,     0,     0,   433,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   172,     2,
       3,     4,     0,     0,    33,    34,     0,     7,     0,    35,
      36,     0,    91,     0,     0,     0,    12,    37,    38,    15,
       0,     0,    18,     0,    20,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    93,
       0,    30,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     0,     0,    33,    34,
       0,     7,     0,    35,    36,     0,    91,     0,     0,     0,
      12,    37,    38,    15,     0,     0,    18,     0,    20,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,  -250,    30,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,  -250,    37,    38,     0,     0,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,     0,     0,  -250,
    -250,  -250,     0,     0,  -250,  -250,  -250,  -250,  -250,  -250,
       0,     0,  -250,  -250,  -250,     0,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,   241,     0,
       0,     0,   244,     0,   132,   245,   134,   246,   247,   137,
     138,   248,   249,   250,   142,   143,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     158,   159,   300,   161,   162,   163,   265,   266,   267,    90,
       2,     3,     4,     0,     0,     0,   301,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,    12,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      93,     0,    94,     0,    31,   241,   242,   243,     0,   244,
       0,   132,   245,   134,   246,   247,   137,   138,   248,   249,
     250,   142,   143,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   158,   159,   160,
     161,   162,   163,   265,   266,   267,     0,   268,   241,   242,
     243,     0,   244,     0,   132,   245,   134,   246,   247,   137,
     138,   248,   249,   250,   142,   143,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     158,   159,   160,   161,   162,   163,   265,   266,   267,   241,
     393,     0,     0,   244,     0,   132,   245,   134,   246,   247,
     137,   138,   248,   249,   250,   142,   143,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   158,   159,   160,   161,   162,   163,   265,   266,   267
};

static const yytype_int16 yycheck[] =
{
       0,     8,    13,    40,   100,    16,    19,    19,   126,    24,
      23,    24,    52,    17,    12,   124,    85,     3,     3,    30,
       3,    80,     3,     3,     3,     3,     3,   270,    19,   271,
      12,    54,    23,    24,     3,     7,     3,    46,     3,     9,
       3,    81,     3,    46,   103,    15,    18,   290,    20,     8,
      35,     8,    11,    46,    11,    19,    20,    44,    35,    44,
      46,    33,    34,    35,    36,    37,    38,    44,    51,    47,
      51,    51,    51,    46,    49,    44,     0,    52,    54,    48,
      47,    85,    47,    94,    47,    46,    45,    98,    45,    78,
     101,    55,    56,    57,    58,   106,    47,    35,    81,    49,
      81,    52,    52,    54,    45,    81,    44,   118,   119,   178,
      52,    52,   230,    47,    47,   233,    47,    46,    52,    52,
     189,    52,   191,    49,    73,    47,    52,    74,   370,   136,
      52,   240,   169,    51,   145,    47,    75,   148,   151,   151,
      52,   156,   155,   156,    46,   149,   144,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     151,    51,   144,   135,   155,   156,   408,    30,   410,   200,
     201,   202,   203,   204,   205,    81,    47,    82,   150,   275,
     152,    52,   300,    47,    51,    52,   304,    82,    52,     3,
       4,     5,     6,    79,    80,    47,    47,    47,    12,   441,
      52,    52,    52,    17,    47,    81,    47,    21,    81,    52,
      24,    52,    47,    27,    47,    29,    81,    52,   229,   461,
      34,   232,   291,    63,    64,   294,    81,    41,    42,    43,
      44,    46,    46,    48,    48,    50,    81,    51,   307,   211,
     212,   213,    46,    81,    48,    52,    50,   316,    46,    63,
      64,    70,    71,    72,    68,    69,    52,   270,   270,    46,
     271,    51,    76,    77,    65,    66,    67,    81,   364,   387,
     206,   207,   208,   277,    68,    69,    52,   290,   290,   270,
      51,    52,   286,   296,    59,    60,    61,    62,   357,   196,
     197,   198,   199,   389,    51,    52,    51,    52,    46,   290,
      51,    52,    51,    52,    15,   296,    51,    52,   209,   210,
      44,    46,    45,     3,    54,    81,    19,    19,     7,    51,
      44,     3,    81,    46,    51,    47,    14,   396,   397,    18,
     399,    20,    45,   402,    51,    47,    51,    47,    81,    47,
      47,   296,   270,   448,    33,    34,    35,    36,    37,    38,
     287,    98,   387,   190,   193,   366,   304,   426,   192,   370,
     371,   430,   194,   309,   433,    68,    69,   195,   372,   376,
     314,   375,    -1,    -1,    -1,    -1,   383,   384,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    -1,   396,    -1,    -1,    -1,    -1,   408,   409,   410,
      -1,   405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
     414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     441,    -1,   436,    -1,   445,   442,   125,   444,    -1,    -1,
      -1,    -1,   479,    -1,    -1,   482,   135,   451,    -1,   453,
     461,   455,    -1,    -1,    -1,   462,   463,    -1,    -1,    -1,
      -1,   150,    -1,   152,    -1,    68,    69,    -1,   468,    -1,
     477,    -1,    -1,   480,    -1,    -1,    -1,    -1,   478,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    69,    -1,     3,     4,     5,     6,     7,    76,    77,
      10,    -1,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
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
      44,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    69,    -1,     3,     4,     5,
       6,     7,    76,    77,    10,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    -1,    48,    19,    20,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    19,    20,    65,
      66,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
      -1,    -1,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    19,    20,    65,    66,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    -1,    78,    79,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    65,    66,    67,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,    -1,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,
      27,    28,    29,    -1,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    63,    64,    -1,    12,
      -1,    68,    69,    -1,    17,    -1,    -1,    -1,    21,    76,
      77,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    -1,    48,    49,    -1,    -1,    -1,
      53,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      63,    64,    -1,    12,    -1,    68,    69,    -1,    17,    -1,
      -1,    -1,    21,    76,    77,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    47,    48,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    63,    64,    -1,    12,    -1,    68,
      69,    -1,    17,    -1,    -1,    -1,    21,    76,    77,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    48,    49,    -1,    -1,    -1,    53,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    63,    64,
      -1,    12,    -1,    68,    69,    -1,    17,    -1,    -1,    -1,
      21,    76,    77,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    63,    64,    -1,    12,    -1,    68,    69,    -1,
      17,    -1,    -1,    -1,    21,    76,    77,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
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
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    20,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    50,    76,    77,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
      -1,    -1,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,     3,    -1,
      -1,    -1,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     3,
       4,     5,     6,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    -1,    48,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     3,
      45,    -1,    -1,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    12,    13,    16,
      17,    18,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    41,    42,    43,    44,
      46,    48,    51,    63,    64,    68,    69,    76,    77,    99,
     101,   102,   103,   104,   105,   109,   112,   113,   114,   115,
     117,   118,   119,   120,   121,   126,   127,   130,   131,   132,
     137,   139,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   166,    54,     3,    51,     3,    51,
       3,    17,    34,    44,    46,   154,   156,   103,    46,     3,
      46,    46,   157,   159,    51,   141,    46,   141,    44,   104,
     154,     3,   106,   107,   108,   162,   166,   154,    46,    46,
     107,   110,   111,   110,     3,    35,    44,   133,     3,     4,
       5,     7,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    45,   100,   101,
     167,   168,     3,   138,   140,   141,    52,   163,   164,   165,
     154,   154,   154,   154,   154,   154,     0,   102,    51,    52,
      79,    80,    78,    74,    75,    73,    59,    60,    61,    62,
      19,    20,    55,    56,    57,    58,    70,    71,    72,    63,
      64,    65,    66,    67,    68,    69,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    46,    48,
      50,   169,    48,    50,   169,   104,   142,    51,    51,     3,
       3,     3,     4,     5,     7,    10,    12,    13,    16,    17,
      18,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    41,    42,    43,    45,    30,
      28,   109,   116,   141,   156,    46,     3,    47,   138,   141,
     169,    51,   141,    51,    45,     9,    15,   128,   129,    51,
      52,    82,   141,   141,    82,    51,    52,    51,   133,   156,
      37,    51,   100,   134,   135,   136,    45,    81,    45,    52,
      52,    47,    47,    49,    52,    49,    53,   142,    52,   142,
     145,   142,   146,   147,   148,   149,   150,   150,   150,   150,
     151,   151,   151,   151,   151,   151,   152,   152,   152,   153,
     153,   154,   154,   154,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,    47,    53,   142,   170,
     141,   100,   141,   100,    46,   133,    46,   106,   108,   116,
      51,    19,    47,   138,   104,    47,    47,    47,    46,   104,
     129,   108,   142,    47,    47,   142,   111,    44,   100,    46,
      45,   136,   142,    45,   167,     3,    54,   164,   142,    81,
     142,    47,    52,    49,    49,    47,   138,   141,    51,    19,
      51,   116,   141,   104,    47,   104,   103,    44,   122,     3,
     103,   103,   134,    46,    47,   138,    81,   104,   142,    49,
      53,   142,   142,    53,   142,   104,    47,    47,   116,   141,
     116,    51,    47,   104,    14,     8,    11,    45,   123,   124,
     125,    47,    45,    47,   104,    47,   142,   142,   142,   104,
      51,    51,    47,    47,   116,   103,   103,   141,    81,    45,
     124,   104,   104,   104,   116,   103,   103,    47,    81,   101,
      47,   103,   101,   103
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
#line 216 "src/parser.y"
    { 
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str)); 
        free((yyvsp[(1) - (1)].str)); 
    ;}
    break;

  case 67:
#line 220 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 68:
#line 221 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 69:
#line 225 "src/parser.y"
    {
        /* 变量声明不带初始化: var a; */
        (yyval.node) = create_node(NODE_VAR_DECL, NULL);
        (yyval.node)->left = (yyvsp[(1) - (1)].node); 
    ;}
    break;

  case 70:
#line 230 "src/parser.y"
    {
        /* 变量声明带初始化: var a = 1; var [a] = [1]; */
        (yyval.node) = create_node(NODE_VAR_DECL, NULL);
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 71:
#line 240 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 72:
#line 241 "src/parser.y"
    {
         if (check_asi()) { (yyval.node) = (yyvsp[(2) - (2)].node); yyerrok; } else { yyerror("Missing semicolon in let"); YYABORT; }
    ;}
    break;

  case 73:
#line 244 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 74:
#line 245 "src/parser.y"
    {
         if (check_asi()) { (yyval.node) = (yyvsp[(2) - (2)].node); yyerrok; } else { yyerror("Missing semicolon in const"); YYABORT; }
    ;}
    break;

  case 75:
#line 251 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 76:
#line 252 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 77:
#line 262 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LET_DECL, NULL);
        (yyval.node)->left = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 78:
#line 266 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LET_DECL, NULL);
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 79:
#line 274 "src/parser.y"
    { (yyval.node) = create_node(NODE_EMPTY_STMT, NULL); ;}
    break;

  case 80:
#line 278 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 81:
#line 282 "src/parser.y"
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

  case 82:
#line 295 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IF_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 83:
#line 300 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IF_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (7)].node);
        (yyval.node)->right = (yyvsp[(5) - (7)].node);
        (yyval.node)->extra = (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 84:
#line 309 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_WHILE_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 85:
#line 314 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_WHILE_STMT, "do-while");
        (yyval.node)->left = (yyvsp[(5) - (7)].node);
        (yyval.node)->right = (yyvsp[(2) - (7)].node);
    ;}
    break;

  case 86:
#line 319 "src/parser.y"
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

  case 87:
#line 330 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (9)].node);
        (yyval.node)->right = (yyvsp[(5) - (9)].node);
        (yyval.node)->extra = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node));
    ;}
    break;

  case 88:
#line 336 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(4) - (10)].node);
        (yyval.node)->right = (yyvsp[(6) - (10)].node);
        (yyval.node)->extra = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(8) - (10)].node), (yyvsp[(10) - (10)].node));
    ;}
    break;

  case 89:
#line 342 "src/parser.y"
    {
         /* Simplified ES6 for structure */
         (yyval.node) = create_node(NODE_FOR_STMT, "for-let");
         (yyval.node)->left = (yyvsp[(3) - (8)].node);
    ;}
    break;

  case 90:
#line 347 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, "for-in");
        (yyval.node)->left = (yyvsp[(3) - (7)].node);
        (yyval.node)->right = (yyvsp[(5) - (7)].node);
        (yyval.node)->extra = (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 91:
#line 353 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, "for-in-var");
        (yyval.node)->left = (yyvsp[(4) - (8)].node);
        (yyval.node)->right = (yyvsp[(6) - (8)].node);
        (yyval.node)->extra = (yyvsp[(8) - (8)].node);
    ;}
    break;

  case 92:
#line 362 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 93:
#line 363 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 94:
#line 367 "src/parser.y"
    { (yyval.node) = create_node(NODE_EXPR_STMT, "continue"); ;}
    break;

  case 95:
#line 368 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "continue");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(2) - (3)].str));
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 96:
#line 373 "src/parser.y"
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

  case 97:
#line 385 "src/parser.y"
    { (yyval.node) = create_node(NODE_EXPR_STMT, "break"); ;}
    break;

  case 98:
#line 386 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "break");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(2) - (3)].str));
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 99:
#line 391 "src/parser.y"
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

  case 100:
#line 403 "src/parser.y"
    { (yyval.node) = create_node(NODE_RETURN_STMT, NULL); ;}
    break;

  case 101:
#line 404 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_RETURN_STMT, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 102:
#line 408 "src/parser.y"
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

  case 103:
#line 422 "src/parser.y"
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

  case 104:
#line 438 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "with");
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 105:
#line 446 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "switch");
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 106:
#line 454 "src/parser.y"
    { (yyval.node) = create_node(NODE_BLOCK_STMT, NULL); ;}
    break;

  case 107:
#line 455 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 108:
#line 459 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 109:
#line 460 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 110:
#line 469 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "case");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 111:
#line 473 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "case");
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
        (yyval.node)->right = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 112:
#line 478 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 113:
#line 482 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "default");
    ;}
    break;

  case 114:
#line 485 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "default");
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 115:
#line 492 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "throw");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 116:
#line 496 "src/parser.y"
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

  case 117:
#line 509 "src/parser.y"
    { 
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 118:
#line 514 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 119:
#line 519 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
        (yyval.node)->extra = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 120:
#line 528 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "catch");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (5)].str));
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 121:
#line 537 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "finally");
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 122:
#line 544 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (5)].str));
        (yyval.node)->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(2) - (5)].str));
    ;}
    break;

  case 123:
#line 549 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (6)].str));
        (yyval.node)->left = (yyvsp[(4) - (6)].node);
        (yyval.node)->right = (yyvsp[(6) - (6)].node);
        free((yyvsp[(2) - (6)].str));
    ;}
    break;

  case 124:
#line 559 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CLASS_DECL, (yyvsp[(2) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 125:
#line 567 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CLASS_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 126:
#line 571 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CLASS_EXPR, (yyvsp[(2) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 127:
#line 579 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 128:
#line 582 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(4) - (5)].node);
        (yyval.node)->extra = (yyvsp[(2) - (5)].node); /* Store extended class in extra */
    ;}
    break;

  case 129:
#line 589 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 130:
#line 590 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 131:
#line 594 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 132:
#line 595 "src/parser.y"
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

  case 133:
#line 608 "src/parser.y"
    {
        /* Method Definition */
        (yyval.node) = create_node(NODE_METHOD_DEF, NULL);
        (yyval.node)->left = (yyvsp[(1) - (5)].node); /* Name */
        (yyval.node)->right = (yyvsp[(5) - (5)].node); /* Body */
        /* Params implicitly in $5 context or we need structure. Simplified here */
    ;}
    break;

  case 134:
#line 615 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_METHOD_DEF, NULL);
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 135:
#line 620 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_METHOD_DEF, "static");
        (yyval.node)->left = (yyvsp[(2) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 136:
#line 625 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 137:
#line 629 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, NULL);
        (yyval.node)->left = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 138:
#line 633 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 139:
#line 638 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (5)].str));
        (yyval.node)->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(2) - (5)].str));
    ;}
    break;

  case 140:
#line 643 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (6)].str));
        (yyval.node)->left = (yyvsp[(4) - (6)].node);
        (yyval.node)->right = (yyvsp[(6) - (6)].node);
        free((yyvsp[(2) - (6)].str));
    ;}
    break;

  case 141:
#line 652 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 142:
#line 656 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (3)].str));
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 143:
#line 667 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (3)].str));
         (yyval.node)->right = (yyvsp[(3) - (3)].node);
         free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 144:
#line 673 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (3)].str));
         (yyval.node)->right = (yyvsp[(3) - (3)].node);
         free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 145:
#line 679 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = (yyvsp[(2) - (5)].node);
         (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 146:
#line 684 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = (yyvsp[(2) - (5)].node);
         (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 147:
#line 692 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 148:
#line 693 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 149:
#line 697 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 150:
#line 698 "src/parser.y"
    {
        (yyval.node) = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 151:
#line 704 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 152:
#line 705 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 153:
#line 706 "src/parser.y"
    {
        (yyval.node) = create_binary_node(NODE_ASSIGNMENT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 154:
#line 709 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "+=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 155:
#line 714 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "-=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 156:
#line 719 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "*=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 157:
#line 724 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "/=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 158:
#line 729 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "%=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 159:
#line 734 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "<<=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 160:
#line 739 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, ">>=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 161:
#line 744 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, ">>>=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 162:
#line 749 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "&=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 163:
#line 754 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "|=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 164:
#line 759 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "^=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 165:
#line 767 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 166:
#line 768 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CONDITIONAL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (5)].node);
        (yyval.node)->right = (yyvsp[(3) - (5)].node);
        (yyval.node)->extra = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 167:
#line 777 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 168:
#line 778 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "||");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 169:
#line 786 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 170:
#line 787 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "&&");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 171:
#line 795 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 172:
#line 796 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "|");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 173:
#line 804 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 174:
#line 805 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "^");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 175:
#line 813 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 176:
#line 814 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "&");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 177:
#line 822 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 178:
#line 823 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "==");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 179:
#line 828 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "!=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 180:
#line 833 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "===");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 181:
#line 838 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "!==");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 182:
#line 846 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 183:
#line 847 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 184:
#line 852 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 185:
#line 857 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 186:
#line 862 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 187:
#line 867 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "instanceof");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 188:
#line 872 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "in");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 189:
#line 880 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 190:
#line 881 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<<");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 191:
#line 886 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">>");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 192:
#line 891 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">>>");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 193:
#line 899 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 194:
#line 900 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "+");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 195:
#line 905 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "-");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 196:
#line 913 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 197:
#line 914 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "*");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 198:
#line 919 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "/");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 199:
#line 924 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "%");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 200:
#line 932 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 201:
#line 933 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("delete");
    ;}
    break;

  case 202:
#line 937 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("void");
    ;}
    break;

  case 203:
#line 941 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("typeof");
    ;}
    break;

  case 204:
#line 945 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("++pre");
    ;}
    break;

  case 205:
#line 949 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("--pre");
    ;}
    break;

  case 206:
#line 953 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("+");
    ;}
    break;

  case 207:
#line 957 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("-");
    ;}
    break;

  case 208:
#line 961 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("~");
    ;}
    break;

  case 209:
#line 965 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("!");
    ;}
    break;

  case 210:
#line 972 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 211:
#line 973 "src/parser.y"
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

  case 212:
#line 982 "src/parser.y"
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

  case 213:
#line 994 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 214:
#line 995 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 215:
#line 999 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 216:
#line 1000 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_NEW_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 217:
#line 1007 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CALL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
        (yyval.node)->right = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 218:
#line 1012 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CALL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
        (yyval.node)->right = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 219:
#line 1017 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, "[]");
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 220:
#line 1023 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, ".");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 221:
#line 1031 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 222:
#line 1032 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 223:
#line 1033 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 224:
#line 1034 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, "[]");
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 225:
#line 1040 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, ".");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 226:
#line 1045 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_NEW_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 227:
#line 1053 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_THIS_EXPR, NULL);
    ;}
    break;

  case 228:
#line 1056 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 229:
#line 1060 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 230:
#line 1061 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 231:
#line 1062 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 232:
#line 1063 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 233:
#line 1067 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "null"); ;}
    break;

  case 234:
#line 1068 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "true"); ;}
    break;

  case 235:
#line 1069 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "false"); ;}
    break;

  case 236:
#line 1070 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 237:
#line 1074 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 238:
#line 1078 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 239:
#line 1085 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 240:
#line 1089 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 241:
#line 1093 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (5)].node);
        (yyval.node)->right = (yyvsp[(4) - (5)].node);
    ;}
    break;

  case 242:
#line 1101 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(2) - (2)].node);
        if ((yyvsp[(1) - (2)].node)) (yyval.node)->next = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 243:
#line 1105 "src/parser.y"
    { /* [ ...spread ] */
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(3) - (3)].node));
        (yyval.node)->value = strdup("...");
        if ((yyvsp[(1) - (3)].node)) (yyval.node)->next = (yyvsp[(1) - (3)].node);
    ;}
    break;

  case 244:
#line 1110 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (4)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(4) - (4)].node);
        if ((yyvsp[(3) - (4)].node)) (yyvsp[(4) - (4)].node)->next = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 245:
#line 1117 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        ASTNode *spread = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(5) - (5)].node));
        spread->value = strdup("...");
        temp->next = spread;
        if ((yyvsp[(3) - (5)].node)) spread->next = (yyvsp[(3) - (5)].node);
    ;}
    break;

  case 246:
#line 1129 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 247:
#line 1130 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 248:
#line 1134 "src/parser.y"
    { (yyval.node) = create_node(NODE_EMPTY_STMT, NULL); ;}
    break;

  case 249:
#line 1135 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_EMPTY_STMT, NULL);
    ;}
    break;

  case 250:
#line 1144 "src/parser.y"
    { (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL); ;}
    break;

  case 251:
#line 1145 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 252:
#line 1149 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
    ;}
    break;

  case 253:
#line 1156 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 254:
#line 1157 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 255:
#line 1158 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 256:
#line 1162 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_PROPERTY, NULL);
        (yyval.node)->left = (yyvsp[(1) - (3)].node); /* Key */
        (yyval.node)->right = (yyvsp[(3) - (3)].node); /* Value */
    ;}
    break;

  case 257:
#line 1167 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, NULL);
        temp->next->left = (yyvsp[(3) - (5)].node);
        temp->next->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 258:
#line 1178 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 259:
#line 1179 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 260:
#line 1183 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 261:
#line 1184 "src/parser.y"
    { /* call(...arg) */
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("...");
    ;}
    break;

  case 262:
#line 1188 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 263:
#line 1194 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (4)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        ASTNode *spread = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(4) - (4)].node));
        spread->value = strdup("...");
        temp->next = spread;
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4203 "build/parser.c"
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


#line 1204 "src/parser.y"


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
