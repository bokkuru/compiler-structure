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
     CHAR = 258,
     ELSE = 259,
     GOTO = 260,
     IF = 261,
     INT = 262,
     LONG = 263,
     RETURN = 264,
     VOID = 265,
     WHILE = 266,
     EQ = 267,
     AND = 268,
     OR = 269,
     IDENTIFIER = 270,
     STRING = 271,
     INTEGER_CONSTANT = 272,
     CHARACTER_CONSTANT = 273,
     UNARY_OP = 274
   };
#endif
/* Tokens.  */
#define CHAR 258
#define ELSE 259
#define GOTO 260
#define IF 261
#define INT 262
#define LONG 263
#define RETURN 264
#define VOID 265
#define WHILE 266
#define EQ 267
#define AND 268
#define OR 269
#define IDENTIFIER 270
#define STRING 271
#define INTEGER_CONSTANT 272
#define CHARACTER_CONSTANT 273
#define UNARY_OP 274




/* Copy the first part of user declarations.  */
#line 4 "xcc.y"

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "xcc.h"
#include "misc.h"
#include "AST.h"
#include "type.h"
#include "symbol.h"
#include "codegen.h"
#ifdef XCC_VIS
#include "vis/vis.h"
#endif
#define YYERROR_VERBOSE

struct AST *ast_root;
char       *filename;
FILE       *xcc_out;
int AST_is_local = 0;

static void init (int argc, char *argv []);


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
# define YYTOKEN_TABLE 1
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 169 "xcc.tab.c"

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  107

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,     2,    33,     2,
      26,    28,    23,    21,    29,    22,     2,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    27,
      20,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      15,    16,    17,    18,    25
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    13,    18,    19,
      22,    26,    28,    30,    32,    34,    36,    39,    43,    48,
      52,    54,    58,    61,    63,    66,    69,    71,    77,    85,
      91,    95,    99,   103,   104,   105,   112,   113,   115,   117,
     119,   121,   123,   127,   131,   135,   139,   143,   147,   151,
     155,   159,   162,   167,   171,   175,   177,   179,   181,   183,
     185,   187,   191
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    37,    -1,    36,    37,    -1,    38,    -1,
      41,    -1,    -1,    42,    43,    39,    48,    -1,    -1,    40,
      41,    -1,    42,    43,    27,    -1,    10,    -1,     3,    -1,
       7,    -1,     8,    -1,    55,    -1,    23,    43,    -1,    26,
      43,    28,    -1,    43,    26,    44,    28,    -1,    43,    26,
      28,    -1,    45,    -1,    44,    29,    45,    -1,    42,    43,
      -1,    47,    -1,    46,    47,    -1,    51,    27,    -1,    48,
      -1,     6,    26,    52,    28,    47,    -1,     6,    26,    52,
      28,    47,     4,    47,    -1,    11,    26,    52,    28,    47,
      -1,     5,    55,    27,    -1,    55,    30,    47,    -1,     9,
      51,    27,    -1,    -1,    -1,    31,    49,    40,    50,    46,
      32,    -1,    -1,    52,    -1,    55,    -1,    17,    -1,    18,
      -1,    16,    -1,    52,    19,    52,    -1,    52,    14,    52,
      -1,    52,    13,    52,    -1,    52,    12,    52,    -1,    52,
      20,    52,    -1,    52,    21,    52,    -1,    52,    22,    52,
      -1,    52,    23,    52,    -1,    52,    24,    52,    -1,    53,
      52,    -1,    52,    26,    54,    28,    -1,    52,    26,    28,
      -1,    26,    52,    28,    -1,    33,    -1,    23,    -1,    21,
      -1,    22,    -1,    34,    -1,    52,    -1,    54,    29,    52,
      -1,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    73,    79,    81,    90,    89,   106,   107,
     112,   119,   121,   123,   125,   130,   132,   134,   136,   138,
     143,   145,   150,   157,   159,   164,   166,   168,   170,   172,
     174,   176,   179,   185,   187,   184,   195,   196,   201,   206,
     209,   222,   225,   228,   231,   234,   237,   240,   243,   246,
     249,   252,   255,   258,   261,   267,   268,   269,   270,   271,
     275,   279,   286
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"char\"", "\"else\"", "\"goto\"",
  "\"if\"", "\"int\"", "\"long\"", "\"return\"", "\"void\"", "\"while\"",
  "\"==\"", "\"&&\"", "\"||\"", "IDENTIFIER", "STRING", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "'='", "'<'", "'+'", "'-'", "'*'", "'/'",
  "UNARY_OP", "'('", "';'", "')'", "','", "':'", "'{'", "'}'", "'&'",
  "'!'", "$accept", "translation_unit", "external_declaration",
  "function_definition", "@1", "declaration_list", "declaration",
  "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "statement_list", "statement",
  "compound_statement", "@2", "@3", "expression_opt", "expression",
  "unary_operator", "argument_expression_list", "identifier", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    61,
      60,    43,    45,    42,    47,   274,    40,    59,    41,    44,
      58,   123,   125,    38,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    39,    38,    40,    40,
      41,    42,    42,    42,    42,    43,    43,    43,    43,    43,
      44,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    47,    49,    50,    48,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      54,    54,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     4,     0,     2,
       3,     1,     1,     1,     1,     1,     2,     3,     4,     3,
       1,     3,     2,     1,     2,     2,     1,     5,     7,     5,
       3,     3,     3,     0,     0,     6,     0,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     4,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    14,    11,     0,     2,     4,     5,     0,
       1,     3,    62,     0,     0,     6,    15,    16,     0,     0,
      10,     0,    17,    19,     0,     0,    20,    33,     7,    22,
      18,     0,     8,    21,    34,     9,     0,    36,     0,     0,
       0,    36,     0,    41,    39,    40,    57,    58,    56,     0,
      55,    59,    36,    23,    26,     0,    37,     0,    38,     0,
       0,     0,    38,     0,     0,    35,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    36,
      30,     0,    32,     0,    54,    45,    44,    43,    42,    46,
      47,    48,    49,    50,    53,    60,     0,    31,    36,    36,
      52,     0,    27,    29,    61,    36,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,    21,    34,     8,     9,    15,    25,
      26,    52,    53,    54,    32,    37,    55,    56,    57,    96,
      62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -51
static const yytype_int16 yypact[] =
{
      98,   -51,   -51,   -51,   -51,   224,   -51,   -51,   -51,   -12,
     -51,   -51,   -51,   -12,   -12,    -8,   -51,   -16,    46,    14,
     -51,   -23,   -51,   -51,   -12,    16,   -51,   -51,   -51,   -16,
     -51,    98,   -51,   -51,    98,   -51,   -12,    76,    -8,    10,
      15,   110,    32,   -51,   -51,   -51,   -51,   -51,   -51,   110,
     -51,   -51,    45,   -51,   -51,    38,   177,   110,    29,    48,
     110,    53,   -51,   110,   126,   -51,   -51,   -51,   110,   110,
     110,   110,   110,   110,   110,   110,   110,    96,    47,    76,
     -51,   143,   -51,   160,   -51,   215,   199,   192,   177,   221,
     -17,   -17,    47,    47,   -51,   177,    24,   -51,    76,    76,
     -51,   110,    79,   -51,   177,    76,   -51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,    81,   -51,   -51,   -51,    50,   -18,    33,   -51,
      57,   -51,   -50,    74,   -51,   -51,    59,   -37,   -51,   -51,
      -9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      16,    24,    66,    12,    16,    16,    75,    76,    27,    77,
      19,    13,    64,    24,    14,    16,    36,     1,    19,    20,
      78,     2,     3,    81,     4,    12,    83,    16,    58,    97,
      59,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      95,    60,    23,    58,    30,    31,    17,    18,   102,   103,
      39,    40,   100,   101,    41,   106,    42,    29,    63,    79,
      12,    43,    44,    45,   104,    67,    46,    47,    48,    38,
      58,    49,    19,    77,    22,    80,    27,    65,    50,    51,
      82,    39,    40,   105,    35,    41,    11,    42,    33,    58,
      58,    12,    43,    44,    45,    28,    58,    46,    47,    48,
      61,     1,    49,     0,     0,     2,     3,    27,     4,    50,
      51,    12,    43,    44,    45,     0,     0,    46,    47,    48,
       0,     0,    49,     0,    94,    12,    43,    44,    45,    50,
      51,    46,    47,    48,     0,     0,    49,     0,    68,    69,
      70,     0,     0,    50,    51,    71,    72,    73,    74,    75,
      76,     0,    77,     0,    84,    68,    69,    70,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,     0,    77,
       0,    98,    68,    69,    70,     0,     0,     0,     0,    71,
      72,    73,    74,    75,    76,     0,    77,     0,    99,    68,
      69,    70,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    68,    69,     0,     0,     0,     0,
       0,    68,    72,    73,    74,    75,    76,     0,    77,    72,
      73,    74,    75,    76,    10,    77,     0,     1,     0,     0,
       0,     2,     3,     0,     4,    72,    73,    74,    75,    76,
       0,    77,    73,    74,    75,    76,     0,    77
};

static const yytype_int8 yycheck[] =
{
       9,    19,    52,    15,    13,    14,    23,    24,    31,    26,
      26,    23,    49,    31,    26,    24,    34,     3,    26,    27,
      57,     7,     8,    60,    10,    15,    63,    36,    37,    79,
      39,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    26,    28,    52,    28,    29,    13,    14,    98,    99,
       5,     6,    28,    29,     9,   105,    11,    24,    26,    30,
      15,    16,    17,    18,   101,    27,    21,    22,    23,    36,
      79,    26,    26,    26,    28,    27,    31,    32,    33,    34,
      27,     5,     6,     4,    34,     9,     5,    11,    31,    98,
      99,    15,    16,    17,    18,    21,   105,    21,    22,    23,
      41,     3,    26,    -1,    -1,     7,     8,    31,    10,    33,
      34,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    -1,    26,    -1,    28,    15,    16,    17,    18,    33,
      34,    21,    22,    23,    -1,    -1,    26,    -1,    12,    13,
      14,    -1,    -1,    33,    34,    19,    20,    21,    22,    23,
      24,    -1,    26,    -1,    28,    12,    13,    14,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    26,
      -1,    28,    12,    13,    14,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    26,    -1,    28,    12,
      13,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    26,    12,    13,    -1,    -1,    -1,    -1,
      -1,    12,    20,    21,    22,    23,    24,    -1,    26,    20,
      21,    22,    23,    24,     0,    26,    -1,     3,    -1,    -1,
      -1,     7,     8,    -1,    10,    20,    21,    22,    23,    24,
      -1,    26,    21,    22,    23,    24,    -1,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     8,    10,    36,    37,    38,    41,    42,
       0,    37,    15,    23,    26,    43,    55,    43,    43,    26,
      27,    39,    28,    28,    42,    44,    45,    31,    48,    43,
      28,    29,    49,    45,    40,    41,    42,    50,    43,     5,
       6,     9,    11,    16,    17,    18,    21,    22,    23,    26,
      33,    34,    46,    47,    48,    51,    52,    53,    55,    55,
      26,    51,    55,    26,    52,    32,    47,    27,    12,    13,
      14,    19,    20,    21,    22,    23,    24,    26,    52,    30,
      27,    52,    27,    52,    28,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    28,    52,    54,    47,    28,    28,
      28,    29,    47,    47,    52,     4,    47
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
#line 71 "xcc.y"
    { (yyval) = create_AST ("AST_translation_unit_single", 1, (yyvsp[(1) - (1)]));
	  ast_root = (yyval); ;}
    break;

  case 3:
#line 74 "xcc.y"
    { (yyval) = create_AST ("AST_translation_unit_pair", 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	  ast_root = (yyval); ;}
    break;

  case 4:
#line 80 "xcc.y"
    { (yyval) = create_AST ("AST_external_declaration_func", 1, (yyvsp[(1) - (1)])); ;}
    break;

  case 5:
#line 82 "xcc.y"
    { (yyval) = create_AST ("AST_external_declaration_dec", 1, (yyvsp[(1) - (1)])); 
	  sym_table.arg    = NULL;
  	  sym_table.label  = NULL;
  	  sym_table.string = NULL; ;}
    break;

  case 6:
#line 90 "xcc.y"
    { (yyval) = create_AST ("AST_dummy", 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	  (yyval)->type = type_analyze_declarator ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)])->type); 
          /* conditonal to cause more natural syntax error */
          if ((yyval)->type->kind == TYPE_KIND_FUNCTION) {
              sym_entry_param ((yyval)->type);
              sym_entry ((yyval));
              sym_begin_function ();
          } ;}
    break;

  case 7:
#line 99 "xcc.y"
    { (yyval) = create_AST ("AST_function_definition", 3, (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
          sym_backpatch ((yyval), (yyvsp[(3) - (4)])->type);
	  sym_end_function ((yyval)); ;}
    break;

  case 8:
#line 106 "xcc.y"
    { (yyval) = create_AST ("AST_declaration_list_null", 0); ;}
    break;

  case 9:
#line 108 "xcc.y"
    { (yyval) = create_AST ("AST_declaration_list_pair", 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 10:
#line 113 "xcc.y"
    { (yyval) = create_AST ("AST_declaration", 2, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)])); 
	  (yyval)->type = type_analyze_declarator ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])->type);
	  sym_entry ((yyval)); ;}
    break;

  case 11:
#line 119 "xcc.y"
    { (yyval) = create_AST ("AST_type_specifier_void", 0);
               (yyval)->type = create_prim_type (PRIM_TYPE_VOID); ;}
    break;

  case 12:
#line 121 "xcc.y"
    { (yyval) = create_AST ("AST_type_specifier_char", 0);
               (yyval)->type = create_prim_type (PRIM_TYPE_CHAR); ;}
    break;

  case 13:
#line 123 "xcc.y"
    { (yyval) = create_AST ("AST_type_specifier_int", 0);
               (yyval)->type = create_prim_type (PRIM_TYPE_INT); ;}
    break;

  case 14:
#line 125 "xcc.y"
    { (yyval) = create_AST ("AST_type_specifier_long", 0);
               (yyval)->type = create_prim_type (PRIM_TYPE_LONG); ;}
    break;

  case 15:
#line 131 "xcc.y"
    { (yyval) = create_AST ("AST_declarator_id", 1, (yyvsp[(1) - (1)])); ;}
    break;

  case 16:
#line 133 "xcc.y"
    { (yyval) = create_AST ("AST_declarator_pointer", 1, (yyvsp[(2) - (2)])); ;}
    break;

  case 17:
#line 135 "xcc.y"
    { (yyval) = create_AST ("AST_declarator_paren", 1, (yyvsp[(2) - (3)])); ;}
    break;

  case 18:
#line 137 "xcc.y"
    { (yyval) = create_AST ("AST_declarator_func1", 2, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 19:
#line 139 "xcc.y"
    { (yyval) = create_AST ("AST_declarator_func2", 1, (yyvsp[(1) - (3)])); ;}
    break;

  case 20:
#line 144 "xcc.y"
    { (yyval) = create_AST ("AST_parameter_list_single", 1, (yyvsp[(1) - (1)])); ;}
    break;

  case 21:
#line 146 "xcc.y"
    { (yyval) = create_AST ("AST_parameter_list_pair", 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 22:
#line 151 "xcc.y"
    { (yyval) = create_AST ("AST_parameter_declaration", 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	  (yyval)->type = type_analyze_declarator ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)])->type);
	  /* sym_entry ($$); */ ;}
    break;

  case 23:
#line 158 "xcc.y"
    { (yyval) = create_AST ("AST_statement_list_single", 1, (yyvsp[(1) - (1)])); ;}
    break;

  case 24:
#line 160 "xcc.y"
    { (yyval) = create_AST ("AST_statement_list_pair", 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 25:
#line 165 "xcc.y"
    { (yyval) = create_AST ("AST_statement_exp", 1, (yyvsp[(1) - (2)])); ;}
    break;

  case 26:
#line 167 "xcc.y"
    { (yyval) = create_AST ("AST_statement_comp", 1, (yyvsp[(1) - (1)])); ;}
    break;

  case 27:
#line 169 "xcc.y"
    { (yyval) = create_AST ("AST_statement_if", 2, (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); ;}
    break;

  case 28:
#line 171 "xcc.y"
    { (yyval) = create_AST ("AST_statement_ifelse", 3, (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)])); ;}
    break;

  case 29:
#line 173 "xcc.y"
    { (yyval) = create_AST ("AST_statement_while", 2, (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); ;}
    break;

  case 30:
#line 175 "xcc.y"
    { (yyval) = create_AST ("AST_statement_goto", 1, (yyvsp[(2) - (3)])); ;}
    break;

  case 31:
#line 177 "xcc.y"
    { (yyval) = create_AST ("AST_statement_label", 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  sym_entry ((yyval)); ;}
    break;

  case 32:
#line 180 "xcc.y"
    { (yyval) = create_AST ("AST_statement_return", 1, (yyvsp[(2) - (3)])); ;}
    break;

  case 33:
#line 185 "xcc.y"
    { sym_begin_block (); ;}
    break;

  case 34:
#line 187 "xcc.y"
    { sym_middle_block (); ;}
    break;

  case 35:
#line 189 "xcc.y"
    { (yyval) = create_AST ("AST_compound_statement", 2, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));
	  sym_end_block ((yyval)); ;}
    break;

  case 36:
#line 195 "xcc.y"
    { (yyval) = create_AST ("AST_expression_opt_null", 0); ;}
    break;

  case 37:
#line 197 "xcc.y"
    { (yyval) = create_AST ("AST_expression_opt_single", 1, (yyvsp[(1) - (1)])); ;}
    break;

  case 38:
#line 202 "xcc.y"
    { struct Symbol *sym;
          (yyval) = create_AST ("AST_expression_id", 1, (yyvsp[(1) - (1)]));
          sym = sym_check_var_decl ((yyval));
	  (yyval)->type = sym->type; ;}
    break;

  case 39:
#line 207 "xcc.y"
    { (yyval) = create_AST ("AST_expression_long", 1, atol (yytext));
            (yyval)->type = types.t_long; ;}
    break;

  case 40:
#line 210 "xcc.y"
    { 
          char c;
          if (yytext [1] == '\\') { /* escape sequence */
              switch (yytext [2]) {
              case 'n': c = '\n';   break;
              default:  assert (0); break;
              }
          } else { /* normal character */
              c = yytext [1];
          }
          (yyval) = create_AST ("AST_expression_char", 1, c);
	  (yyval)->type = types.t_long; ;}
    break;

  case 41:
#line 223 "xcc.y"
    { (yyval) = create_AST ("AST_expression_string", 1, str_buf);
	  (yyval)->type = types.t_char_p; string_entry ((yyval)->u.id); ;}
    break;

  case 42:
#line 226 "xcc.y"
    { (yyval) = create_AST ("AST_expression_assign", 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = (yyvsp[(1) - (3)])->type; ;}
    break;

  case 43:
#line 229 "xcc.y"
    { (yyval) = create_AST ("AST_expression_lor",    2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = types.t_long; ;}
    break;

  case 44:
#line 232 "xcc.y"
    { (yyval) = create_AST ("AST_expression_land",   2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = types.t_long; ;}
    break;

  case 45:
#line 235 "xcc.y"
    { (yyval) = create_AST ("AST_expression_eq",     2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = types.t_long; ;}
    break;

  case 46:
#line 238 "xcc.y"
    { (yyval) = create_AST ("AST_expression_less",   2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = types.t_long; ;}
    break;

  case 47:
#line 241 "xcc.y"
    { (yyval) = create_AST ("AST_expression_add",    2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = type_add ((yyvsp[(1) - (3)])->type, (yyvsp[(3) - (3)])->type); ;}
    break;

  case 48:
#line 244 "xcc.y"
    { (yyval) = create_AST ("AST_expression_sub",    2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = type_sub ((yyvsp[(1) - (3)])->type, (yyvsp[(3) - (3)])->type); ;}
    break;

  case 49:
#line 247 "xcc.y"
    { (yyval) = create_AST ("AST_expression_mul",    2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = types.t_long; ;}
    break;

  case 50:
#line 250 "xcc.y"
    { (yyval) = create_AST ("AST_expression_div",    2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	  (yyval)->type = types.t_long; ;}
    break;

  case 51:
#line 253 "xcc.y"
    { (yyval) = create_AST ("AST_expression_unary",  2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	  (yyval)->type = type_uop ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])->type); ;}
    break;

  case 52:
#line 256 "xcc.y"
    { (yyval) = create_AST ("AST_expression_funcall1", 2, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	  (yyval)->type = (yyvsp[(1) - (4)])->type->u.t_function.ret_type; ;}
    break;

  case 53:
#line 259 "xcc.y"
    { (yyval) = create_AST ("AST_expression_funcall2", 1, (yyvsp[(1) - (3)]));
	  (yyval)->type = (yyvsp[(1) - (3)])->type->u.t_function.ret_type; ;}
    break;

  case 54:
#line 262 "xcc.y"
    { (yyval) = create_AST ("AST_expression_paren", 1, (yyvsp[(2) - (3)]));
	  (yyval)->type = (yyvsp[(2) - (3)])->type; ;}
    break;

  case 55:
#line 267 "xcc.y"
    { (yyval) = create_AST ("AST_unary_operator_address",  0); ;}
    break;

  case 56:
#line 268 "xcc.y"
    { (yyval) = create_AST ("AST_unary_operator_deref",    0); ;}
    break;

  case 57:
#line 269 "xcc.y"
    { (yyval) = create_AST ("AST_unary_operator_plus",     0); ;}
    break;

  case 58:
#line 270 "xcc.y"
    { (yyval) = create_AST ("AST_unary_operator_minus",    0); ;}
    break;

  case 59:
#line 271 "xcc.y"
    { (yyval) = create_AST ("AST_unary_operator_negative", 0); ;}
    break;

  case 60:
#line 276 "xcc.y"
    { (yyval) = create_AST ("AST_argument_expression_list_single", 1, (yyvsp[(1) - (1)]));
            // $$->u.arg_size = ROUNDUP_LONG ($1->type->size); // xxx
        ;}
    break;

  case 61:
#line 280 "xcc.y"
    { (yyval) = create_AST ("AST_argument_expression_list_pair", 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
            // $$->u.arg_size = $1->u.arg_size + ROUNDUP_LONG ($3->type->size); // xxx
        ;}
    break;

  case 62:
#line 286 "xcc.y"
    { (yyval) = create_AST ("AST_IDENTIFIER", 1, yytext); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1849 "xcc.tab.c"
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


#line 288 "xcc.y"

/* ---------------------------------------------------------------------- */
static void
init (int argc, char *argv [])
{
    /* handling command line arguments */
    if (argc < 2) {
	fprintf (stderr, "Usage: %s filename\n", argv [0]);
	exit (1);
    }
    filename = argv [1];
    yyin = fopen (filename, "r");
    if (yyin == NULL) {
	fprintf (stderr, "Cannot open file: %s\n", argv [1]);
	exit (1);
    }

    /* initialization for types */
    types.t_void   = create_prim_type (PRIM_TYPE_VOID);
    types.t_char   = create_prim_type (PRIM_TYPE_CHAR);
    types.t_int    = create_prim_type (PRIM_TYPE_INT);
    types.t_long   = create_prim_type (PRIM_TYPE_LONG);
    types.t_char_p = create_pointer_type (types.t_char);

    xcc_out = stdout;
}
/* --------------------------------------------------------------------- */
int
yyerror (const char *mesg)
{
    fprintf (stderr, "yyerror: %d: %s around `%s'\n",
	     lineno, mesg, yytext);
    exit (1);
}

int
main (int argc, char *argv [])
{
    init (argc, argv);
    yyparse (); /* semantic analysis is also done in actions */
#ifdef XCC_VIS
    xcc_vis_main (ast_root, 0);
#endif
    codegen ();
    return 0;
}
/* --------------------------------------------------------------------- */

