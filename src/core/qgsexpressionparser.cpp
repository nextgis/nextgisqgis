
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         exp_parse
#define yylex           exp_lex
#define yyerror         exp_error
#define yylval          exp_lval
#define yychar          exp_char
#define yydebug         exp_debug
#define yynerrs         exp_nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 16 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"

#include <qglobal.h>
#include <QList>
#include <cstdlib>
#include "qgsexpression.h"

#ifdef _MSC_VER
#  pragma warning( disable: 4065 )  // switch statement contains 'default' but no 'case' labels
#  pragma warning( disable: 4702 )  // unreachable code
#endif

// don't redeclare malloc/free
#define YYINCLUDED_STDLIB_H 1

struct expression_parser_context;
#include "qgsexpressionparser.hpp"

//! from lexer
typedef void* yyscan_t;
typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern int exp_lex_init(yyscan_t* scanner);
extern int exp_lex_destroy(yyscan_t scanner);
extern int exp_lex(YYSTYPE* yylval_param, yyscan_t yyscanner);
extern YY_BUFFER_STATE exp__scan_string(const char* buffer, yyscan_t scanner);

/** returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
    (interface function to be called from QgsExpression)
  */
QgsExpression::Node* parseExpression(const QString& str, QString& parserErrorMsg);

/** error handler for bison */
void exp_error(expression_parser_context* parser_ctx, const char* msg);

struct expression_parser_context
{
  // lexer context
  yyscan_t flex_scanner;

  // varible where the parser error will be stored
  QString errorMsg;
  // root node of the expression
  QgsExpression::Node* rootNode;
};

#define scanner parser_ctx->flex_scanner

// we want verbose error messages
#define YYERROR_VERBOSE 1

#define BINOP(x, y, z)  new QgsExpression::NodeBinaryOperator(x, y, z)



/* Line 189 of yacc.c  */
#line 135 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OR = 258,
     AND = 259,
     EQ = 260,
     NE = 261,
     LE = 262,
     GE = 263,
     LT = 264,
     GT = 265,
     REGEXP = 266,
     LIKE = 267,
     IS = 268,
     PLUS = 269,
     MINUS = 270,
     MUL = 271,
     DIV = 272,
     INTDIV = 273,
     MOD = 274,
     CONCAT = 275,
     POW = 276,
     NOT = 277,
     IN = 278,
     NUMBER_FLOAT = 279,
     NUMBER_INT = 280,
     BOOLEAN = 281,
     NULLVALUE = 282,
     CASE = 283,
     WHEN = 284,
     THEN = 285,
     ELSE = 286,
     END = 287,
     STRING = 288,
     COLUMN_REF = 289,
     FUNCTION = 290,
     SPECIAL_COL = 291,
     VARIABLE = 292,
     NAMED_NODE = 293,
     COMMA = 294,
     Unknown_CHARACTER = 295,
     UMINUS = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 77 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"

  QgsExpression::Node* node;
  QgsExpression::NodeList* nodelist;
  QgsExpression::NamedNode* namednode;
  double numberFloat;
  int    numberInt;
  bool   boolVal;
  QString* text;
  QgsExpression::BinaryOperator b_op;
  QgsExpression::UnaryOperator u_op;
  QgsExpression::WhenThen* whenthen;
  QgsExpression::WhenThenList* whenthenlist;



/* Line 214 of yacc.c  */
#line 228 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 240 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNRULES -- Number of states.  */
#define YYNSTATES  92

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     9,    13,    17,    21,    25,    29,
      33,    37,    41,    45,    49,    53,    57,    61,    65,    69,
      73,    77,    81,    84,    88,    93,    97,   103,   110,   113,
     116,   120,   126,   128,   130,   132,   134,   136,   138,   140,
     142,   145,   149,   153,   155,   157,   160,   162
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    46,     4,    46,    -1,    46,
       3,    46,    -1,    46,     5,    46,    -1,    46,     6,    46,
      -1,    46,     7,    46,    -1,    46,     8,    46,    -1,    46,
       9,    46,    -1,    46,    10,    46,    -1,    46,    11,    46,
      -1,    46,    12,    46,    -1,    46,    13,    46,    -1,    46,
      14,    46,    -1,    46,    15,    46,    -1,    46,    16,    46,
      -1,    46,    18,    46,    -1,    46,    17,    46,    -1,    46,
      19,    46,    -1,    46,    21,    46,    -1,    46,    20,    46,
      -1,    22,    46,    -1,    42,    46,    43,    -1,    35,    42,
      48,    43,    -1,    35,    42,    43,    -1,    46,    23,    42,
      48,    43,    -1,    46,    22,    23,    42,    48,    43,    -1,
      14,    46,    -1,    15,    46,    -1,    28,    49,    32,    -1,
      28,    49,    31,    46,    32,    -1,    34,    -1,    36,    -1,
      37,    -1,    24,    -1,    25,    -1,    26,    -1,    33,    -1,
      27,    -1,    38,    46,    -1,    48,    39,    46,    -1,    48,
      39,    47,    -1,    46,    -1,    47,    -1,    49,    50,    -1,
      50,    -1,    29,    46,    30,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   160,   160,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   215,   234,   235,   237,   238,
     240,   241,   244,   247,   272,   283,   284,   285,   286,   287,
     291,   295,   308,   309,   310,   314,   315,   319
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "EQ", "NE", "LE", "GE",
  "LT", "GT", "REGEXP", "LIKE", "IS", "PLUS", "MINUS", "MUL", "DIV",
  "INTDIV", "MOD", "CONCAT", "POW", "NOT", "IN", "NUMBER_FLOAT",
  "NUMBER_INT", "BOOLEAN", "NULLVALUE", "CASE", "WHEN", "THEN", "ELSE",
  "END", "STRING", "COLUMN_REF", "FUNCTION", "SPECIAL_COL", "VARIABLE",
  "NAMED_NODE", "COMMA", "Unknown_CHARACTER", "UMINUS", "'('", "')'",
  "$accept", "root", "expression", "named_node", "exp_list",
  "when_then_clauses", "when_then_clause", 0
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
     295,   296,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    48,    48,    48,    48,    49,    49,    50
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     4,     3,     5,     6,     2,     2,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     1,     1,     2,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    35,    36,    37,    39,     0,    38,
      32,     0,    33,    34,     0,     0,     2,    28,    29,    22,
       0,     0,    46,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      45,     0,    25,    43,    44,     0,    23,     4,     3,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    18,    17,    19,    21,    20,     0,     0,     0,     0,
      40,     0,    24,     0,     0,    47,    31,    41,    42,     0,
      26,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    15,    53,    54,    55,    21,    22
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yytype_int16 yypact[] =
{
     151,   151,   151,   151,   -66,   -66,   -66,   -66,   -13,   -66,
     -66,     3,   -66,   -66,   151,    24,   219,   -66,   -66,   258,
     151,    18,   -66,   101,    49,   -66,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,    23,    31,   191,   151,   -66,
     -66,   151,   -66,   219,   -66,   -26,   -66,   239,   258,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,    66,    66,
       2,     2,     2,     2,   -66,     2,    32,   126,   151,    90,
     219,   126,   -66,   126,   -24,   219,   -66,   219,   -66,   -18,
     -66,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,     0,    -6,   -65,   -66,    55
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      16,    17,    18,    19,    37,    38,    39,    40,    41,    42,
      43,    44,    84,    81,    24,    81,    20,    82,    89,    90,
      47,    81,    43,    44,    25,    91,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    23,    76,    20,    79,    48,
      49,    80,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    77,    83,    88,    50,     0,    85,     0,
       0,    87,    39,    40,    41,    42,    43,    44,     0,     0,
       0,     0,    56,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     0,     1,     2,     0,     0,     0,
       0,     0,    86,     3,     0,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    51,
       1,     2,     0,    14,    52,     0,     0,     0,     3,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    51,     1,     2,     0,    14,     0,
       0,     0,     0,     3,     0,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,    11,    12,    13,     0,
       0,     0,     0,    14,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,    78,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

static const yytype_int8 yycheck[] =
{
       0,     1,     2,     3,    14,    15,    16,    17,    18,    19,
      20,    21,    77,    39,    14,    39,    29,    43,    83,    43,
      20,    39,    20,    21,     0,    43,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    42,    23,    29,    48,    31,
      32,    51,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    42,    42,    81,    21,    -1,    78,    -1,
      -1,    81,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    43,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    32,    22,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      14,    15,    -1,    42,    43,    -1,    -1,    -1,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    14,    15,    -1,    42,    -1,
      -1,    -1,    -1,    22,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    15,    22,    24,    25,    26,    27,    28,    33,
      34,    35,    36,    37,    42,    45,    46,    46,    46,    46,
      29,    49,    50,    42,    46,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    46,    31,    32,
      50,    38,    43,    46,    47,    48,    43,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    23,    42,    30,    46,
      46,    39,    43,    42,    48,    46,    32,    46,    47,    48,
      43,    43
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
      yyerror (parser_ctx, YY_("syntax error: cannot back up")); \
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
# if YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
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
		  Type, Value, parser_ctx); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, expression_parser_context* parser_ctx)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser_ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    expression_parser_context* parser_ctx;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parser_ctx);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, expression_parser_context* parser_ctx)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser_ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    expression_parser_context* parser_ctx;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser_ctx);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, expression_parser_context* parser_ctx)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser_ctx)
    YYSTYPE *yyvsp;
    int yyrule;
    expression_parser_context* parser_ctx;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , parser_ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parser_ctx); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, expression_parser_context* parser_ctx)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser_ctx)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    expression_parser_context* parser_ctx;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser_ctx);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 33: /* "STRING" */

/* Line 1000 of yacc.c  */
#line 154 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1256 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 34: /* "COLUMN_REF" */

/* Line 1000 of yacc.c  */
#line 154 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1265 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 35: /* "FUNCTION" */

/* Line 1000 of yacc.c  */
#line 154 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1274 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 36: /* "SPECIAL_COL" */

/* Line 1000 of yacc.c  */
#line 154 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1283 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 37: /* "VARIABLE" */

/* Line 1000 of yacc.c  */
#line 154 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1292 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 38: /* "NAMED_NODE" */

/* Line 1000 of yacc.c  */
#line 154 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1301 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 46: /* "expression" */

/* Line 1000 of yacc.c  */
#line 151 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->node); };

/* Line 1000 of yacc.c  */
#line 1310 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 47: /* "named_node" */

/* Line 1000 of yacc.c  */
#line 153 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->namednode); };

/* Line 1000 of yacc.c  */
#line 1319 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 48: /* "exp_list" */

/* Line 1000 of yacc.c  */
#line 152 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->nodelist); };

/* Line 1000 of yacc.c  */
#line 1328 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 49: /* "when_then_clauses" */

/* Line 1000 of yacc.c  */
#line 156 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->whenthenlist); };

/* Line 1000 of yacc.c  */
#line 1337 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;
      case 50: /* "when_then_clause" */

/* Line 1000 of yacc.c  */
#line 155 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
	{ delete (yyvaluep->whenthen); };

/* Line 1000 of yacc.c  */
#line 1346 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
	break;

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
int yyparse (expression_parser_context* parser_ctx);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (expression_parser_context* parser_ctx)
#else
int
yyparse (parser_ctx)
    expression_parser_context* parser_ctx;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 160 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { parser_ctx->rootNode = (yyvsp[(1) - (1)].node); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 164 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 165 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 166 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 167 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 168 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 169 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 170 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 171 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 172 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 173 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 174 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 175 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 176 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 177 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 178 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 179 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 180 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 181 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 182 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 183 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeUnaryOperator((yyvsp[(1) - (2)].u_op), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 184 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 186 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[(1) - (4)].text));
          delete (yyvsp[(1) - (4)].text);
          if (fnIndex == -1)
          {
            // this should not actually happen because already in lexer we check whether an identifier is a known function
            // (if the name is not known the token is parsed as a column)
            exp_error(parser_ctx, "Function is not known");
            delete (yyvsp[(3) - (4)].nodelist);
            YYERROR;
          }
          QString paramError;
          if ( !QgsExpression::NodeFunction::validateParams( fnIndex, (yyvsp[(3) - (4)].nodelist), paramError ) )
          {
            exp_error( parser_ctx, paramError.toLocal8Bit().constData() );
            delete (yyvsp[(3) - (4)].nodelist);
            YYERROR;
          }
          if ( QgsExpression::Functions()[fnIndex]->params() != -1
               && !( QgsExpression::Functions()[fnIndex]->params() >= (yyvsp[(3) - (4)].nodelist)->count()
               && QgsExpression::Functions()[fnIndex]->minParams() <= (yyvsp[(3) - (4)].nodelist)->count() ) )
          {
            exp_error(parser_ctx, QString( "%1 function is called with wrong number of arguments" ).arg( QgsExpression::Functions()[fnIndex]->name() ).toLocal8Bit().constData() );
            delete (yyvsp[(3) - (4)].nodelist);
            YYERROR;
          }
          (yyval.node) = new QgsExpression::NodeFunction(fnIndex, (yyvsp[(3) - (4)].nodelist));
        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 216 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[(1) - (3)].text));
          delete (yyvsp[(1) - (3)].text);
          if (fnIndex == -1)
          {
            // this should not actually happen because already in lexer we check whether an identifier is a known function
            // (if the name is not known the token is parsed as a column)
            exp_error(parser_ctx, "Function is not known");
            YYERROR;
          }
          if ( QgsExpression::Functions()[fnIndex]->params() != 0 )
          {
            exp_error(parser_ctx, QString( "%1 function is called with wrong number of arguments" ).arg( QgsExpression::Functions()[fnIndex]->name() ).toLocal8Bit().constData() );
            YYERROR;
          }
          (yyval.node) = new QgsExpression::NodeFunction(fnIndex, new QgsExpression::NodeList());
        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 234 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeInOperator((yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].nodelist), false);  ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 235 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeInOperator((yyvsp[(1) - (6)].node), (yyvsp[(5) - (6)].nodelist), true); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 237 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 238 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeUnaryOperator( QgsExpression::uoMinus, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 240 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeCondition((yyvsp[(2) - (3)].whenthenlist)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 241 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeCondition((yyvsp[(2) - (5)].whenthenlist),(yyvsp[(4) - (5)].node)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 244 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeColumnRef( *(yyvsp[(1) - (1)].text) ); delete (yyvsp[(1) - (1)].text); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 248 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[(1) - (1)].text));
          if (fnIndex == -1)
          {
            if ( !QgsExpression::hasSpecialColumn( *(yyvsp[(1) - (1)].text) ) )
            {
              exp_error(parser_ctx, "Special column is not known");
              delete (yyvsp[(1) - (1)].text);
              YYERROR;
            }
            // $var is equivalent to _specialcol_( "$var" )
            QgsExpression::NodeList* args = new QgsExpression::NodeList();
            QgsExpression::NodeLiteral* literal = new QgsExpression::NodeLiteral( *(yyvsp[(1) - (1)].text) );
            args->append( literal );
            (yyval.node) = new QgsExpression::NodeFunction( QgsExpression::functionIndex( "_specialcol_" ), args );
          }
          else
          {
            (yyval.node) = new QgsExpression::NodeFunction( fnIndex, nullptr );
          }
          delete (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 273 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    {
          // @var is equivalent to var( "var" )
          QgsExpression::NodeList* args = new QgsExpression::NodeList();
          QgsExpression::NodeLiteral* literal = new QgsExpression::NodeLiteral( QString(*(yyvsp[(1) - (1)].text)).mid(1) );
          args->append( literal );
          (yyval.node) = new QgsExpression::NodeFunction( QgsExpression::functionIndex( "var" ), args );
          delete (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 283 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeLiteral( QVariant((yyvsp[(1) - (1)].numberFloat)) ); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 284 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeLiteral( QVariant((yyvsp[(1) - (1)].numberInt)) ); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 285 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeLiteral( QVariant((yyvsp[(1) - (1)].boolVal)) ); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 286 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeLiteral( QVariant(*(yyvsp[(1) - (1)].text)) ); delete (yyvsp[(1) - (1)].text); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 287 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.node) = new QgsExpression::NodeLiteral( QVariant() ); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 291 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.namednode) = new QgsExpression::NamedNode( *(yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].node) ); delete (yyvsp[(1) - (2)].text); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 296 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    {
         if ( (yyvsp[(1) - (3)].nodelist)->hasNamedNodes() )
         {
           exp_error(parser_ctx, "All parameters following a named parameter must also be named.");
           delete (yyvsp[(1) - (3)].nodelist);
           YYERROR;
         }
         else
         {
           (yyval.nodelist) = (yyvsp[(1) - (3)].nodelist); (yyvsp[(1) - (3)].nodelist)->append((yyvsp[(3) - (3)].node));
         }
       ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 308 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.nodelist) = (yyvsp[(1) - (3)].nodelist); (yyvsp[(1) - (3)].nodelist)->append((yyvsp[(3) - (3)].namednode)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 309 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.nodelist) = new QgsExpression::NodeList(); (yyval.nodelist)->append((yyvsp[(1) - (1)].node)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 310 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.nodelist) = new QgsExpression::NodeList(); (yyval.nodelist)->append((yyvsp[(1) - (1)].namednode)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 314 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.whenthenlist) = (yyvsp[(1) - (2)].whenthenlist); (yyvsp[(1) - (2)].whenthenlist)->append((yyvsp[(2) - (2)].whenthen)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 315 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.whenthenlist) = new QgsExpression::WhenThenList(); (yyval.whenthenlist)->append((yyvsp[(1) - (1)].whenthen)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 319 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"
    { (yyval.whenthen) = new QgsExpression::WhenThen((yyvsp[(2) - (4)].node),(yyvsp[(4) - (4)].node)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2054 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.cpp"
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
      yyerror (parser_ctx, YY_("syntax error"));
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
	    yyerror (parser_ctx, yymsg);
	  }
	else
	  {
	    yyerror (parser_ctx, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
		      yytoken, &yylval, parser_ctx);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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
		  yystos[yystate], yyvsp, parser_ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser_ctx, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parser_ctx);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parser_ctx);
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



/* Line 1675 of yacc.c  */
#line 322 "C:/builds/nextgisqgis-dev/qgis/src/core/qgsexpressionparser.yy"



// returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
QgsExpression::Node* parseExpression(const QString& str, QString& parserErrorMsg)
{
  expression_parser_context ctx;
  ctx.rootNode = 0;

  exp_lex_init(&ctx.flex_scanner);
  exp__scan_string(str.toUtf8().constData(), ctx.flex_scanner);
  int res = exp_parse(&ctx);
  exp_lex_destroy(ctx.flex_scanner);

  // list should be empty when parsing was OK
  if (res == 0) // success?
  {
    return ctx.rootNode;
  }
  else // error?
  {
    parserErrorMsg = ctx.errorMsg;
    delete ctx.rootNode;
    return nullptr;
  }
}


void exp_error(expression_parser_context* parser_ctx, const char* msg)
{
  parser_ctx->errorMsg = msg;
}


