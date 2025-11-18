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
     TRUE = 289,
     FALSE = 290,
     NULL_LITERAL = 291,
     LBRACE = 292,
     RBRACE = 293,
     LPAREN = 294,
     RPAREN = 295,
     LBRACKET = 296,
     RBRACKET = 297,
     DOT = 298,
     SEMICOLON = 299,
     COMMA = 300,
     ELLIPSIS = 301,
     ARROW = 302,
     LT = 303,
     GT = 304,
     LE = 305,
     GE = 306,
     EQ = 307,
     NE = 308,
     STRICT_EQ = 309,
     STRICT_NE = 310,
     PLUS = 311,
     MINUS = 312,
     MULTIPLY = 313,
     DIVIDE = 314,
     MOD = 315,
     INCR = 316,
     DECR = 317,
     LSHIFT = 318,
     RSHIFT = 319,
     URSHIFT = 320,
     BITWISE_AND = 321,
     BITWISE_OR = 322,
     BITWISE_XOR = 323,
     BITWISE_NOT = 324,
     NOT = 325,
     LOGICAL_AND = 326,
     LOGICAL_OR = 327,
     QUESTION = 328,
     COLON = 329,
     ASSIGN = 330,
     PLUS_ASSIGN = 331,
     MINUS_ASSIGN = 332,
     MULTIPLY_ASSIGN = 333,
     DIVIDE_ASSIGN = 334,
     MOD_ASSIGN = 335,
     LSHIFT_ASSIGN = 336,
     RSHIFT_ASSIGN = 337,
     URSHIFT_ASSIGN = 338,
     AND_ASSIGN = 339,
     OR_ASSIGN = 340,
     XOR_ASSIGN = 341,
     END = 342,
     LOWER_THAN_ELSE = 343,
     UNARY_MINUS = 344,
     UNARY_PLUS = 345
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
#define TRUE 289
#define FALSE 290
#define NULL_LITERAL 291
#define LBRACE 292
#define RBRACE 293
#define LPAREN 294
#define RPAREN 295
#define LBRACKET 296
#define RBRACKET 297
#define DOT 298
#define SEMICOLON 299
#define COMMA 300
#define ELLIPSIS 301
#define ARROW 302
#define LT 303
#define GT 304
#define LE 305
#define GE 306
#define EQ 307
#define NE 308
#define STRICT_EQ 309
#define STRICT_NE 310
#define PLUS 311
#define MINUS 312
#define MULTIPLY 313
#define DIVIDE 314
#define MOD 315
#define INCR 316
#define DECR 317
#define LSHIFT 318
#define RSHIFT 319
#define URSHIFT 320
#define BITWISE_AND 321
#define BITWISE_OR 322
#define BITWISE_XOR 323
#define BITWISE_NOT 324
#define NOT 325
#define LOGICAL_AND 326
#define LOGICAL_OR 327
#define QUESTION 328
#define COLON 329
#define ASSIGN 330
#define PLUS_ASSIGN 331
#define MINUS_ASSIGN 332
#define MULTIPLY_ASSIGN 333
#define DIVIDE_ASSIGN 334
#define MOD_ASSIGN 335
#define LSHIFT_ASSIGN 336
#define RSHIFT_ASSIGN 337
#define URSHIFT_ASSIGN 338
#define AND_ASSIGN 339
#define OR_ASSIGN 340
#define XOR_ASSIGN 341
#define END 342
#define LOWER_THAN_ELSE 343
#define UNARY_MINUS 344
#define UNARY_PLUS 345




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
#line 307 "build/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 320 "build/parser.c"

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
#define YYFINAL  137
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  205
/* YYNRULES -- Number of states.  */
#define YYNSTATES  388

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

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
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    46,    50,    54,    57,    59,    63,    65,
      69,    73,    76,    80,    83,    85,    89,    91,    95,    97,
     100,   102,   108,   116,   122,   130,   137,   147,   158,   167,
     175,   184,   185,   187,   190,   194,   196,   199,   203,   205,
     208,   212,   214,   217,   223,   229,   232,   236,   238,   241,
     245,   250,   252,   255,   259,   263,   266,   270,   274,   279,
     285,   288,   294,   301,   306,   312,   318,   325,   327,   331,
     335,   339,   345,   351,   352,   354,   356,   360,   362,   364,
     368,   372,   376,   380,   384,   388,   392,   396,   400,   404,
     408,   412,   414,   420,   422,   426,   428,   432,   434,   438,
     440,   444,   446,   450,   452,   456,   460,   464,   468,   470,
     474,   478,   482,   486,   490,   494,   496,   500,   504,   508,
     510,   514,   518,   520,   524,   528,   532,   534,   537,   540,
     543,   546,   549,   552,   555,   558,   561,   563,   566,   569,
     571,   573,   575,   578,   581,   584,   589,   593,   595,   597,
     602,   606,   610,   612,   614,   616,   618,   620,   624,   626,
     628,   630,   632,   634,   636,   640,   644,   650,   653,   658,
     659,   661,   663,   666,   669,   673,   678,   682,   686,   690,
     696,   702,   708,   711,   715,   717
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    93,    -1,    -1,    94,    -1,    93,    94,
      -1,    95,    -1,   121,    -1,    96,    -1,    97,    -1,   100,
      -1,   103,    -1,   104,    -1,   105,    -1,   106,    -1,   108,
      -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,   117,
      -1,   118,    -1,    37,    38,    -1,    37,    93,    38,    -1,
      28,    98,    44,    -1,    28,    98,    -1,    99,    -1,    98,
      45,    99,    -1,     3,    -1,     3,    75,   127,    -1,    33,
     101,    44,    -1,    33,   101,    -1,    32,   101,    44,    -1,
      32,   101,    -1,   102,    -1,   101,    45,   102,    -1,     3,
      -1,     3,    75,   127,    -1,    44,    -1,   126,    44,    -1,
     126,    -1,    18,    39,   126,    40,    95,    -1,    18,    39,
     126,    40,    95,    14,    95,    -1,    30,    39,   126,    40,
      95,    -1,    13,    95,    30,    39,   126,    40,    44,    -1,
      13,    95,    30,    39,   126,    40,    -1,    16,    39,   107,
      44,   107,    44,   107,    40,    95,    -1,    16,    39,    28,
      98,    44,   107,    44,   107,    40,    95,    -1,    16,    39,
     100,   107,    44,   107,    40,    95,    -1,    16,    39,   141,
      19,   126,    40,    95,    -1,    16,    39,    28,    99,    19,
     126,    40,    95,    -1,    -1,   126,    -1,    10,    44,    -1,
      10,     3,    44,    -1,    10,    -1,     7,    44,    -1,     7,
       3,    44,    -1,     7,    -1,    22,    44,    -1,    22,   126,
      44,    -1,    22,    -1,    22,   126,    -1,    31,    39,   126,
      40,    95,    -1,    23,    39,   126,    40,   113,    -1,    37,
      38,    -1,    37,   114,    38,    -1,   115,    -1,   114,   115,
      -1,     8,   126,    74,    -1,     8,   126,    74,    93,    -1,
     116,    -1,    11,    74,    -1,    11,    74,    93,    -1,    25,
     126,    44,    -1,    25,   126,    -1,    26,    96,   119,    -1,
      26,    96,   120,    -1,    26,    96,   119,   120,    -1,     9,
      39,     3,    40,    96,    -1,    15,    96,    -1,    17,     3,
      39,    40,    96,    -1,    17,     3,    39,   123,    40,    96,
      -1,    17,    39,    40,    96,    -1,    17,    39,   123,    40,
      96,    -1,    17,     3,    39,    40,    96,    -1,    17,     3,
      39,   123,    40,    96,    -1,     3,    -1,   123,    45,     3,
      -1,     3,    47,    96,    -1,     3,    47,   127,    -1,    39,
     125,    40,    47,    96,    -1,    39,   125,    40,    47,   127,
      -1,    -1,   123,    -1,   127,    -1,   126,    45,   127,    -1,
     128,    -1,   124,    -1,   141,    75,   127,    -1,   141,    76,
     127,    -1,   141,    77,   127,    -1,   141,    78,   127,    -1,
     141,    79,   127,    -1,   141,    80,   127,    -1,   141,    81,
     127,    -1,   141,    82,   127,    -1,   141,    83,   127,    -1,
     141,    84,   127,    -1,   141,    85,   127,    -1,   141,    86,
     127,    -1,   129,    -1,   129,    73,   127,    74,   127,    -1,
     130,    -1,   129,    72,   130,    -1,   131,    -1,   130,    71,
     131,    -1,   132,    -1,   131,    67,   132,    -1,   133,    -1,
     132,    68,   133,    -1,   134,    -1,   133,    66,   134,    -1,
     135,    -1,   134,    52,   135,    -1,   134,    53,   135,    -1,
     134,    54,   135,    -1,   134,    55,   135,    -1,   136,    -1,
     135,    48,   136,    -1,   135,    49,   136,    -1,   135,    50,
     136,    -1,   135,    51,   136,    -1,   135,    20,   136,    -1,
     135,    19,   136,    -1,   137,    -1,   136,    63,   137,    -1,
     136,    64,   137,    -1,   136,    65,   137,    -1,   138,    -1,
     137,    56,   138,    -1,   137,    57,   138,    -1,   139,    -1,
     138,    58,   139,    -1,   138,    59,   139,    -1,   138,    60,
     139,    -1,   140,    -1,    12,   139,    -1,    29,   139,    -1,
      27,   139,    -1,    61,   139,    -1,    62,   139,    -1,    56,
     139,    -1,    57,   139,    -1,    69,   139,    -1,    70,   139,
      -1,   141,    -1,   141,    61,    -1,   141,    62,    -1,   142,
      -1,   143,    -1,   144,    -1,    21,   142,    -1,   144,   153,
      -1,   143,   153,    -1,   143,    41,   126,    42,    -1,   143,
      43,     3,    -1,   145,    -1,   122,    -1,   144,    41,   126,
      42,    -1,   144,    43,     3,    -1,    21,   144,   153,    -1,
      24,    -1,     3,    -1,   146,    -1,   147,    -1,   151,    -1,
      39,   126,    40,    -1,    36,    -1,    34,    -1,    35,    -1,
       4,    -1,     5,    -1,     6,    -1,    41,   149,    42,    -1,
      41,   148,    42,    -1,    41,   148,    45,   149,    42,    -1,
     149,   127,    -1,   148,    45,   149,   127,    -1,    -1,   150,
      -1,    45,    -1,   150,    45,    -1,    37,    38,    -1,    37,
     152,    38,    -1,    37,   152,    45,    38,    -1,     3,    74,
     127,    -1,     5,    74,   127,    -1,     4,    74,   127,    -1,
     152,    45,     3,    74,   127,    -1,   152,    45,     5,    74,
     127,    -1,   152,    45,     4,    74,   127,    -1,    39,    40,
      -1,    39,   154,    40,    -1,   127,    -1,   154,    45,   127,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    98,   102,   103,   116,   117,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   138,   139,   147,   148,   160,   161,   170,   174,
     183,   184,   187,   188,   194,   195,   204,   208,   216,   220,
     224,   237,   242,   251,   256,   261,   272,   278,   284,   289,
     295,   304,   305,   309,   310,   315,   327,   328,   333,   345,
     346,   350,   364,   380,   388,   396,   397,   401,   402,   411,
     415,   420,   424,   427,   434,   438,   451,   456,   461,   470,
     479,   486,   491,   500,   504,   509,   514,   523,   527,   538,
     544,   550,   555,   563,   564,   568,   569,   575,   576,   577,
     580,   585,   590,   595,   600,   605,   610,   615,   620,   625,
     630,   638,   639,   648,   649,   657,   658,   666,   667,   675,
     676,   684,   685,   693,   694,   699,   704,   709,   717,   718,
     723,   728,   733,   738,   743,   751,   752,   757,   762,   770,
     771,   776,   784,   785,   790,   795,   803,   804,   808,   812,
     816,   820,   824,   828,   832,   836,   843,   844,   853,   865,
     866,   870,   871,   878,   883,   888,   893,   902,   903,   904,
     909,   915,   923,   926,   930,   931,   932,   933,   937,   938,
     939,   940,   944,   948,   955,   959,   963,   971,   977,   989,
     990,   994,   995,  1004,  1005,  1009,  1016,  1021,  1026,  1031,
    1039,  1047,  1058,  1059,  1063,  1064
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
  "WHILE", "WITH", "CONST", "LET", "TRUE", "FALSE", "NULL_LITERAL",
  "LBRACE", "RBRACE", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "DOT",
  "SEMICOLON", "COMMA", "ELLIPSIS", "ARROW", "LT", "GT", "LE", "GE", "EQ",
  "NE", "STRICT_EQ", "STRICT_NE", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "MOD", "INCR", "DECR", "LSHIFT", "RSHIFT", "URSHIFT", "BITWISE_AND",
  "BITWISE_OR", "BITWISE_XOR", "BITWISE_NOT", "NOT", "LOGICAL_AND",
  "LOGICAL_OR", "QUESTION", "COLON", "ASSIGN", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN", "MOD_ASSIGN",
  "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "AND_ASSIGN",
  "OR_ASSIGN", "XOR_ASSIGN", "END", "LOWER_THAN_ELSE", "UNARY_MINUS",
  "UNARY_PLUS", "$accept", "Program", "SourceElements", "SourceElement",
  "Statement", "Block", "VariableStatement", "VariableDeclarationList",
  "VariableDeclaration", "LexicalDeclaration", "BindingList",
  "LexicalBinding", "EmptyStatement", "ExpressionStatement", "IfStatement",
  "IterationStatement", "ExpressionOpt", "ContinueStatement",
  "BreakStatement", "ReturnStatement", "WithStatement", "SwitchStatement",
  "CaseBlock", "CaseClauses", "CaseClause", "DefaultClause",
  "ThrowStatement", "TryStatement", "Catch", "Finally",
  "FunctionDeclaration", "FunctionExpression", "FormalParameterList",
  "ArrowFunction", "ArrowFormalParameters", "Expression",
  "AssignmentExpression", "ConditionalExpression", "LogicalORExpression",
  "LogicalANDExpression", "BitwiseORExpression", "BitwiseXORExpression",
  "BitwiseANDExpression", "EqualityExpression", "RelationalExpression",
  "ShiftExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PostfixExpression", "LeftHandSideExpression",
  "NewExpression", "CallExpression", "MemberExpression",
  "PrimaryExpression", "Literal", "ArrayLiteral", "ElementList",
  "ElisionOpt", "Elision", "ObjectLiteral", "PropertyNameAndValueList",
  "Arguments", "ArgumentList", 0
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
     345
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   100,   101,   101,   102,   102,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   107,   108,   108,   108,   109,   109,   109,   110,
     110,   110,   110,   111,   112,   113,   113,   114,   114,   115,
     115,   115,   116,   116,   117,   117,   118,   118,   118,   119,
     120,   121,   121,   122,   122,   122,   122,   123,   123,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   136,   136,   137,
     137,   137,   138,   138,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   141,
     141,   142,   142,   143,   143,   143,   143,   144,   144,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   146,   146,
     146,   146,   146,   146,   147,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   151,   151,   152,   152,   152,   152,
     152,   152,   153,   153,   154,   154
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     2,     1,     3,     1,     3,
       3,     2,     3,     2,     1,     3,     1,     3,     1,     2,
       1,     5,     7,     5,     7,     6,     9,    10,     8,     7,
       8,     0,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     5,     5,     2,     3,     1,     2,     3,
       4,     1,     2,     3,     3,     2,     3,     3,     4,     5,
       2,     5,     6,     4,     5,     5,     6,     1,     3,     3,
       3,     5,     5,     0,     1,     1,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     1,
       1,     1,     2,     2,     2,     4,     3,     1,     1,     4,
       3,     3,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     5,     2,     4,     0,
       1,     1,     2,     2,     3,     4,     3,     3,     3,     5,
       5,     5,     2,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   173,   181,   182,   183,    58,    55,     0,     0,     0,
       0,     0,     0,    61,     0,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,   180,   178,     0,    93,
     189,    38,     0,     0,     0,     0,     0,     0,     0,     2,
       4,     6,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     7,   168,    98,    40,
      95,    97,   111,   113,   115,   117,   119,   121,   123,   128,
     135,   139,   142,   146,   156,   159,   160,   161,   167,   174,
     175,   176,     0,     0,    56,     0,    53,   173,     0,     0,
       0,   147,   156,     0,    51,     0,     0,     0,   162,   161,
      59,    62,     0,    75,     0,     0,   149,    28,    25,    26,
     148,     0,     0,    36,    33,    34,    31,   173,   181,   182,
      22,     0,     0,   173,    94,     0,     0,   191,     0,     0,
     190,   152,   153,   150,   151,   154,   155,     1,     5,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,   158,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,     0,     0,   163,    89,    90,    57,    54,
       0,     0,     0,     0,   193,     0,     0,    51,     0,    52,
     156,     0,    87,     0,     0,     0,   171,    60,     0,    74,
      22,     0,     0,    76,    77,     0,    24,     0,     0,     0,
       0,    32,     0,    30,     0,     0,     0,    23,   194,     0,
       0,     0,   177,   185,   189,   184,   187,   192,    96,   114,
       0,   116,   118,   120,   122,   124,   125,   126,   127,   134,
     133,   129,   130,   131,   132,   136,   137,   138,   140,   141,
     143,   144,   145,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   202,   204,     0,     0,   166,
       0,   170,     0,     0,     0,    26,     0,    51,     0,     0,
       0,    83,     0,     0,     0,     0,    80,    78,    29,    27,
       0,     0,    37,    35,   196,   198,   197,     0,     0,     0,
     195,    88,     0,     0,     0,   203,     0,   165,   169,     0,
       0,     0,    51,     0,    51,     0,     0,    81,     0,    84,
      41,     0,    64,     0,    43,    63,     0,     0,     0,    91,
      92,   186,   188,   112,   205,    85,     0,    45,     0,     0,
       0,    51,     0,    82,     0,     0,     0,    65,     0,    67,
      71,     0,   199,   201,   200,    86,    44,    51,     0,     0,
       0,    49,    42,     0,    72,    66,    68,    79,     0,    50,
      48,     0,    69,    73,     0,    46,    70,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    38,   121,    40,    41,    42,    43,   108,   109,    44,
     114,   115,    45,    46,    47,    48,   198,    49,    50,    51,
      52,    53,   332,   358,   359,   360,    54,    55,   213,   214,
      56,    57,   124,    58,   125,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,   128,   129,   130,
      81,   122,   182,   277
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -187
static const yytype_int16 yypact[] =
{
     570,   -31,  -187,  -187,  -187,     5,     6,   973,   631,    -9,
      12,     1,    18,   785,    27,  -187,  1020,    43,   973,    35,
     973,    37,    70,   115,   115,  -187,  -187,  -187,   190,  1067,
      90,  -187,   973,   973,   973,   973,   973,   973,   162,   570,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,   125,
    -187,  -187,   176,   109,   123,   130,   164,    51,    91,    32,
     205,   195,  -187,  -187,  1083,  -187,   194,   197,  -187,  -187,
    -187,  -187,  1114,   188,  -187,   206,  -187,  -187,    25,    64,
    1020,  -187,   208,   179,   738,   204,    16,  1020,  -187,   197,
    -187,   228,  1020,   235,   448,    74,  -187,   192,   238,  -187,
    -187,  1020,  1020,   202,   240,  -187,   247,   -14,   189,   212,
    1137,   509,   -25,    30,   229,   260,   -13,  -187,   118,   832,
     257,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    1020,   973,  1020,   973,   973,   973,   973,   973,   973,   973,
     973,   973,   973,   973,   973,   973,   973,   973,   973,   973,
     973,   973,   973,   973,   973,  -187,  -187,  1020,  1020,  1020,
    1020,  1020,  1020,  1020,  1020,  1020,  1020,  1020,  1020,   879,
    1020,   236,  -187,  1020,   300,  -187,  -187,  -187,  -187,  -187,
     266,   233,   189,   212,  -187,   270,    35,  1020,   269,   271,
      72,    22,  -187,    43,    39,    53,  -187,  -187,    92,  -187,
    -187,   275,    43,   309,  -187,  1020,  -187,    35,   119,   121,
    1020,  -187,   115,  -187,  1020,  1020,  1020,  -187,  -187,    69,
     312,   278,  -187,  -187,    90,  -187,  -187,  -187,  -187,   109,
     253,   123,   130,   164,    51,    91,    91,    91,    91,    32,
      32,    32,    32,    32,    32,   205,   205,   205,   195,   195,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,   139,   199,  -187,
     200,  -187,    23,  1020,   252,   307,   284,  1020,  1020,    43,
     142,  -187,    43,   631,   292,   327,  -187,  -187,  -187,  -187,
     631,   631,  -187,  -187,  -187,  -187,  -187,   258,   259,   262,
    -187,  -187,  1114,   926,  1020,  -187,  1020,  -187,  -187,    43,
     143,   146,  1020,  1020,  1020,   287,   159,   338,    43,  -187,
     320,    -1,  -187,   297,  -187,  -187,  1020,  1020,  1020,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,    43,   294,   296,   165,
     301,  1020,   631,   654,   631,  1020,   268,  -187,    50,  -187,
    -187,    43,  -187,  -187,  -187,  -187,  -187,  1020,   631,   631,
     304,  -187,  -187,   -33,   570,  -187,  -187,  -187,   305,  -187,
    -187,   631,   570,   570,   631,  -187,   570,  -187
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,     0,   -34,    -6,   -11,  -187,   151,  -131,   265,
     329,   129,  -187,  -187,  -187,  -187,  -186,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,    -2,  -187,  -187,  -187,  -187,   141,
    -187,  -187,   -93,  -187,  -187,   -12,   -48,  -187,  -187,   219,
     218,   220,   221,   222,    -4,   -39,    99,   138,    11,  -187,
     286,   353,  -187,   355,  -187,  -187,  -187,  -187,   135,  -187,
    -187,  -187,   -63,  -187
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -194
static const yytype_int16 yytable[] =
{
      39,   101,    93,   204,   103,   138,   105,   355,    83,    85,
     356,   286,   140,   228,   185,    95,    82,   126,    91,   202,
     229,    87,     2,     3,     4,   202,   202,   232,   190,   106,
      94,   110,   140,    82,   187,    88,   206,   357,   107,    12,
      97,   382,    15,   131,   132,   133,   134,   135,   136,    84,
      86,    96,    25,    26,    27,    89,   203,    90,   355,    30,
     224,   356,   289,   319,    96,   285,   102,   191,   192,   193,
     -87,   186,   307,   308,   309,   -87,   111,    82,   126,   292,
     104,   236,   199,   211,   230,   205,   299,   138,   375,   212,
     208,   288,   238,   293,   240,   157,   158,   159,   140,   218,
     219,   325,   194,   147,   148,   149,   150,   310,   290,   112,
     151,   152,   249,   250,   251,   252,   253,   254,   113,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   276,   294,   165,   166,   127,   348,   140,   350,   153,
     154,   155,   156,   245,   246,   247,   248,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   300,
     233,   301,   137,   234,   140,   370,   140,   298,   278,   139,
     140,   280,   302,   260,   261,   262,   304,   305,   306,   315,
     143,   378,   328,   346,   316,   199,   347,   230,   230,   320,
     144,   140,   291,   117,   118,   119,     4,     5,   145,   352,
       6,   296,     7,     8,   140,   368,     9,    10,    11,   195,
     140,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   120,    29,
     146,    30,   188,   179,    31,   180,   179,   181,   183,   279,
     184,   317,   318,   201,   140,   140,    32,    33,   141,   142,
     189,    34,    35,   162,   163,   164,   255,   256,   257,    36,
      37,   160,   161,   225,   340,   342,   343,   215,   344,   165,
     166,   321,   207,   140,   230,   199,   326,   220,   327,   209,
     140,   329,   216,   217,   221,   222,   226,   330,   362,   363,
     364,   223,   222,    92,   334,   335,   322,   217,   258,   259,
     231,   339,   237,   281,    92,   282,    92,   224,   345,   283,
     199,   349,   199,   287,   295,   311,   140,   353,    92,    92,
      92,    92,    92,    92,   212,   312,   323,   314,   324,   331,
     333,   351,   336,   337,   354,   365,   338,   361,   366,   199,
     367,   369,   374,   373,   381,   384,   371,   284,   372,   138,
     377,   303,   138,   116,   297,   199,   376,   -85,   -85,   197,
     239,   241,   379,   380,   242,    98,   243,    99,   244,   313,
       0,     0,     0,     0,   383,   385,     0,     0,   387,     0,
     200,   -85,   386,   -85,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -85,   -85,   -85,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,    92,     0,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,     1,     2,     3,     4,     5,     0,     0,     6,     0,
       7,     8,     0,     0,     9,    10,    11,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   210,    29,     0,    30,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    34,
      35,     0,     1,     2,     3,     4,     5,    36,    37,     6,
       0,     7,     8,     0,     0,     9,    10,    11,     0,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   227,    29,     0,
      30,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      34,    35,     0,     1,     2,     3,     4,     5,    36,    37,
       6,     0,     7,     8,     0,     0,     9,    10,    11,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
       0,    30,     0,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    34,    35,     0,     1,     2,     3,     4,     5,    36,
      37,     6,     0,     7,     8,     0,     0,     9,    88,    11,
       0,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,     0,    30,   -86,   -86,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    34,    35,     0,     0,     0,   -86,     0,   -86,
      36,    37,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,   -86,   -86,   -86,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,   -86,   -86,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     1,     2,     3,     4,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,    88,     0,     0,     0,    12,
       0,     0,    15,     0,     0,    18,   196,    20,     0,     0,
      23,    24,    25,    26,    27,    89,     0,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     0,     0,    32,    33,     0,     7,     0,    34,
      35,     0,    88,     0,     0,     0,    12,    36,    37,    15,
       0,     0,    18,     0,    20,     0,     0,     0,     0,    25,
      26,    27,    89,     0,    29,     0,    30,     0,     0,   100,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     0,
       0,    32,    33,     0,     7,     0,    34,    35,     0,    88,
       0,     0,     0,    12,    36,    37,    15,     0,     0,    18,
       0,    20,     0,     0,     0,     0,    25,    26,    27,    89,
       0,    29,     0,    30,   235,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     0,     0,    32,    33,
       0,     7,     0,    34,    35,     0,    88,     0,     0,     0,
      12,    36,    37,    15,     0,     0,    18,     0,    20,     0,
       0,     0,     0,    25,    26,    27,    89,     0,    29,   275,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     0,     0,    32,    33,     0,     7,     0,
      34,    35,     0,    88,     0,     0,     0,    12,    36,    37,
      15,     0,     0,    18,     0,    20,     0,     0,     0,     0,
      25,    26,    27,    89,     0,    29,     0,    30,   341,     0,
       0,     0,     0,     0,     0,     0,    87,     2,     3,     4,
       0,     0,    32,    33,     0,     7,     0,    34,    35,     0,
      88,     0,     0,     0,    12,    36,    37,    15,     0,     0,
      18,     0,    20,     0,     0,     0,     0,    25,    26,    27,
      89,     0,    90,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     0,     0,    32,
      33,     0,     7,     0,    34,    35,     0,    88,     0,     0,
       0,    12,    36,    37,    15,     0,     0,    18,     0,    20,
       0,     0,     0,     0,    25,    26,    27,    89,     0,    29,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
     123,     2,     3,     4,     0,     0,    32,    33,     0,     7,
       0,    34,    35,     0,    88,     0,     0,     0,    12,    36,
      37,    15,     0,     0,    18,     0,    20,     0,     0,     0,
       0,    25,    26,    27,    89,     0,    29,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       4,     0,     0,    32,    33,     0,     7,     0,    34,    35,
       0,    88,     0,     0,     0,    12,    36,    37,    15,     0,
       0,    18,     0,    20,   165,   166,     0,     0,    25,    26,
      27,    28,     0,    29,     0,    30,     0,  -193,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
      32,    33,     0,     0,     0,    34,    35,     0,     0,     0,
    -193,     0,     0,    36,    37,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,     0,     0,  -193,  -193,  -193,     0,     0,
    -193,  -193,  -193,  -193,  -193,  -193,     0,     0,  -193,  -193,
    -193,     0,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193
};

static const yytype_int16 yycheck[] =
{
       0,    13,     8,    96,    16,    39,    17,     8,     3,     3,
      11,   197,    45,    38,    77,     3,    47,    29,     7,     3,
      45,     3,     4,     5,     6,     3,     3,    40,     3,    18,
      39,    20,    45,    47,    82,    17,    99,    38,     3,    21,
      39,    74,    24,    32,    33,    34,    35,    36,    37,    44,
      44,    39,    34,    35,    36,    37,    40,    39,     8,    41,
      74,    11,    40,    40,    39,   196,    39,     3,     4,     5,
      40,    82,     3,     4,     5,    45,    39,    47,    90,    40,
      37,   129,    94,     9,    45,    97,   217,   121,    38,    15,
     102,    19,   140,    40,   142,    63,    64,    65,    45,   111,
     112,   287,    38,    52,    53,    54,    55,    38,   201,    39,
      19,    20,   151,   152,   153,   154,   155,   156,     3,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,    40,    61,    62,    45,   322,    45,   324,    48,
      49,    50,    51,   147,   148,   149,   150,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    40,
      42,    40,     0,    45,    45,   351,    45,   215,   180,    44,
      45,   183,   220,   162,   163,   164,   224,   225,   226,    40,
      71,   367,    40,    40,    45,   197,    40,    45,    45,   282,
      67,    45,   203,     3,     4,     5,     6,     7,    68,    40,
      10,   212,    12,    13,    45,    40,    16,    17,    18,    30,
      45,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      66,    41,    44,    39,    44,    41,    39,    43,    41,     3,
      43,    42,    42,    39,    45,    45,    56,    57,    72,    73,
      44,    61,    62,    58,    59,    60,   157,   158,   159,    69,
      70,    56,    57,    74,   312,   313,   314,    75,   316,    61,
      62,   283,    44,    45,    45,   287,   288,    75,   289,    44,
      45,   292,    44,    45,    44,    45,    74,   293,   336,   337,
     338,    44,    45,     7,   300,   301,    44,    45,   160,   161,
      40,   312,    45,     3,    18,    39,    20,    74,   319,    39,
     322,   323,   324,    44,    39,     3,    45,   328,    32,    33,
      34,    35,    36,    37,    15,    47,    19,    74,    44,    37,
       3,    44,    74,    74,    14,   346,    74,    40,    44,   351,
      44,    40,    74,   355,    40,    40,   352,   196,   354,   383,
     361,   222,   386,    24,   213,   367,   358,    19,    20,    94,
     141,   143,   368,   369,   144,    12,   145,    12,   146,   234,
      -1,    -1,    -1,    -1,   374,   381,    -1,    -1,   384,    -1,
      94,    43,   382,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    59,    60,    -1,
      -1,    63,    64,    65,    66,    67,    68,    -1,    -1,    71,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      62,    -1,     3,     4,     5,     6,     7,    69,    70,    10,
      -1,    12,    13,    -1,    -1,    16,    17,    18,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,
      61,    62,    -1,     3,     4,     5,     6,     7,    69,    70,
      10,    -1,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    61,    62,    -1,     3,     4,     5,     6,     7,    69,
      70,    10,    -1,    12,    13,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,    19,    20,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    43,    -1,    45,
      69,    70,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    59,    60,    -1,    -1,    63,    64,    65,
      66,    67,    68,    -1,    -1,    71,    72,    73,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    -1,    -1,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    56,    57,    -1,    12,    -1,    61,
      62,    -1,    17,    -1,    -1,    -1,    21,    69,    70,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    56,    57,    -1,    12,    -1,    61,    62,    -1,    17,
      -1,    -1,    -1,    21,    69,    70,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    56,    57,
      -1,    12,    -1,    61,    62,    -1,    17,    -1,    -1,    -1,
      21,    69,    70,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    56,    57,    -1,    12,    -1,
      61,    62,    -1,    17,    -1,    -1,    -1,    21,    69,    70,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    56,    57,    -1,    12,    -1,    61,    62,    -1,
      17,    -1,    -1,    -1,    21,    69,    70,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    56,
      57,    -1,    12,    -1,    61,    62,    -1,    17,    -1,    -1,
      -1,    21,    69,    70,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    56,    57,    -1,    12,
      -1,    61,    62,    -1,    17,    -1,    -1,    -1,    21,    69,
      70,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    56,    57,    -1,    12,    -1,    61,    62,
      -1,    17,    -1,    -1,    -1,    21,    69,    70,    24,    -1,
      -1,    27,    -1,    29,    61,    62,    -1,    -1,    34,    35,
      36,    37,    -1,    39,    -1,    41,    -1,    20,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      56,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      43,    -1,    -1,    69,    70,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    59,    60,    -1,    -1,
      63,    64,    65,    66,    67,    68,    -1,    -1,    71,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    12,    13,    16,
      17,    18,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    39,
      41,    44,    56,    57,    61,    62,    69,    70,    92,    93,
      94,    95,    96,    97,   100,   103,   104,   105,   106,   108,
     109,   110,   111,   112,   117,   118,   121,   122,   124,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   151,    47,     3,    44,     3,    44,     3,    17,    37,
      39,   139,   141,    95,    39,     3,    39,    39,   142,   144,
      44,   126,    39,   126,    37,    96,   139,     3,    98,    99,
     139,    39,    39,     3,   101,   102,   101,     3,     4,     5,
      38,    93,   152,     3,   123,   125,   126,    45,   148,   149,
     150,   139,   139,   139,   139,   139,   139,     0,    94,    44,
      45,    72,    73,    71,    67,    68,    66,    52,    53,    54,
      55,    19,    20,    48,    49,    50,    51,    63,    64,    65,
      56,    57,    58,    59,    60,    61,    62,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    39,
      41,    43,   153,    41,    43,   153,    96,   127,    44,    44,
       3,     3,     4,     5,    38,    30,    28,   100,   107,   126,
     141,    39,     3,    40,   123,   126,   153,    44,   126,    44,
      38,     9,    15,   119,   120,    75,    44,    45,   126,   126,
      75,    44,    45,    44,    74,    74,    74,    38,    38,    45,
      45,    40,    40,    42,    45,    42,   127,    45,   127,   130,
     127,   131,   132,   133,   134,   135,   135,   135,   135,   136,
     136,   136,   136,   136,   136,   137,   137,   137,   138,   138,
     139,   139,   139,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,    40,   127,   154,   126,     3,
     126,     3,    39,    39,    98,    99,   107,    44,    19,    40,
     123,    96,    40,    40,    40,    39,    96,   120,   127,    99,
      40,    40,   127,   102,   127,   127,   127,     3,     4,     5,
      38,     3,    47,   149,    74,    40,    45,    42,    42,    40,
     123,   126,    44,    19,    44,   107,   126,    96,    40,    96,
      95,    37,   113,     3,    95,    95,    74,    74,    74,    96,
     127,    42,   127,   127,   127,    96,    40,    40,   107,   126,
     107,    44,    40,    96,    14,     8,    11,    38,   114,   115,
     116,    40,   127,   127,   127,    96,    44,    44,    40,    40,
     107,    95,    95,   126,    74,    38,   115,    96,   107,    95,
      95,    40,    74,    93,    40,    95,    93,    95
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
#line 97 "src/parser.y"
    { root = (yyvsp[(1) - (1)].node); YYACCEPT; ;}
    break;

  case 3:
#line 98 "src/parser.y"
    { root = create_node(NODE_PROGRAM, NULL); YYACCEPT; ;}
    break;

  case 4:
#line 102 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 5:
#line 103 "src/parser.y"
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

  case 6:
#line 116 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 7:
#line 117 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 121 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 122 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 123 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 124 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 125 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 13:
#line 126 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:
#line 127 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:
#line 128 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 16:
#line 129 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 130 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 131 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 132 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 133 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 21:
#line 134 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 22:
#line 138 "src/parser.y"
    { (yyval.node) = create_node(NODE_BLOCK_STMT, NULL); ;}
    break;

  case 23:
#line 139 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BLOCK_STMT, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 24:
#line 147 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 25:
#line 148 "src/parser.y"
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

  case 26:
#line 160 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 27:
#line 161 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 28:
#line 170 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_VAR_DECL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 29:
#line 174 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_VAR_DECL, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 30:
#line 183 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 31:
#line 184 "src/parser.y"
    {
         if (check_asi()) { (yyval.node) = (yyvsp[(2) - (2)].node); yyerrok; } else { yyerror("Missing semicolon in let"); YYABORT; }
    ;}
    break;

  case 32:
#line 187 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 33:
#line 188 "src/parser.y"
    {
         if (check_asi()) { (yyval.node) = (yyvsp[(2) - (2)].node); yyerrok; } else { yyerror("Missing semicolon in const"); YYABORT; }
    ;}
    break;

  case 34:
#line 194 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 35:
#line 195 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 36:
#line 204 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LET_DECL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 37:
#line 208 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LET_DECL, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 38:
#line 216 "src/parser.y"
    { (yyval.node) = create_node(NODE_EMPTY_STMT, NULL); ;}
    break;

  case 39:
#line 220 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 40:
#line 224 "src/parser.y"
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

  case 41:
#line 237 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IF_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 42:
#line 242 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IF_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (7)].node);
        (yyval.node)->right = (yyvsp[(5) - (7)].node);
        (yyval.node)->extra = (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 43:
#line 251 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_WHILE_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 44:
#line 256 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_WHILE_STMT, "do-while");
        (yyval.node)->left = (yyvsp[(5) - (7)].node);
        (yyval.node)->right = (yyvsp[(2) - (7)].node);
    ;}
    break;

  case 45:
#line 261 "src/parser.y"
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

  case 46:
#line 272 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (9)].node);
        (yyval.node)->right = (yyvsp[(5) - (9)].node);
        (yyval.node)->extra = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node));
    ;}
    break;

  case 47:
#line 278 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(4) - (10)].node);
        (yyval.node)->right = (yyvsp[(6) - (10)].node);
        (yyval.node)->extra = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(8) - (10)].node), (yyvsp[(10) - (10)].node));
    ;}
    break;

  case 48:
#line 284 "src/parser.y"
    {
         /* Simplified ES6 for structure */
         (yyval.node) = create_node(NODE_FOR_STMT, "for-let");
         (yyval.node)->left = (yyvsp[(3) - (8)].node);
    ;}
    break;

  case 49:
#line 289 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, "for-in");
        (yyval.node)->left = (yyvsp[(3) - (7)].node);
        (yyval.node)->right = (yyvsp[(5) - (7)].node);
        (yyval.node)->extra = (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 50:
#line 295 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, "for-in-var");
        (yyval.node)->left = (yyvsp[(4) - (8)].node);
        (yyval.node)->right = (yyvsp[(6) - (8)].node);
        (yyval.node)->extra = (yyvsp[(8) - (8)].node);
    ;}
    break;

  case 51:
#line 304 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 52:
#line 305 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 53:
#line 309 "src/parser.y"
    { (yyval.node) = create_node(NODE_EXPR_STMT, "continue"); ;}
    break;

  case 54:
#line 310 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "continue");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(2) - (3)].str));
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 55:
#line 315 "src/parser.y"
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

  case 56:
#line 327 "src/parser.y"
    { (yyval.node) = create_node(NODE_EXPR_STMT, "break"); ;}
    break;

  case 57:
#line 328 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "break");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(2) - (3)].str));
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 58:
#line 333 "src/parser.y"
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

  case 59:
#line 345 "src/parser.y"
    { (yyval.node) = create_node(NODE_RETURN_STMT, NULL); ;}
    break;

  case 60:
#line 346 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_RETURN_STMT, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 61:
#line 350 "src/parser.y"
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

  case 62:
#line 364 "src/parser.y"
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

  case 63:
#line 380 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "with");
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 64:
#line 388 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "switch");
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 65:
#line 396 "src/parser.y"
    { (yyval.node) = create_node(NODE_BLOCK_STMT, NULL); ;}
    break;

  case 66:
#line 397 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 67:
#line 401 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 68:
#line 402 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 69:
#line 411 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "case");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 70:
#line 415 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "case");
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
        (yyval.node)->right = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 71:
#line 420 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 72:
#line 424 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "default");
    ;}
    break;

  case 73:
#line 427 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "default");
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 74:
#line 434 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "throw");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 75:
#line 438 "src/parser.y"
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

  case 76:
#line 451 "src/parser.y"
    { 
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 77:
#line 456 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 78:
#line 461 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
        (yyval.node)->extra = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 79:
#line 470 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "catch");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (5)].str));
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 80:
#line 479 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "finally");
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 81:
#line 486 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (5)].str));
        (yyval.node)->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(2) - (5)].str));
    ;}
    break;

  case 82:
#line 491 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (6)].str));
        (yyval.node)->left = (yyvsp[(4) - (6)].node);
        (yyval.node)->right = (yyvsp[(6) - (6)].node);
        free((yyvsp[(2) - (6)].str));
    ;}
    break;

  case 83:
#line 500 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, NULL);
        (yyval.node)->left = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 84:
#line 504 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 85:
#line 509 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (5)].str));
        (yyval.node)->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(2) - (5)].str));
    ;}
    break;

  case 86:
#line 514 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (6)].str));
        (yyval.node)->left = (yyvsp[(4) - (6)].node);
        (yyval.node)->right = (yyvsp[(6) - (6)].node);
        free((yyvsp[(2) - (6)].str));
    ;}
    break;

  case 87:
#line 523 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 88:
#line 527 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (3)].str));
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 89:
#line 538 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (3)].str));
         (yyval.node)->right = (yyvsp[(3) - (3)].node);
         free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 90:
#line 544 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (3)].str));
         (yyval.node)->right = (yyvsp[(3) - (3)].node);
         free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 91:
#line 550 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = (yyvsp[(2) - (5)].node);
         (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 92:
#line 555 "src/parser.y"
    {
         (yyval.node) = create_node(NODE_ARROW_FUNCTION, "=>");
         (yyval.node)->left = (yyvsp[(2) - (5)].node);
         (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 93:
#line 563 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 94:
#line 564 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 95:
#line 568 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 96:
#line 569 "src/parser.y"
    {
        (yyval.node) = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 97:
#line 575 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 98:
#line 576 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 99:
#line 577 "src/parser.y"
    {
        (yyval.node) = create_binary_node(NODE_ASSIGNMENT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 100:
#line 580 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "+=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 101:
#line 585 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "-=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 102:
#line 590 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "*=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 103:
#line 595 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "/=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 104:
#line 600 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "%=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 105:
#line 605 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "<<=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 106:
#line 610 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, ">>=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 107:
#line 615 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, ">>>=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 108:
#line 620 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "&=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 109:
#line 625 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "|=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 110:
#line 630 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "^=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 111:
#line 638 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 112:
#line 639 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CONDITIONAL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (5)].node);
        (yyval.node)->right = (yyvsp[(3) - (5)].node);
        (yyval.node)->extra = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 113:
#line 648 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 114:
#line 649 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "||");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 115:
#line 657 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 116:
#line 658 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "&&");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 117:
#line 666 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:
#line 667 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "|");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 119:
#line 675 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 120:
#line 676 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "^");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 121:
#line 684 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 122:
#line 685 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "&");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 123:
#line 693 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 124:
#line 694 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "==");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 125:
#line 699 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "!=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 126:
#line 704 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "===");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 127:
#line 709 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "!==");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 128:
#line 717 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 129:
#line 718 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 130:
#line 723 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 131:
#line 728 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 132:
#line 733 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 133:
#line 738 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "instanceof");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 134:
#line 743 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "in");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 135:
#line 751 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 136:
#line 752 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<<");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 137:
#line 757 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">>");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 138:
#line 762 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">>>");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 139:
#line 770 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 140:
#line 771 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "+");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 141:
#line 776 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "-");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 142:
#line 784 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 143:
#line 785 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "*");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 144:
#line 790 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "/");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 145:
#line 795 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "%");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 146:
#line 803 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 147:
#line 804 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("delete");
    ;}
    break;

  case 148:
#line 808 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("void");
    ;}
    break;

  case 149:
#line 812 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("typeof");
    ;}
    break;

  case 150:
#line 816 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("++pre");
    ;}
    break;

  case 151:
#line 820 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("--pre");
    ;}
    break;

  case 152:
#line 824 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("+");
    ;}
    break;

  case 153:
#line 828 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("-");
    ;}
    break;

  case 154:
#line 832 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("~");
    ;}
    break;

  case 155:
#line 836 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("!");
    ;}
    break;

  case 156:
#line 843 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 157:
#line 844 "src/parser.y"
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

  case 158:
#line 853 "src/parser.y"
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

  case 159:
#line 865 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 160:
#line 866 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 161:
#line 870 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 162:
#line 871 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_NEW_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 163:
#line 878 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CALL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
        (yyval.node)->right = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 164:
#line 883 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CALL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
        (yyval.node)->right = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 165:
#line 888 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, "[]");
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 166:
#line 893 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, ".");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (3)].str));
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 167:
#line 902 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 168:
#line 903 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 169:
#line 904 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, "[]");
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 170:
#line 909 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, ".");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (3)].str));
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 171:
#line 915 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_NEW_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 172:
#line 923 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_THIS_EXPR, NULL);
    ;}
    break;

  case 173:
#line 926 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 174:
#line 930 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 175:
#line 931 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 176:
#line 932 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 177:
#line 933 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 178:
#line 937 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "null"); ;}
    break;

  case 179:
#line 938 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "true"); ;}
    break;

  case 180:
#line 939 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "false"); ;}
    break;

  case 181:
#line 940 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 182:
#line 944 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 183:
#line 948 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 184:
#line 955 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 185:
#line 959 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 186:
#line 963 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (5)].node);
        (yyval.node)->right = (yyvsp[(4) - (5)].node);
    ;}
    break;

  case 187:
#line 971 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(2) - (2)].node);
        if ((yyvsp[(1) - (2)].node)) {
            (yyval.node)->next = (yyvsp[(1) - (2)].node);
        }
    ;}
    break;

  case 188:
#line 977 "src/parser.y"
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

  case 189:
#line 989 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 190:
#line 990 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 191:
#line 994 "src/parser.y"
    { (yyval.node) = create_node(NODE_EMPTY_STMT, NULL); ;}
    break;

  case 192:
#line 995 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_EMPTY_STMT, NULL);
    ;}
    break;

  case 193:
#line 1004 "src/parser.y"
    { (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL); ;}
    break;

  case 194:
#line 1005 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 195:
#line 1009 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
    ;}
    break;

  case 196:
#line 1016 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_PROPERTY, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 197:
#line 1021 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_PROPERTY, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 198:
#line 1026 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_PROPERTY, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 199:
#line 1031 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, (yyvsp[(3) - (5)].str));
        temp->next->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 200:
#line 1039 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, (yyvsp[(3) - (5)].str));
        temp->next->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 201:
#line 1047 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, (yyvsp[(3) - (5)].str));
        temp->next->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 202:
#line 1058 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 203:
#line 1059 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 204:
#line 1063 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 205:
#line 1064 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3670 "build/parser.c"
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


#line 1072 "src/parser.y"


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
