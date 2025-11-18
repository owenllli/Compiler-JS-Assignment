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
     TRUE = 287,
     FALSE = 288,
     NULL_LITERAL = 289,
     LBRACE = 290,
     RBRACE = 291,
     LPAREN = 292,
     RPAREN = 293,
     LBRACKET = 294,
     RBRACKET = 295,
     DOT = 296,
     SEMICOLON = 297,
     COMMA = 298,
     LT = 299,
     GT = 300,
     LE = 301,
     GE = 302,
     EQ = 303,
     NE = 304,
     STRICT_EQ = 305,
     STRICT_NE = 306,
     PLUS = 307,
     MINUS = 308,
     MULTIPLY = 309,
     DIVIDE = 310,
     MOD = 311,
     INCR = 312,
     DECR = 313,
     LSHIFT = 314,
     RSHIFT = 315,
     URSHIFT = 316,
     BITWISE_AND = 317,
     BITWISE_OR = 318,
     BITWISE_XOR = 319,
     BITWISE_NOT = 320,
     NOT = 321,
     LOGICAL_AND = 322,
     LOGICAL_OR = 323,
     QUESTION = 324,
     COLON = 325,
     ASSIGN = 326,
     PLUS_ASSIGN = 327,
     MINUS_ASSIGN = 328,
     MULTIPLY_ASSIGN = 329,
     DIVIDE_ASSIGN = 330,
     MOD_ASSIGN = 331,
     LSHIFT_ASSIGN = 332,
     RSHIFT_ASSIGN = 333,
     URSHIFT_ASSIGN = 334,
     AND_ASSIGN = 335,
     OR_ASSIGN = 336,
     XOR_ASSIGN = 337,
     END = 338,
     LOWER_THAN_ELSE = 339,
     UNARY_MINUS = 340,
     UNARY_PLUS = 341
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
#define TRUE 287
#define FALSE 288
#define NULL_LITERAL 289
#define LBRACE 290
#define RBRACE 291
#define LPAREN 292
#define RPAREN 293
#define LBRACKET 294
#define RBRACKET 295
#define DOT 296
#define SEMICOLON 297
#define COMMA 298
#define LT 299
#define GT 300
#define LE 301
#define GE 302
#define EQ 303
#define NE 304
#define STRICT_EQ 305
#define STRICT_NE 306
#define PLUS 307
#define MINUS 308
#define MULTIPLY 309
#define DIVIDE 310
#define MOD 311
#define INCR 312
#define DECR 313
#define LSHIFT 314
#define RSHIFT 315
#define URSHIFT 316
#define BITWISE_AND 317
#define BITWISE_OR 318
#define BITWISE_XOR 319
#define BITWISE_NOT 320
#define NOT 321
#define LOGICAL_AND 322
#define LOGICAL_OR 323
#define QUESTION 324
#define COLON 325
#define ASSIGN 326
#define PLUS_ASSIGN 327
#define MINUS_ASSIGN 328
#define MULTIPLY_ASSIGN 329
#define DIVIDE_ASSIGN 330
#define MOD_ASSIGN 331
#define LSHIFT_ASSIGN 332
#define RSHIFT_ASSIGN 333
#define URSHIFT_ASSIGN 334
#define AND_ASSIGN 335
#define OR_ASSIGN 336
#define XOR_ASSIGN 337
#define END 338
#define LOWER_THAN_ELSE 339
#define UNARY_MINUS 340
#define UNARY_PLUS 341




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
extern int lookahead_token; // 新增：从 lexer 获取下一个 token 类型

void yyerror(const char *s);
ASTNode *root = NULL;
extern int asi_triggered; // 声明这是一个在别处定义的外部变量

// ASI Helper: Check if semicolon should be inserted
int check_asi() {
    // ASI 触发条件:
    // 1. 前面有换行符
    // 2. 下一个 token 是 '}'
    // 3. 下一个 token 是文件结尾 (END)
    if (line_terminator_seen || lookahead_token == RBRACE || lookahead_token == END) {
        asi_triggered = 1; // 标记ASI被触发
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
#line 32 "src/parser.y"
{
    ASTNode *node;
    char *str;
}
/* Line 193 of yacc.c.  */
#line 304 "build/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 317 "build/parser.c"

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
#define YYFINAL  123
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1044

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNRULES -- Number of states.  */
#define YYNSTATES  356

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
      85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    44,    48,    52,    55,    57,    61,    63,    67,
      69,    72,    74,    80,    88,    94,   102,   109,   119,   130,
     138,   147,   148,   150,   153,   157,   159,   162,   166,   168,
     171,   175,   177,   180,   186,   192,   195,   199,   201,   204,
     208,   213,   215,   218,   222,   226,   229,   233,   237,   242,
     248,   251,   257,   264,   269,   275,   281,   288,   290,   294,
     296,   300,   302,   306,   310,   314,   318,   322,   326,   330,
     334,   338,   342,   346,   350,   352,   358,   360,   364,   366,
     370,   372,   376,   378,   382,   384,   388,   390,   394,   398,
     402,   406,   408,   412,   416,   420,   424,   428,   432,   434,
     438,   442,   446,   448,   452,   456,   458,   462,   466,   470,
     472,   475,   478,   481,   484,   487,   490,   493,   496,   499,
     501,   504,   507,   509,   511,   513,   516,   519,   522,   527,
     531,   533,   535,   540,   544,   548,   550,   552,   554,   556,
     558,   562,   564,   566,   568,   570,   572,   574,   578,   582,
     588,   591,   596,   597,   599,   601,   604,   607,   611,   616,
     620,   624,   628,   634,   640,   646,   649,   653,   655
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      88,     0,    -1,    89,    -1,    -1,    90,    -1,    89,    90,
      -1,    91,    -1,   114,    -1,    92,    -1,    93,    -1,    96,
      -1,    97,    -1,    98,    -1,    99,    -1,   101,    -1,   102,
      -1,   103,    -1,   104,    -1,   105,    -1,   110,    -1,   111,
      -1,    35,    36,    -1,    35,    89,    36,    -1,    28,    94,
      42,    -1,    28,    94,    -1,    95,    -1,    94,    43,    95,
      -1,     3,    -1,     3,    71,   118,    -1,    42,    -1,   117,
      42,    -1,   117,    -1,    18,    37,   117,    38,    91,    -1,
      18,    37,   117,    38,    91,    14,    91,    -1,    30,    37,
     117,    38,    91,    -1,    13,    91,    30,    37,   117,    38,
      42,    -1,    13,    91,    30,    37,   117,    38,    -1,    16,
      37,   100,    42,   100,    42,   100,    38,    91,    -1,    16,
      37,    28,    94,    42,   100,    42,   100,    38,    91,    -1,
      16,    37,   132,    19,   117,    38,    91,    -1,    16,    37,
      28,    95,    19,   117,    38,    91,    -1,    -1,   117,    -1,
      10,    42,    -1,    10,     3,    42,    -1,    10,    -1,     7,
      42,    -1,     7,     3,    42,    -1,     7,    -1,    22,    42,
      -1,    22,   117,    42,    -1,    22,    -1,    22,   117,    -1,
      31,    37,   117,    38,    91,    -1,    23,    37,   117,    38,
     106,    -1,    35,    36,    -1,    35,   107,    36,    -1,   108,
      -1,   107,   108,    -1,     8,   117,    70,    -1,     8,   117,
      70,    89,    -1,   109,    -1,    11,    70,    -1,    11,    70,
      89,    -1,    25,   117,    42,    -1,    25,   117,    -1,    26,
      92,   112,    -1,    26,    92,   113,    -1,    26,    92,   112,
     113,    -1,     9,    37,     3,    38,    92,    -1,    15,    92,
      -1,    17,     3,    37,    38,    92,    -1,    17,     3,    37,
     116,    38,    92,    -1,    17,    37,    38,    92,    -1,    17,
      37,   116,    38,    92,    -1,    17,     3,    37,    38,    92,
      -1,    17,     3,    37,   116,    38,    92,    -1,     3,    -1,
     116,    43,     3,    -1,   118,    -1,   117,    43,   118,    -1,
     119,    -1,   132,    71,   118,    -1,   132,    72,   118,    -1,
     132,    73,   118,    -1,   132,    74,   118,    -1,   132,    75,
     118,    -1,   132,    76,   118,    -1,   132,    77,   118,    -1,
     132,    78,   118,    -1,   132,    79,   118,    -1,   132,    80,
     118,    -1,   132,    81,   118,    -1,   132,    82,   118,    -1,
     120,    -1,   120,    69,   118,    70,   118,    -1,   121,    -1,
     120,    68,   121,    -1,   122,    -1,   121,    67,   122,    -1,
     123,    -1,   122,    63,   123,    -1,   124,    -1,   123,    64,
     124,    -1,   125,    -1,   124,    62,   125,    -1,   126,    -1,
     125,    48,   126,    -1,   125,    49,   126,    -1,   125,    50,
     126,    -1,   125,    51,   126,    -1,   127,    -1,   126,    44,
     127,    -1,   126,    45,   127,    -1,   126,    46,   127,    -1,
     126,    47,   127,    -1,   126,    20,   127,    -1,   126,    19,
     127,    -1,   128,    -1,   127,    59,   128,    -1,   127,    60,
     128,    -1,   127,    61,   128,    -1,   129,    -1,   128,    52,
     129,    -1,   128,    53,   129,    -1,   130,    -1,   129,    54,
     130,    -1,   129,    55,   130,    -1,   129,    56,   130,    -1,
     131,    -1,    12,   130,    -1,    29,   130,    -1,    27,   130,
      -1,    57,   130,    -1,    58,   130,    -1,    52,   130,    -1,
      53,   130,    -1,    65,   130,    -1,    66,   130,    -1,   132,
      -1,   132,    57,    -1,   132,    58,    -1,   133,    -1,   134,
      -1,   135,    -1,    21,   133,    -1,   135,   144,    -1,   134,
     144,    -1,   134,    39,   117,    40,    -1,   134,    41,     3,
      -1,   136,    -1,   115,    -1,   135,    39,   117,    40,    -1,
     135,    41,     3,    -1,    21,   135,   144,    -1,    24,    -1,
       3,    -1,   137,    -1,   138,    -1,   142,    -1,    37,   117,
      38,    -1,    34,    -1,    32,    -1,    33,    -1,     4,    -1,
       5,    -1,     6,    -1,    39,   140,    40,    -1,    39,   139,
      40,    -1,    39,   139,    43,   140,    40,    -1,   140,   118,
      -1,   139,    43,   140,   118,    -1,    -1,   141,    -1,    43,
      -1,   141,    43,    -1,    35,    36,    -1,    35,   143,    36,
      -1,    35,   143,    43,    36,    -1,     3,    70,   118,    -1,
       5,    70,   118,    -1,     4,    70,   118,    -1,   143,    43,
       3,    70,   118,    -1,   143,    43,     5,    70,   118,    -1,
     143,    43,     4,    70,   118,    -1,    37,    38,    -1,    37,
     145,    38,    -1,   118,    -1,   145,    43,   118,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   106,   107,   120,   121,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   141,   142,   149,   150,   162,   163,   172,   176,   184,
     188,   192,   205,   210,   219,   224,   229,   240,   246,   252,
     258,   267,   268,   272,   273,   278,   290,   291,   296,   308,
     309,   313,   327,   340,   348,   356,   357,   361,   362,   371,
     375,   380,   384,   387,   394,   398,   411,   416,   421,   430,
     439,   446,   451,   460,   464,   469,   474,   483,   487,   497,
     498,   504,   505,   508,   513,   518,   523,   528,   533,   538,
     543,   548,   553,   558,   566,   567,   576,   577,   585,   586,
     594,   595,   603,   604,   612,   613,   621,   622,   627,   632,
     637,   645,   646,   651,   656,   661,   666,   671,   679,   680,
     685,   690,   698,   699,   704,   712,   713,   718,   723,   731,
     732,   736,   740,   744,   748,   752,   756,   760,   764,   771,
     772,   781,   793,   794,   798,   799,   806,   811,   816,   821,
     830,   831,   832,   837,   843,   851,   854,   858,   859,   860,
     861,   865,   866,   867,   868,   872,   876,   883,   887,   891,
     899,   905,   917,   918,   922,   923,   932,   933,   937,   944,
     949,   954,   959,   967,   975,   986,   987,   991,   992
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
  "WHILE", "WITH", "TRUE", "FALSE", "NULL_LITERAL", "LBRACE", "RBRACE",
  "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "DOT", "SEMICOLON", "COMMA",
  "LT", "GT", "LE", "GE", "EQ", "NE", "STRICT_EQ", "STRICT_NE", "PLUS",
  "MINUS", "MULTIPLY", "DIVIDE", "MOD", "INCR", "DECR", "LSHIFT", "RSHIFT",
  "URSHIFT", "BITWISE_AND", "BITWISE_OR", "BITWISE_XOR", "BITWISE_NOT",
  "NOT", "LOGICAL_AND", "LOGICAL_OR", "QUESTION", "COLON", "ASSIGN",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN",
  "MOD_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "URSHIFT_ASSIGN",
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "END", "LOWER_THAN_ELSE",
  "UNARY_MINUS", "UNARY_PLUS", "$accept", "Program", "SourceElements",
  "SourceElement", "Statement", "Block", "VariableStatement",
  "VariableDeclarationList", "VariableDeclaration", "EmptyStatement",
  "ExpressionStatement", "IfStatement", "IterationStatement",
  "ExpressionOpt", "ContinueStatement", "BreakStatement",
  "ReturnStatement", "WithStatement", "SwitchStatement", "CaseBlock",
  "CaseClauses", "CaseClause", "DefaultClause", "ThrowStatement",
  "TryStatement", "Catch", "Finally", "FunctionDeclaration",
  "FunctionExpression", "FormalParameterList", "Expression",
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
     335,   336,   337,   338,   339,   340,   341
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    93,    93,    94,    94,    95,    95,    96,
      97,    97,    98,    98,    99,    99,    99,    99,    99,    99,
      99,   100,   100,   101,   101,   101,   102,   102,   102,   103,
     103,   103,   103,   104,   105,   106,   106,   107,   107,   108,
     108,   108,   109,   109,   110,   110,   111,   111,   111,   112,
     113,   114,   114,   115,   115,   115,   115,   116,   116,   117,
     117,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     125,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     127,   127,   128,   128,   128,   129,   129,   129,   129,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   136,   136,   136,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   138,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   142,   143,
     143,   143,   143,   143,   143,   144,   144,   145,   145
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     2,     1,     3,     1,     3,     1,
       2,     1,     5,     7,     5,     7,     6,     9,    10,     7,
       8,     0,     1,     2,     3,     1,     2,     3,     1,     2,
       3,     1,     2,     5,     5,     2,     3,     1,     2,     3,
       4,     1,     2,     3,     3,     2,     3,     3,     4,     5,
       2,     5,     6,     4,     5,     5,     6,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     1,     2,     2,     2,     4,     3,
       1,     1,     4,     3,     3,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     5,
       2,     4,     0,     1,     1,     2,     2,     3,     4,     3,
       3,     3,     5,     5,     5,     2,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   156,   164,   165,   166,    48,    45,     0,     0,     0,
       0,     0,     0,    51,     0,   155,     0,     0,     0,     0,
       0,     0,     0,   162,   163,   161,     0,     0,   172,    29,
       0,     0,     0,     0,     0,     0,     0,     2,     4,     6,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     7,   151,    31,    79,    81,    94,    96,
      98,   100,   102,   104,   106,   111,   118,   122,   125,   129,
     139,   142,   143,   144,   150,   157,   158,   159,     0,    46,
       0,    43,     0,     0,   130,   139,     0,    41,     0,     0,
       0,   145,   144,    49,    52,     0,    65,     0,     0,   132,
      27,    24,    25,   131,     0,     0,   156,   164,   165,    21,
       0,     0,     0,   174,     0,     0,   173,   135,   136,   133,
     134,   137,   138,     1,     5,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,     0,
       0,   146,    47,    44,     0,     0,     0,     0,   176,     0,
       0,     0,    42,   139,     0,    77,     0,     0,     0,   154,
      50,     0,    64,    21,     0,     0,    66,    67,     0,    23,
       0,     0,     0,     0,     0,     0,    22,   177,     0,   160,
     168,   172,   167,   170,   175,    80,    97,     0,    99,   101,
     103,   105,   107,   108,   109,   110,   117,   116,   112,   113,
     114,   115,   119,   120,   121,   123,   124,   126,   127,   128,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   185,   187,     0,     0,   149,     0,   153,     0,
       0,     0,    25,    41,     0,     0,     0,    73,     0,     0,
       0,     0,     0,    70,    68,    28,    26,     0,     0,   179,
     181,   180,     0,     0,     0,   178,     0,     0,   186,     0,
     148,   152,     0,     0,     0,    41,     0,     0,     0,    71,
       0,    74,    78,    32,     0,    54,     0,    34,    53,     0,
       0,     0,   169,   171,    95,   188,    75,     0,    36,     0,
       0,    41,     0,    72,     0,     0,     0,    55,     0,    57,
      61,     0,   182,   184,   183,    76,    35,    41,     0,     0,
      39,    33,     0,    62,    56,    58,    69,     0,    40,     0,
      59,    63,     0,    37,    60,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,   110,    38,    39,    40,    41,   101,   102,    42,
      43,    44,    45,   181,    46,    47,    48,    49,    50,   305,
     328,   329,   330,    51,    52,   196,   197,    53,    54,   187,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,   114,   115,   116,    77,   111,   168,   254
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -255
static const yytype_int16 yypact[] =
{
     663,  -255,  -255,  -255,  -255,    19,    20,   978,   720,   -34,
      34,   -23,   159,   763,     6,  -255,   978,    39,   978,    62,
     978,    55,    63,  -255,  -255,  -255,   348,   978,    65,  -255,
     978,   978,   978,   978,   978,   978,   125,   663,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,    38,  -255,  -255,   200,    43,
      91,    96,   135,   124,   165,   147,   136,   170,  -255,  -255,
     156,  -255,    70,   120,  -255,  -255,  -255,  -255,   213,  -255,
     216,  -255,    35,     8,  -255,   158,   220,   806,   206,    21,
     978,  -255,   120,  -255,   230,   978,   232,   405,    60,  -255,
     211,   234,  -255,  -255,   978,   978,   217,   218,   219,   431,
     511,    30,    44,  -255,   110,   849,   243,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,   978,   978,   978,   978,
     978,   978,   978,   978,   978,   978,   978,   978,   978,   978,
     978,   978,   978,   978,   978,   978,   978,   978,   978,   978,
     978,  -255,  -255,   978,   978,   978,   978,   978,   978,   978,
     978,   978,   978,   978,   978,   892,   978,   287,  -255,   978,
     289,  -255,  -255,  -255,   256,   217,   218,   219,  -255,   257,
      62,   253,   254,    41,    25,  -255,    39,   113,   144,  -255,
    -255,   152,  -255,  -255,   259,    39,   283,  -255,   978,  -255,
      62,   161,   162,   978,   978,   978,  -255,  -255,    22,  -255,
    -255,    65,  -255,  -255,  -255,  -255,    43,   229,    91,    96,
     135,   124,   165,   165,   165,   165,   147,   147,   147,   147,
     147,   147,   136,   136,   136,   170,   170,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,   179,   208,  -255,   214,  -255,    32,
     978,   236,   281,   978,   978,    39,   180,  -255,    39,   298,
     720,   267,   300,  -255,  -255,  -255,  -255,   720,   720,  -255,
    -255,  -255,   235,   237,   239,  -255,   935,   978,  -255,   978,
    -255,  -255,    39,   201,   202,   978,   978,   262,   203,   537,
      39,  -255,  -255,   292,    28,  -255,   273,  -255,  -255,   978,
     978,   978,  -255,  -255,  -255,  -255,  -255,    39,   270,   271,
     204,   978,   720,   583,   720,   978,   246,  -255,   116,  -255,
    -255,    39,  -255,  -255,  -255,  -255,  -255,   978,   720,   282,
    -255,  -255,   -28,   663,  -255,  -255,  -255,   285,  -255,   720,
     663,   663,   720,  -255,   663,  -255
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,     0,   -33,    -7,    -9,  -255,   139,  -112,  -255,
    -255,  -255,  -255,  -254,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,    -4,  -255,  -255,  -255,  -255,   129,  -255,  -255,  -174,
     -11,  -108,  -255,  -255,   205,   198,   199,   197,   207,   131,
      29,   117,   134,    71,  -255,    -1,   318,  -255,   321,  -255,
    -255,  -255,  -255,   123,  -255,  -255,  -255,   -52,  -255
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -177
static const yytype_int16 yytable[] =
{
      37,    86,    94,    87,   124,    96,    85,   213,    98,   297,
     266,   175,   176,   177,    90,   126,   112,    85,   215,    85,
     217,   171,    78,    80,   185,   282,   283,   284,   185,    85,
      85,    85,    85,    85,    85,   185,   325,    88,   174,   326,
     189,   319,   350,    95,   178,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   253,   285,   186,
     264,    79,    81,   265,   327,   100,   207,   339,   262,   194,
     292,    89,    89,   208,    97,   195,   182,   124,    84,   188,
     125,   126,   209,   347,   191,   293,   183,   126,   276,    99,
     275,   103,   104,   201,   202,   279,   280,   281,   151,   152,
     105,   117,   118,   119,   120,   121,   122,   165,   113,   166,
     129,   167,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   325,   123,    85,   326,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
     210,   268,   344,   211,   130,   255,   269,   165,   257,   169,
     131,   170,     1,     2,     3,     4,   226,   227,   228,   229,
     230,   231,   133,   134,   135,   136,    82,   267,   313,   314,
      12,   315,   270,    15,   137,   138,   273,   126,   146,   147,
     271,    23,    24,    25,    83,   126,    27,   132,    28,   277,
     278,   332,   333,   334,   126,   126,   143,   144,   145,   139,
     140,   141,   142,   151,   152,   151,   152,   288,   300,   237,
     238,   239,   289,   269,   148,   149,   150,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   317,
     318,   322,   338,   184,   269,   126,   126,   126,   290,   294,
     179,   126,   182,   298,   291,   172,   299,   126,   173,   301,
     232,   233,   234,   303,   222,   223,   224,   225,   127,   128,
     307,   308,   190,   126,   192,   126,   199,   200,   295,   200,
     235,   236,   198,   316,   182,   320,   214,   203,   204,   205,
     256,   323,   258,   259,   260,   263,   272,   126,   195,   287,
     296,   302,   304,   306,   321,   309,   324,   310,   335,   311,
     182,   331,   336,   337,   342,   340,   343,   341,   124,   261,
     349,   124,   346,   352,   345,   274,   182,   218,   220,   219,
      91,   348,   216,    92,   286,     0,     0,     0,     0,   221,
       0,     0,   353,   351,     0,   355,     0,     0,     0,     0,
     354,   106,   107,   108,     4,     5,     0,     0,     6,     0,
       7,     8,     0,     0,     9,    10,    11,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   109,    27,     0,    28,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,     0,     0,     0,    32,    33,     0,     1,     2,
       3,     4,     5,    34,    35,     6,     0,     7,     8,     0,
       0,     9,    10,    11,     0,     0,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   193,    27,     0,    28,     0,     0,    29,     0,     0,
    -176,  -176,     0,     0,     0,     0,     0,    30,    31,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
      34,    35,  -176,     0,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,     0,     0,  -176,  -176,  -176,     0,     0,
    -176,  -176,  -176,  -176,  -176,  -176,     0,     0,  -176,  -176,
    -176,     0,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,     1,     2,     3,     4,     5,     0,
       0,     6,     0,     7,     8,     0,     0,     9,    10,    11,
       0,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   206,    27,     0,
      28,     0,     0,    29,     0,     0,   -75,   -75,     0,     0,
       0,     0,     0,    30,    31,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,    34,    35,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,   -75,   -75,   -75,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,   -76,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,   -76,   -76,   -76,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     1,     2,     3,     4,
       5,     0,     0,     6,     0,     7,     8,     0,     0,     9,
      10,    11,     0,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,    28,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,     0,     0,     0,
      32,    33,     0,     1,     2,     3,     4,     5,    34,    35,
       6,     0,     7,     8,     0,     0,     9,    82,    11,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,     0,    28,
       0,     0,    29,     0,     0,     0,     1,     2,     3,     4,
       0,     0,    30,    31,     0,     7,     0,    32,    33,     0,
      82,     0,     0,     0,    12,    34,    35,    15,     0,     0,
      18,     0,    20,     0,     0,    23,    24,    25,    83,     0,
      27,     0,    28,     0,     0,    93,     0,     0,     0,     1,
       2,     3,     4,     0,     0,    30,    31,     0,     7,     0,
      32,    33,     0,    82,     0,     0,     0,    12,    34,    35,
      15,     0,     0,    18,   180,    20,     0,     0,    23,    24,
      25,    83,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     0,     0,    30,    31,
       0,     7,     0,    32,    33,     0,    82,     0,     0,     0,
      12,    34,    35,    15,     0,     0,    18,     0,    20,     0,
       0,    23,    24,    25,    83,     0,    27,     0,    28,   212,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     0,
       0,    30,    31,     0,     7,     0,    32,    33,     0,    82,
       0,     0,     0,    12,    34,    35,    15,     0,     0,    18,
       0,    20,     0,     0,    23,    24,    25,    83,     0,    27,
     252,    28,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     0,     0,    30,    31,     0,     7,     0,    32,
      33,     0,    82,     0,     0,     0,    12,    34,    35,    15,
       0,     0,    18,     0,    20,     0,     0,    23,    24,    25,
      83,     0,    27,     0,    28,   312,     0,     0,     0,     0,
       0,     1,     2,     3,     4,     0,     0,    30,    31,     0,
       7,     0,    32,    33,     0,    82,     0,     0,     0,    12,
      34,    35,    15,     0,     0,    18,     0,    20,     0,     0,
      23,    24,    25,    83,     0,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,    34,    35
};

static const yytype_int16 yycheck[] =
{
       0,     8,    13,    37,    37,    16,     7,   115,    17,   263,
     184,     3,     4,     5,    37,    43,    27,    18,   126,    20,
     128,    73,     3,     3,     3,     3,     4,     5,     3,    30,
      31,    32,    33,    34,    35,     3,     8,     3,     3,    11,
      92,   295,    70,    37,    36,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,    36,    38,
      19,    42,    42,    38,    36,     3,    36,   321,   180,     9,
      38,    37,    37,    43,    35,    15,    87,   110,     7,    90,
      42,    43,    38,   337,    95,   259,    87,    43,   200,    18,
     198,    20,    37,   104,   105,   203,   204,   205,    57,    58,
      37,    30,    31,    32,    33,    34,    35,    37,    43,    39,
      67,    41,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,     8,     0,   127,    11,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      40,    38,    36,    43,    63,   166,    43,    37,   169,    39,
      64,    41,     3,     4,     5,     6,   137,   138,   139,   140,
     141,   142,    48,    49,    50,    51,    17,   186,   286,   287,
      21,   289,    38,    24,    19,    20,   195,    43,    52,    53,
      38,    32,    33,    34,    35,    43,    37,    62,    39,    38,
      38,   309,   310,   311,    43,    43,    59,    60,    61,    44,
      45,    46,    47,    57,    58,    57,    58,    38,    38,   148,
     149,   150,    43,    43,    54,    55,    56,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    38,
      38,    38,    38,    37,    43,    43,    43,    43,    40,   260,
      30,    43,   263,   264,    40,    42,   265,    43,    42,   268,
     143,   144,   145,   270,   133,   134,   135,   136,    68,    69,
     277,   278,    42,    43,    42,    43,    42,    43,    42,    43,
     146,   147,    71,   292,   295,   296,    43,    70,    70,    70,
       3,   300,     3,    37,    37,    42,    37,    43,    15,    70,
      19,     3,    35,     3,    42,    70,    14,    70,   317,    70,
     321,    38,    42,    42,   325,   322,    70,   324,   351,   180,
      38,   354,   331,    38,   328,   196,   337,   129,   131,   130,
      12,   338,   127,    12,   211,    -1,    -1,    -1,    -1,   132,
      -1,    -1,   349,   343,    -1,   352,    -1,    -1,    -1,    -1,
     350,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,     3,     4,
       5,     6,     7,    65,    66,    10,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    54,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    -1,    -1,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,     3,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    12,    13,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    19,    20,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    -1,    54,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
      67,    68,    69,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,     3,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    12,    13,    -1,    -1,    16,
      17,    18,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,     3,     4,     5,     6,     7,    65,    66,
      10,    -1,    12,    13,    -1,    -1,    16,    17,    18,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    52,    53,    -1,    12,    -1,    57,    58,    -1,
      17,    -1,    -1,    -1,    21,    65,    66,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    52,    53,    -1,    12,    -1,
      57,    58,    -1,    17,    -1,    -1,    -1,    21,    65,    66,
      24,    -1,    -1,    27,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    52,    53,
      -1,    12,    -1,    57,    58,    -1,    17,    -1,    -1,    -1,
      21,    65,    66,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    52,    53,    -1,    12,    -1,    57,    58,    -1,    17,
      -1,    -1,    -1,    21,    65,    66,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    52,    53,    -1,    12,    -1,    57,
      58,    -1,    17,    -1,    -1,    -1,    21,    65,    66,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,    34,
      35,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    52,    53,    -1,
      12,    -1,    57,    58,    -1,    17,    -1,    -1,    -1,    21,
      65,    66,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    12,    13,    16,
      17,    18,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    37,    39,    42,
      52,    53,    57,    58,    65,    66,    88,    89,    90,    91,
      92,    93,    96,    97,    98,    99,   101,   102,   103,   104,
     105,   110,   111,   114,   115,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   142,     3,    42,
       3,    42,    17,    35,   130,   132,    91,    37,     3,    37,
      37,   133,   135,    42,   117,    37,   117,    35,    92,   130,
       3,    94,    95,   130,    37,    37,     3,     4,     5,    36,
      89,   143,   117,    43,   139,   140,   141,   130,   130,   130,
     130,   130,   130,     0,    90,    42,    43,    68,    69,    67,
      63,    64,    62,    48,    49,    50,    51,    19,    20,    44,
      45,    46,    47,    59,    60,    61,    52,    53,    54,    55,
      56,    57,    58,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    37,    39,    41,   144,    39,
      41,   144,    42,    42,     3,     3,     4,     5,    36,    30,
      28,   100,   117,   132,    37,     3,    38,   116,   117,   144,
      42,   117,    42,    36,     9,    15,   112,   113,    71,    42,
      43,   117,   117,    70,    70,    70,    36,    36,    43,    38,
      40,    43,    40,   118,    43,   118,   121,   118,   122,   123,
     124,   125,   126,   126,   126,   126,   127,   127,   127,   127,
     127,   127,   128,   128,   128,   129,   129,   130,   130,   130,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,    38,   118,   145,   117,     3,   117,     3,    37,
      37,    94,    95,    42,    19,    38,   116,    92,    38,    43,
      38,    38,    37,    92,   113,   118,    95,    38,    38,   118,
     118,   118,     3,     4,     5,    36,   140,    70,    38,    43,
      40,    40,    38,   116,   117,    42,    19,   100,   117,    92,
      38,    92,     3,    91,    35,   106,     3,    91,    91,    70,
      70,    70,    40,   118,   118,   118,    92,    38,    38,   100,
     117,    42,    38,    92,    14,     8,    11,    36,   107,   108,
     109,    38,   118,   118,   118,    92,    42,    42,    38,   100,
      91,    91,   117,    70,    36,   108,    92,   100,    91,    38,
      70,    89,    38,    91,    89,    91
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
#line 101 "src/parser.y"
    { root = (yyvsp[(1) - (1)].node); YYACCEPT; ;}
    break;

  case 3:
#line 102 "src/parser.y"
    { root = create_node(NODE_PROGRAM, NULL); YYACCEPT; ;}
    break;

  case 4:
#line 106 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 5:
#line 107 "src/parser.y"
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
#line 120 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 7:
#line 121 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 125 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 126 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 127 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:
#line 128 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:
#line 129 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 13:
#line 130 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:
#line 131 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:
#line 132 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 16:
#line 133 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 134 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 135 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 136 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 137 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 21:
#line 141 "src/parser.y"
    { (yyval.node) = create_node(NODE_BLOCK_STMT, NULL); ;}
    break;

  case 22:
#line 142 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BLOCK_STMT, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 23:
#line 149 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 24:
#line 150 "src/parser.y"
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

  case 25:
#line 162 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 26:
#line 163 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 27:
#line 172 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_VAR_DECL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 28:
#line 176 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_VAR_DECL, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 29:
#line 184 "src/parser.y"
    { (yyval.node) = create_node(NODE_EMPTY_STMT, NULL); ;}
    break;

  case 30:
#line 188 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 31:
#line 192 "src/parser.y"
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

  case 32:
#line 205 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IF_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 33:
#line 210 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IF_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (7)].node);
        (yyval.node)->right = (yyvsp[(5) - (7)].node);
        (yyval.node)->extra = (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 34:
#line 219 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_WHILE_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 35:
#line 224 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_WHILE_STMT, "do-while");
        (yyval.node)->left = (yyvsp[(5) - (7)].node);
        (yyval.node)->right = (yyvsp[(2) - (7)].node);
    ;}
    break;

  case 36:
#line 229 "src/parser.y"
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

  case 37:
#line 240 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(3) - (9)].node);
        (yyval.node)->right = (yyvsp[(5) - (9)].node);
        (yyval.node)->extra = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node));
    ;}
    break;

  case 38:
#line 246 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, NULL);
        (yyval.node)->left = (yyvsp[(4) - (10)].node);
        (yyval.node)->right = (yyvsp[(6) - (10)].node);
        (yyval.node)->extra = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(8) - (10)].node), (yyvsp[(10) - (10)].node));
    ;}
    break;

  case 39:
#line 252 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, "for-in");
        (yyval.node)->left = (yyvsp[(3) - (7)].node);
        (yyval.node)->right = (yyvsp[(5) - (7)].node);
        (yyval.node)->extra = (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 40:
#line 258 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FOR_STMT, "for-in-var");
        (yyval.node)->left = (yyvsp[(4) - (8)].node);
        (yyval.node)->right = (yyvsp[(6) - (8)].node);
        (yyval.node)->extra = (yyvsp[(8) - (8)].node);
    ;}
    break;

  case 41:
#line 267 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 42:
#line 268 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 43:
#line 272 "src/parser.y"
    { (yyval.node) = create_node(NODE_EXPR_STMT, "continue"); ;}
    break;

  case 44:
#line 273 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "continue");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(2) - (3)].str));
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 45:
#line 278 "src/parser.y"
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

  case 46:
#line 290 "src/parser.y"
    { (yyval.node) = create_node(NODE_EXPR_STMT, "break"); ;}
    break;

  case 47:
#line 291 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "break");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(2) - (3)].str));
        free((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 48:
#line 296 "src/parser.y"
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

  case 49:
#line 308 "src/parser.y"
    { (yyval.node) = create_node(NODE_RETURN_STMT, NULL); ;}
    break;

  case 50:
#line 309 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_RETURN_STMT, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 51:
#line 313 "src/parser.y"
    {
        if (check_asi()) {
            (yyval.node) = create_node(NODE_RETURN_STMT, NULL);
            yyerrok;
        } else {
            // Note: This case might be tricky. A return without a value followed by
            // a newline is valid ASI. A return followed by an expression on the same line
            // without a semicolon is a syntax error. The current 'error' token logic
            // might not distinguish this perfectly without more context.
            // But for most cases, this is a reasonable approximation.
            yyerror("Missing semicolon or value after return");
            YYABORT;
        }
    ;}
    break;

  case 52:
#line 327 "src/parser.y"
    {
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

  case 53:
#line 340 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "with");
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 54:
#line 348 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "switch");
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 55:
#line 356 "src/parser.y"
    { (yyval.node) = create_node(NODE_BLOCK_STMT, NULL); ;}
    break;

  case 56:
#line 357 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 57:
#line 361 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 58:
#line 362 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 59:
#line 371 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "case");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 60:
#line 375 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "case");
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
        (yyval.node)->right = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 61:
#line 380 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 62:
#line 384 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "default");
    ;}
    break;

  case 63:
#line 387 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "default");
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 64:
#line 394 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "throw");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 65:
#line 398 "src/parser.y"
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

  case 66:
#line 411 "src/parser.y"
    { 
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 67:
#line 416 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 68:
#line 421 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "try");
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
        (yyval.node)->extra = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 69:
#line 430 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "catch");
        (yyval.node)->left = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (5)].str));
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 70:
#line 439 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_EXPR_STMT, "finally");
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 71:
#line 446 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (5)].str));
        (yyval.node)->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(2) - (5)].str));
    ;}
    break;

  case 72:
#line 451 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (6)].str));
        (yyval.node)->left = (yyvsp[(4) - (6)].node);
        (yyval.node)->right = (yyvsp[(6) - (6)].node);
        free((yyvsp[(2) - (6)].str));
    ;}
    break;

  case 73:
#line 460 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, NULL);
        (yyval.node)->left = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 74:
#line 464 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, NULL);
        (yyval.node)->left = (yyvsp[(3) - (5)].node);
        (yyval.node)->right = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 75:
#line 469 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (5)].str));
        (yyval.node)->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(2) - (5)].str));
    ;}
    break;

  case 76:
#line 474 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_FUNCTION_DECL, (yyvsp[(2) - (6)].str));
        (yyval.node)->left = (yyvsp[(4) - (6)].node);
        (yyval.node)->right = (yyvsp[(6) - (6)].node);
        free((yyvsp[(2) - (6)].str));
    ;}
    break;

  case 77:
#line 483 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 78:
#line 487 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (3)].str));
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 79:
#line 497 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 80:
#line 498 "src/parser.y"
    {
        (yyval.node) = create_binary_node(NODE_SEQUENCE_EXPR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 81:
#line 504 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 82:
#line 505 "src/parser.y"
    {
        (yyval.node) = create_binary_node(NODE_ASSIGNMENT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 83:
#line 508 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "+=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 84:
#line 513 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "-=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 85:
#line 518 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "*=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 86:
#line 523 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "/=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 87:
#line 528 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "%=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 88:
#line 533 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "<<=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 89:
#line 538 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, ">>=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 90:
#line 543 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, ">>>=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 91:
#line 548 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "&=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 92:
#line 553 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "|=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 93:
#line 558 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ASSIGNMENT, "^=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 94:
#line 566 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 95:
#line 567 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CONDITIONAL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (5)].node);
        (yyval.node)->right = (yyvsp[(3) - (5)].node);
        (yyval.node)->extra = (yyvsp[(5) - (5)].node);
    ;}
    break;

  case 96:
#line 576 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 97:
#line 577 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "||");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 98:
#line 585 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 99:
#line 586 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "&&");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 100:
#line 594 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 101:
#line 595 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "|");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 102:
#line 603 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 103:
#line 604 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "^");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 104:
#line 612 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 105:
#line 613 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "&");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 106:
#line 621 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 107:
#line 622 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "==");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 108:
#line 627 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "!=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 109:
#line 632 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "===");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 110:
#line 637 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "!==");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 111:
#line 645 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 112:
#line 646 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 113:
#line 651 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 114:
#line 656 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 115:
#line 661 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">=");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 116:
#line 666 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "instanceof");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 117:
#line 671 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "in");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 118:
#line 679 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 119:
#line 680 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "<<");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 120:
#line 685 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">>");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 121:
#line 690 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, ">>>");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 122:
#line 698 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 123:
#line 699 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "+");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 124:
#line 704 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "-");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 125:
#line 712 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 126:
#line 713 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "*");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 127:
#line 718 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "/");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 128:
#line 723 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_BINARY_EXPR, "%");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 129:
#line 731 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 130:
#line 732 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("delete");
    ;}
    break;

  case 131:
#line 736 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("void");
    ;}
    break;

  case 132:
#line 740 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("typeof");
    ;}
    break;

  case 133:
#line 744 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("++pre");
    ;}
    break;

  case 134:
#line 748 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("--pre");
    ;}
    break;

  case 135:
#line 752 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("+");
    ;}
    break;

  case 136:
#line 756 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("-");
    ;}
    break;

  case 137:
#line 760 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("~");
    ;}
    break;

  case 138:
#line 764 "src/parser.y"
    {
        (yyval.node) = create_unary_node(NODE_UNARY_EXPR, (yyvsp[(2) - (2)].node));
        (yyval.node)->value = strdup("!");
    ;}
    break;

  case 139:
#line 771 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 140:
#line 772 "src/parser.y"
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

  case 141:
#line 781 "src/parser.y"
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

  case 142:
#line 793 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 143:
#line 794 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 144:
#line 798 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 145:
#line 799 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_NEW_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 146:
#line 806 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CALL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
        (yyval.node)->right = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 147:
#line 811 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_CALL_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(1) - (2)].node);
        (yyval.node)->right = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 148:
#line 816 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, "[]");
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 149:
#line 821 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, ".");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (3)].str));
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 150:
#line 830 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 151:
#line 831 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 152:
#line 832 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, "[]");
        (yyval.node)->left = (yyvsp[(1) - (4)].node);
        (yyval.node)->right = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 153:
#line 837 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_MEMBER_EXPR, ".");
        (yyval.node)->left = (yyvsp[(1) - (3)].node);
        (yyval.node)->right = create_node(NODE_IDENTIFIER, (yyvsp[(3) - (3)].str));
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 154:
#line 843 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_NEW_EXPR, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
        (yyval.node)->right = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 155:
#line 851 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_THIS_EXPR, NULL);
    ;}
    break;

  case 156:
#line 854 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_IDENTIFIER, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 157:
#line 858 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 158:
#line 859 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 159:
#line 860 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 160:
#line 861 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 161:
#line 865 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "null"); ;}
    break;

  case 162:
#line 866 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "true"); ;}
    break;

  case 163:
#line 867 "src/parser.y"
    { (yyval.node) = create_node(NODE_LITERAL, "false"); ;}
    break;

  case 164:
#line 868 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 165:
#line 872 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 166:
#line 876 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_LITERAL, (yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 167:
#line 883 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 168:
#line 887 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 169:
#line 891 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_ARRAY_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (5)].node);
        (yyval.node)->right = (yyvsp[(4) - (5)].node);
    ;}
    break;

  case 170:
#line 899 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(2) - (2)].node);
        if ((yyvsp[(1) - (2)].node)) {
            (yyval.node)->next = (yyvsp[(1) - (2)].node);
        }
    ;}
    break;

  case 171:
#line 905 "src/parser.y"
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

  case 172:
#line 917 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 173:
#line 918 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 174:
#line 922 "src/parser.y"
    { (yyval.node) = create_node(NODE_EMPTY_STMT, NULL); ;}
    break;

  case 175:
#line 923 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_EMPTY_STMT, NULL);
    ;}
    break;

  case 176:
#line 932 "src/parser.y"
    { (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL); ;}
    break;

  case 177:
#line 933 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 178:
#line 937 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_OBJECT_LITERAL, NULL);
        (yyval.node)->left = (yyvsp[(2) - (4)].node);
    ;}
    break;

  case 179:
#line 944 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_PROPERTY, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 180:
#line 949 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_PROPERTY, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 181:
#line 954 "src/parser.y"
    {
        (yyval.node) = create_node(NODE_PROPERTY, (yyvsp[(1) - (3)].str));
        (yyval.node)->left = (yyvsp[(3) - (3)].node);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 182:
#line 959 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, (yyvsp[(3) - (5)].str));
        temp->next->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 183:
#line 967 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, (yyvsp[(3) - (5)].str));
        temp->next->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 184:
#line 975 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (5)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, (yyvsp[(3) - (5)].str));
        temp->next->left = (yyvsp[(5) - (5)].node);
        free((yyvsp[(3) - (5)].str));
    ;}
    break;

  case 185:
#line 986 "src/parser.y"
    { (yyval.node) = NULL; ;}
    break;

  case 186:
#line 987 "src/parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 187:
#line 991 "src/parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 188:
#line 992 "src/parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (3)].node);
        ASTNode *temp = (yyval.node);
        while (temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].node);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3476 "build/parser.c"
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


#line 1000 "src/parser.y"


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
