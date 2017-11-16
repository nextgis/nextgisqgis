
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
#define yyparse         sqlstatement_parse
#define yylex           sqlstatement_lex
#define yyerror         sqlstatement_error
#define yylval          sqlstatement_lval
#define yychar          sqlstatement_char
#define yydebug         sqlstatement_debug
#define yynerrs         sqlstatement_nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 18 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"

#include <qglobal.h>
#include <QList>
#include <cstdlib>
#include "qgssqlstatement.h"

#ifdef _MSC_VER
#  pragma warning( disable: 4065 )  // switch statement contains 'default' but no 'case' labels
#  pragma warning( disable: 4702 )  // unreachable code
#endif

// don't redeclare malloc/free
#define YYINCLUDED_STDLIB_H 1

struct sqlstatement_parser_context;
#include "qgssqlstatementparser.hpp"

//! from lexer
typedef void* yyscan_t;
typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern int sqlstatement_lex_init(yyscan_t* scanner);
extern int sqlstatement_lex_destroy(yyscan_t scanner);
extern int sqlstatement_lex(YYSTYPE* yylval_param, yyscan_t yyscanner);
extern YY_BUFFER_STATE sqlstatement__scan_string(const char* buffer, yyscan_t scanner);

/** returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
    (interface function to be called from QgsSQLStatement)
  */
QgsSQLStatement::Node* parse(const QString& str, QString& parserErrorMsg);

/** error handler for bison */
void sqlstatement_error(sqlstatement_parser_context* parser_ctx, const QString& errorMsg);

struct sqlstatement_parser_context
{
  // lexer context
  yyscan_t flex_scanner;

  // varible where the parser error will be stored
  QString errorMsg;
  // root node of the sqlstatement
  QgsSQLStatement::NodeSelect* rootNode;

  QgsSQLStatement::Node* whereExp;

  QList<QgsSQLStatement::NodeJoin*> joinList;

  QList<QgsSQLStatement::NodeColumnSorted*> orderByList;

  sqlstatement_parser_context() : rootNode( nullptr ), whereExp( nullptr ) {}

  void setWhere( QgsSQLStatement::Node* whereExp ) { this->whereExp = whereExp; }

  void setJoins( QList<QgsSQLStatement::NodeJoin*> joinList ) { this->joinList = joinList; }

  void setOrderBy( QList<QgsSQLStatement::NodeColumnSorted*> orderByList ) { this->orderByList = orderByList; }
};

#define scanner parser_ctx->flex_scanner

// we want verbose error messages
#define YYERROR_VERBOSE 1

#define BINOP(x, y, z)  new QgsSQLStatement::NodeBinaryOperator(x, y, z)



/* Line 189 of yacc.c  */
#line 149 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"

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
     LIKE = 266,
     IS = 267,
     PLUS = 268,
     MINUS = 269,
     MUL_OR_STAR = 270,
     DIV = 271,
     INTDIV = 272,
     MOD = 273,
     CONCAT = 274,
     POW = 275,
     NOT = 276,
     IN = 277,
     BETWEEN = 278,
     SELECT = 279,
     ALL = 280,
     DISTINCT = 281,
     CAST = 282,
     AS = 283,
     JOIN = 284,
     FROM = 285,
     ON = 286,
     USING = 287,
     WHERE = 288,
     ORDER = 289,
     BY = 290,
     ASC = 291,
     DESC = 292,
     LEFT = 293,
     RIGHT = 294,
     INNER = 295,
     OUTER = 296,
     CROSS = 297,
     FULL = 298,
     NATURAL = 299,
     UNION = 300,
     NUMBER_FLOAT = 301,
     NUMBER_INT = 302,
     NUMBER_INT64 = 303,
     BOOLEAN = 304,
     NULLVALUE = 305,
     STRING = 306,
     IDENTIFIER = 307,
     COMMA = 308,
     Unknown_CHARACTER = 309,
     UMINUS = 310
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 93 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"

  QgsSQLStatement::Node* node;
  QgsSQLStatement::NodeColumnRef* nodecolumnref;
  QgsSQLStatement::NodeSelectedColumn* nodeselectedcolumn;
  QgsSQLStatement::NodeSelect* nodeselect;
  QgsSQLStatement::NodeList* nodelist;
  QgsSQLStatement::NodeJoin* nodejoin;
  QgsSQLStatement::NodeTableDef* nodetabledef;
  QgsSQLStatement::NodeColumnSorted* nodecolumnsorted;
  QList<QgsSQLStatement::NodeColumnSorted*>* columnsortedlist;
  QList<QgsSQLStatement::NodeJoin*>* joinlist;
  QList<QgsSQLStatement::NodeTableDef*>* tablelist;
  QList<QgsSQLStatement::NodeSelectedColumn*>* selectedcolumnlist;
  double numberFloat;
  int    numberInt;
  qlonglong numberInt64;
  bool   boolVal;
  QString* text;
  QgsSQLStatement::BinaryOperator b_op;
  QgsSQLStatement::UnaryOperator u_op;
  QgsSQLStatement::JoinType jointype;
  QList<QString>* usinglist;



/* Line 214 of yacc.c  */
#line 266 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 278 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNRULES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,    57,     2,     2,     2,     2,    58,     2,     2,     2,
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
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    15,    19,    23,    27,
      31,    35,    39,    43,    47,    50,    56,    63,    69,    76,
      78,    82,    86,    88,    90,    92,    94,    96,    98,   100,
     102,   106,   111,   115,   119,   123,   127,   131,   135,   139,
     143,   147,   150,   153,   160,   162,   165,   168,   176,   180,
     182,   184,   187,   189,   193,   198,   204,   210,   217,   220,
     222,   223,   226,   228,   231,   235,   238,   242,   245,   248,
     251,   256,   263,   265,   269,   271,   274,   275,   277,   278,
     282,   286,   288,   290,   293,   296,   298,   301,   305
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    66,    -1,    64,    -1,    61,     4,    61,
      -1,    61,     3,    61,    -1,    61,     5,    61,    -1,    61,
       6,    61,    -1,    61,     7,    61,    -1,    61,     8,    61,
      -1,    61,     9,    61,    -1,    61,    10,    61,    -1,    61,
      11,    61,    -1,    61,    12,    61,    -1,    21,    61,    -1,
      61,    22,    56,    63,    57,    -1,    61,    21,    22,    56,
      63,    57,    -1,    61,    23,    64,     4,    64,    -1,    61,
      21,    23,    64,     4,    64,    -1,    52,    -1,    52,    58,
      52,    -1,    63,    53,    61,    -1,    61,    -1,    46,    -1,
      47,    -1,    48,    -1,    49,    -1,    51,    -1,    50,    -1,
      62,    -1,    56,    61,    57,    -1,    52,    56,    63,    57,
      -1,    52,    56,    57,    -1,    64,    13,    64,    -1,    64,
      14,    64,    -1,    64,    15,    64,    -1,    64,    17,    64,
      -1,    64,    16,    64,    -1,    64,    18,    64,    -1,    64,
      20,    64,    -1,    64,    19,    64,    -1,    13,    64,    -1,
      14,    64,    -1,    27,    56,    61,    28,    52,    57,    -1,
      24,    -1,    24,    25,    -1,    24,    26,    -1,    65,    67,
      30,    80,    75,    70,    76,    -1,    67,    53,    68,    -1,
      68,    -1,    61,    -1,    61,    69,    -1,    15,    -1,    52,
      58,    15,    -1,    52,    56,    15,    57,    -1,    52,    56,
      15,    57,    69,    -1,    52,    56,    26,    62,    57,    -1,
      52,    56,    26,    62,    57,    69,    -1,    28,    52,    -1,
      52,    -1,    -1,    33,    61,    -1,    29,    -1,    38,    29,
      -1,    38,    41,    29,    -1,    39,    29,    -1,    39,    41,
      29,    -1,    43,    29,    -1,    42,    29,    -1,    40,    29,
      -1,    71,    79,    31,    61,    -1,    71,    79,    32,    56,
      73,    57,    -1,    52,    -1,    73,    53,    52,    -1,    72,
      -1,    74,    72,    -1,    -1,    74,    -1,    -1,    34,    35,
      77,    -1,    77,    53,    78,    -1,    78,    -1,    62,    -1,
      62,    36,    -1,    62,    37,    -1,    52,    -1,    52,    69,
      -1,    80,    53,    79,    -1,    79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   207,   207,   214,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   231,   232,   234,   235,   240,
     246,   255,   259,   265,   266,   267,   268,   269,   270,   272,
     277,   279,   285,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   302,   311,   315,   319,   326,   335,   339,
     344,   349,   356,   361,   367,   383,   402,   421,   445,   450,
     453,   454,   461,   465,   469,   473,   477,   481,   485,   489,
     496,   500,   508,   513,   521,   525,   531,   532,   539,   540,
     548,   552,   557,   561,   565,   572,   578,   587,   591
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "EQ", "NE", "LE", "GE",
  "LT", "GT", "LIKE", "IS", "PLUS", "MINUS", "MUL_OR_STAR", "DIV",
  "INTDIV", "MOD", "CONCAT", "POW", "NOT", "IN", "BETWEEN", "SELECT",
  "ALL", "DISTINCT", "CAST", "AS", "JOIN", "FROM", "ON", "USING", "WHERE",
  "ORDER", "BY", "ASC", "DESC", "LEFT", "RIGHT", "INNER", "OUTER", "CROSS",
  "FULL", "NATURAL", "UNION", "NUMBER_FLOAT", "NUMBER_INT", "NUMBER_INT64",
  "BOOLEAN", "NULLVALUE", "STRING", "IDENTIFIER", "COMMA",
  "Unknown_CHARACTER", "UMINUS", "'('", "')'", "'.'", "$accept", "root",
  "expr", "column_name", "expr_list", "expr_non_logical", "select_type",
  "select_statement", "selected_column_list", "selected_column",
  "as_clause", "opt_where", "join_qualifier", "join", "using_list",
  "join_list", "opt_joins", "opt_order_by", "sort_spec_list", "sort_spec",
  "table_def", "table_list", 0
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
     305,   306,   307,   308,   309,   310,    40,    41,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    78,    79,    79,    80,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     5,     6,     5,     6,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     6,     1,     2,     2,     7,     3,     1,
       1,     2,     1,     3,     4,     5,     5,     6,     2,     1,
       0,     2,     1,     2,     3,     2,     3,     2,     2,     2,
       4,     6,     1,     3,     1,     2,     0,     1,     0,     3,
       3,     1,     1,     2,     2,     1,     2,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    44,     0,     0,     2,    45,    46,     1,     0,     0,
      52,     0,     0,    23,    24,    25,    26,    28,    27,    19,
       0,    50,    29,     3,     0,    49,    19,    41,    42,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    22,     0,    53,    20,
      30,     5,     4,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,    58,    33,    34,    35,    37,
      36,    38,    40,    39,    85,    88,    76,    48,     0,    54,
      19,     0,     0,    31,     0,     0,     0,     0,    86,    62,
       0,     0,     0,     0,     0,     0,     0,    74,    77,    60,
       0,    55,    56,    21,     0,     0,    15,    17,    63,     0,
      65,     0,    69,    68,    67,    87,     0,    75,     0,    78,
      43,    57,    16,    18,    64,    66,     0,     0,    61,     0,
      47,    70,     0,     0,    72,     0,    82,    79,    81,     0,
      71,    83,    84,     0,    73,    80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    66,    22,    67,    23,     3,     4,    24,    25,
      49,   139,   116,   117,   155,   118,   119,   150,   157,   158,
      95,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -93
static const yytype_int16 yypact[] =
{
      -6,    29,    15,   166,   -93,   -93,   -93,   -93,    45,    45,
     -93,   177,    20,   -93,   -93,   -93,   -93,   -93,   -93,   -46,
     177,   100,   -93,   305,   -24,   -93,    59,   -93,   -93,   285,
     177,   111,   -10,    57,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,    96,    25,    45,    46,   -93,   -93,
      45,    45,    45,    45,    45,    45,    45,    45,    61,   166,
     126,    64,   231,    70,    79,   -93,   257,   -44,   -93,   -93,
     -93,   277,   285,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,    80,    45,   177,    69,   -93,   229,   229,   110,   110,
     110,   110,   -93,   110,    -9,   -93,   157,   -93,    92,    -9,
      90,    93,   177,   -93,   177,   297,     0,    45,   -93,   -93,
     -15,   -13,   120,   122,   125,    61,    61,   -93,   -18,   123,
      98,   -93,    -9,   257,    17,    45,   -93,   305,   -93,   135,
     -93,   136,   -93,   -93,   -93,   -93,   102,   -93,   177,   132,
     -93,   -93,   -93,   305,   -93,   -93,   177,   113,   257,   149,
     -93,   257,   118,    79,   -93,    18,   105,   139,   -93,   119,
     -93,   -93,   -93,    79,   -93,   -93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -93,    -3,   -63,   -60,    -5,   -93,   -93,   -93,   129,
     -92,   -93,   -93,    67,   -93,   -93,   -93,   -93,   -93,    26,
      30,   -93
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      21,   101,   108,    27,    28,    68,    58,   121,    29,   102,
      31,   109,    32,   103,   128,     7,   130,    33,     1,    47,
     110,   111,   112,   106,   113,   114,   129,    62,   131,    59,
     141,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    84,    69,    48,   124,    86,    87,    88,    89,    90,
      91,    92,    93,   102,     5,     6,    21,   126,     8,     9,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     102,   159,    12,   107,   142,   160,    30,   105,    44,    45,
      46,    83,    50,    51,    52,    53,    54,    55,    56,    57,
     156,    13,    14,    15,    16,    17,    18,    26,    85,   123,
     156,    20,   127,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    94,    70,    60,    69,    61,    81,    82,
     143,    44,    45,    46,     8,     9,    63,    99,    47,    56,
      57,   100,    11,   146,   147,   148,   104,    64,    12,     8,
       9,   161,   162,   151,   120,   135,   136,    11,    61,   132,
     122,   133,    48,    12,   134,   140,   138,    13,    14,    15,
      16,    17,    18,    26,   144,   145,   149,    20,    65,   152,
     154,   164,    13,    14,    15,    16,    17,    18,    26,     8,
       9,    10,    20,    65,   153,   137,   109,    11,    97,   165,
       8,     9,   163,    12,     0,   110,   111,   112,    11,   113,
     114,     0,     0,     0,    12,     0,     0,     0,     0,     0,
     115,     0,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,    20,    13,    14,    15,    16,    17,    18,    26,
       0,     0,     0,    20,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    52,    53,    54,    55,    56,    57,
       0,     0,    44,    45,    46,     0,     0,     0,     0,    98,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
      46,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   125,     0,     0,     0,     0,    44,    45,    46,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    50,    51,
      52,    53,    54,    55,    56,    57
};

static const yytype_int16 yycheck[] =
{
       3,    64,    94,     8,     9,    15,    30,    99,    11,    53,
      56,    29,    58,    57,    29,     0,    29,    20,    24,    28,
      38,    39,    40,    83,    42,    43,    41,    30,    41,    53,
     122,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    46,    52,    52,   104,    50,    51,    52,    53,    54,
      55,    56,    57,    53,    25,    26,    59,    57,    13,    14,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      53,    53,    27,     4,    57,    57,    56,    82,    21,    22,
      23,    56,    13,    14,    15,    16,    17,    18,    19,    20,
     153,    46,    47,    48,    49,    50,    51,    52,    52,   102,
     163,    56,   107,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    52,    57,    56,    52,    58,    22,    23,
     125,    21,    22,    23,    13,    14,    15,    57,    28,    19,
      20,    52,    21,    31,    32,   138,    56,    26,    27,    13,
      14,    36,    37,   146,    52,   115,   116,    21,    58,    29,
      57,    29,    52,    27,    29,    57,    33,    46,    47,    48,
      49,    50,    51,    52,    29,    29,    34,    56,    57,    56,
      52,    52,    46,    47,    48,    49,    50,    51,    52,    13,
      14,    15,    56,    57,    35,   118,    29,    21,    59,   163,
      13,    14,    53,    27,    -1,    38,    39,    40,    21,    42,
      43,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    56,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    15,    16,    17,    18,    19,    20,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       5,     6,     7,     8,     9,    10,    11,    12,    21,    22,
      23,     4,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    13,    14,
      15,    16,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    60,    65,    66,    25,    26,     0,    13,    14,
      15,    21,    27,    46,    47,    48,    49,    50,    51,    52,
      56,    61,    62,    64,    67,    68,    52,    64,    64,    61,
      56,    56,    58,    61,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    21,    22,    23,    28,    52,    69,
      13,    14,    15,    16,    17,    18,    19,    20,    30,    53,
      56,    58,    61,    15,    26,    57,    61,    63,    15,    52,
      57,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    22,    23,    56,    64,    52,    64,    64,    64,    64,
      64,    64,    64,    64,    52,    79,    80,    68,    28,    57,
      52,    62,    53,    57,    56,    64,    63,     4,    69,    29,
      38,    39,    40,    42,    43,    53,    71,    72,    74,    75,
      52,    69,    57,    61,    63,     4,    57,    64,    29,    41,
      29,    41,    29,    29,    29,    79,    79,    72,    33,    70,
      57,    69,    57,    64,    29,    29,    31,    32,    61,    34,
      76,    61,    56,    35,    52,    73,    62,    77,    78,    53,
      57,    36,    37,    53,    52,    78
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sqlstatement_parser_context* parser_ctx)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser_ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    sqlstatement_parser_context* parser_ctx;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sqlstatement_parser_context* parser_ctx)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser_ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    sqlstatement_parser_context* parser_ctx;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, sqlstatement_parser_context* parser_ctx)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser_ctx)
    YYSTYPE *yyvsp;
    int yyrule;
    sqlstatement_parser_context* parser_ctx;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, sqlstatement_parser_context* parser_ctx)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser_ctx)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    sqlstatement_parser_context* parser_ctx;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser_ctx);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 51: /* "STRING" */

/* Line 1000 of yacc.c  */
#line 193 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1365 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 52: /* "IDENTIFIER" */

/* Line 1000 of yacc.c  */
#line 193 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1374 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 61: /* "expr" */

/* Line 1000 of yacc.c  */
#line 190 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->node); };

/* Line 1000 of yacc.c  */
#line 1383 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 62: /* "column_name" */

/* Line 1000 of yacc.c  */
#line 192 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->nodecolumnref); };

/* Line 1000 of yacc.c  */
#line 1392 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 63: /* "expr_list" */

/* Line 1000 of yacc.c  */
#line 191 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->nodelist); };

/* Line 1000 of yacc.c  */
#line 1401 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 64: /* "expr_non_logical" */

/* Line 1000 of yacc.c  */
#line 190 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->node); };

/* Line 1000 of yacc.c  */
#line 1410 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 66: /* "select_statement" */

/* Line 1000 of yacc.c  */
#line 195 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->nodeselect); };

/* Line 1000 of yacc.c  */
#line 1419 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 67: /* "selected_column_list" */

/* Line 1000 of yacc.c  */
#line 200 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ qDeleteAll(*(yyvaluep->selectedcolumnlist)); delete (yyvaluep->selectedcolumnlist); };

/* Line 1000 of yacc.c  */
#line 1428 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 68: /* "selected_column" */

/* Line 1000 of yacc.c  */
#line 196 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->nodeselectedcolumn); };

/* Line 1000 of yacc.c  */
#line 1437 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 69: /* "as_clause" */

/* Line 1000 of yacc.c  */
#line 193 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->text); };

/* Line 1000 of yacc.c  */
#line 1446 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 72: /* "join" */

/* Line 1000 of yacc.c  */
#line 198 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->nodejoin); };

/* Line 1000 of yacc.c  */
#line 1455 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 73: /* "using_list" */

/* Line 1000 of yacc.c  */
#line 199 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->usinglist); };

/* Line 1000 of yacc.c  */
#line 1464 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 74: /* "join_list" */

/* Line 1000 of yacc.c  */
#line 202 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ qDeleteAll(*(yyvaluep->joinlist)); delete (yyvaluep->joinlist); };

/* Line 1000 of yacc.c  */
#line 1473 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 77: /* "sort_spec_list" */

/* Line 1000 of yacc.c  */
#line 201 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ qDeleteAll(*(yyvaluep->columnsortedlist)); delete (yyvaluep->columnsortedlist); };

/* Line 1000 of yacc.c  */
#line 1482 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 78: /* "sort_spec" */

/* Line 1000 of yacc.c  */
#line 197 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->nodecolumnsorted); };

/* Line 1000 of yacc.c  */
#line 1491 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 79: /* "table_def" */

/* Line 1000 of yacc.c  */
#line 194 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ delete (yyvaluep->nodetabledef); };

/* Line 1000 of yacc.c  */
#line 1500 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
	break;
      case 80: /* "table_list" */

/* Line 1000 of yacc.c  */
#line 203 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
	{ qDeleteAll(*(yyvaluep->tablelist)); delete (yyvaluep->tablelist); };

/* Line 1000 of yacc.c  */
#line 1509 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
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
int yyparse (sqlstatement_parser_context* parser_ctx);
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
yyparse (sqlstatement_parser_context* parser_ctx)
#else
int
yyparse (parser_ctx)
    sqlstatement_parser_context* parser_ctx;
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
#line 207 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { parser_ctx->rootNode = (yyvsp[(1) - (1)].nodeselect); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 215 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 219 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 220 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 221 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 222 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 223 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 224 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 225 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 226 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 227 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 228 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 229 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeUnaryOperator((yyvsp[(1) - (2)].u_op), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 231 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeInOperator((yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].nodelist), false);  ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 232 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeInOperator((yyvsp[(1) - (6)].node), (yyvsp[(5) - (6)].nodelist), true); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 234 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeBetweenOperator((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), false);  ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 235 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeBetweenOperator((yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node), true);  ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 241 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodecolumnref) = new QgsSQLStatement::NodeColumnRef( *(yyvsp[(1) - (1)].text), false );
            delete (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 247 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodecolumnref) = new QgsSQLStatement::NodeColumnRef( *(yyvsp[(1) - (3)].text), *(yyvsp[(3) - (3)].text), false );
            delete (yyvsp[(1) - (3)].text);
            delete (yyvsp[(3) - (3)].text);
        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 256 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.nodelist) = (yyvsp[(1) - (3)].nodelist); (yyvsp[(1) - (3)].nodelist)->append((yyvsp[(3) - (3)].node));
       ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 259 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.nodelist) = new QgsSQLStatement::NodeList(); (yyval.nodelist)->append((yyvsp[(1) - (1)].node)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 265 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[(1) - (1)].numberFloat)) ); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 266 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[(1) - (1)].numberInt)) ); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 267 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[(1) - (1)].numberInt64)) ); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 268 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[(1) - (1)].boolVal)) ); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 269 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant(*(yyvsp[(1) - (1)].text)) ); delete (yyvsp[(1) - (1)].text); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 270 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant() ); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 273 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.node) = (yyvsp[(1) - (1)].nodecolumnref);
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 277 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 280 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.node) = new QgsSQLStatement::NodeFunction(*(yyvsp[(1) - (4)].text), (yyvsp[(3) - (4)].nodelist));
          delete (yyvsp[(1) - (4)].text);
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 286 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.node) = new QgsSQLStatement::NodeFunction(*(yyvsp[(1) - (3)].text), new QgsSQLStatement::NodeList());
          delete (yyvsp[(1) - (3)].text);
        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 291 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 292 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 293 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 294 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 295 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 296 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 297 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 298 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = BINOP((yyvsp[(2) - (3)].b_op), (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 299 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 300 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.node) = new QgsSQLStatement::NodeUnaryOperator( QgsSQLStatement::uoMinus, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 303 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.node) = new QgsSQLStatement::NodeCast((yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].text));
            delete (yyvsp[(5) - (6)].text);
        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 312 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.boolVal) = false;
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 316 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.boolVal) = false;
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 320 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.boolVal) = true;
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 327 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodeselect) = new QgsSQLStatement::NodeSelect(*(yyvsp[(4) - (7)].tablelist), *(yyvsp[(2) - (7)].selectedcolumnlist), (yyvsp[(1) - (7)].boolVal));
            delete (yyvsp[(2) - (7)].selectedcolumnlist);
            delete (yyvsp[(4) - (7)].tablelist);
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 336 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.selectedcolumnlist) = (yyvsp[(1) - (3)].selectedcolumnlist); (yyvsp[(1) - (3)].selectedcolumnlist)->append((yyvsp[(3) - (3)].nodeselectedcolumn));
       ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 340 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.selectedcolumnlist) = new QList<QgsSQLStatement::NodeSelectedColumn*>(); (yyval.selectedcolumnlist)->append((yyvsp[(1) - (1)].nodeselectedcolumn)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 345 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn((yyvsp[(1) - (1)].node));
        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 350 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn((yyvsp[(1) - (2)].node));
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[(2) - (2)].text));
            delete (yyvsp[(2) - (2)].text);
        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 357 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( new QgsSQLStatement::NodeColumnRef("*", true) );
        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 362 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( new QgsSQLStatement::NodeColumnRef(*(yyvsp[(1) - (3)].text), "*", true) );
            delete (yyvsp[(1) - (3)].text);
        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 368 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            // special case for COUNT(*), confirm it.
            if( (yyvsp[(1) - (4)].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QString( QObject::tr("Syntax Error with %1(*).") ).arg(*(yyvsp[(1) - (4)].text)));
                delete (yyvsp[(1) - (4)].text);
                YYERROR;
            }
            delete (yyvsp[(1) - (4)].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            nodeList->append( new QgsSQLStatement::NodeColumnRef("*", true) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( 
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 384 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            // special case for COUNT(*), confirm it.
            if( (yyvsp[(1) - (5)].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QString( QObject::tr("Syntax Error with %1(*).") ).arg(*(yyvsp[(1) - (5)].text)));
                delete (yyvsp[(1) - (5)].text);
                delete (yyvsp[(5) - (5)].text);
                YYERROR;
            }
            delete (yyvsp[(1) - (5)].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            nodeList->append( new QgsSQLStatement::NodeColumnRef("*", true) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( 
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[(5) - (5)].text));
            delete (yyvsp[(5) - (5)].text);
        ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 403 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            // special case for COUNT(DISTINCT x), confirm it.
            if( (yyvsp[(1) - (5)].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QObject::tr(
                        "DISTINCT keyword can only be used in COUNT() operator.") );
                delete (yyvsp[(1) - (5)].text);
                delete (yyvsp[(4) - (5)].nodecolumnref);
                YYERROR;
            }
            delete (yyvsp[(1) - (5)].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            (yyvsp[(4) - (5)].nodecolumnref)->setDistinct();
            nodeList->append( (yyvsp[(4) - (5)].nodecolumnref) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( 
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 422 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            // special case for COUNT(DISTINCT x), confirm it.
            if( (yyvsp[(1) - (6)].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QObject::tr(
                        "DISTINCT keyword can only be used in COUNT() operator.") );
                delete (yyvsp[(1) - (6)].text);
                delete (yyvsp[(4) - (6)].nodecolumnref);
                delete (yyvsp[(6) - (6)].text);
                YYERROR;
            }
            delete (yyvsp[(1) - (6)].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            (yyvsp[(4) - (6)].nodecolumnref)->setDistinct();
            nodeList->append( (yyvsp[(4) - (6)].nodecolumnref) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( 
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[(6) - (6)].text));
            delete (yyvsp[(6) - (6)].text);
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 446 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.text) = (yyvsp[(2) - (2)].text);
        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 455 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            parser_ctx->setWhere((yyvsp[(2) - (2)].node));
        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 462 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.jointype) = QgsSQLStatement::jtDefault;
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 466 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.jointype) = QgsSQLStatement::jtLeft;
        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 470 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.jointype) = QgsSQLStatement::jtLeftOuter;
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 474 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.jointype) = QgsSQLStatement::jtRight;
        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 478 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.jointype) = QgsSQLStatement::jtRightOuter;
        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 482 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.jointype) = QgsSQLStatement::jtFull;
        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 486 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.jointype) = QgsSQLStatement::jtCross;
        ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 490 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.jointype) = QgsSQLStatement::jtInner;
        ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 497 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodejoin) = new QgsSQLStatement::NodeJoin((yyvsp[(2) - (4)].nodetabledef), (yyvsp[(4) - (4)].node), (yyvsp[(1) - (4)].jointype));
        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 501 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodejoin) = new QgsSQLStatement::NodeJoin((yyvsp[(2) - (6)].nodetabledef), *(yyvsp[(5) - (6)].usinglist), (yyvsp[(1) - (6)].jointype));
            delete (yyvsp[(5) - (6)].usinglist);
        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 509 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.usinglist) = new QList<QString>(); (yyval.usinglist)->push_back(*(yyvsp[(1) - (1)].text));
          delete (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 514 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.usinglist) = (yyvsp[(1) - (3)].usinglist); (yyvsp[(1) - (3)].usinglist)->push_back(*(yyvsp[(3) - (3)].text));
          delete (yyvsp[(3) - (3)].text);
        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 522 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.joinlist) = new QList<QgsSQLStatement::NodeJoin*>(); (yyval.joinlist)->push_back((yyvsp[(1) - (1)].nodejoin));
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 526 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.joinlist) = (yyvsp[(1) - (2)].joinlist); (yyvsp[(1) - (2)].joinlist)->push_back((yyvsp[(2) - (2)].nodejoin));
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 533 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            parser_ctx->setJoins( *(yyvsp[(1) - (1)].joinlist) );
            delete (yyvsp[(1) - (1)].joinlist);
        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 541 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          parser_ctx->setOrderBy(*(yyvsp[(3) - (3)].columnsortedlist));
          delete (yyvsp[(3) - (3)].columnsortedlist);
      ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 549 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.columnsortedlist) = (yyvsp[(1) - (3)].columnsortedlist); (yyvsp[(1) - (3)].columnsortedlist)->push_back((yyvsp[(3) - (3)].nodecolumnsorted));
       ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 553 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.columnsortedlist) = new QList<QgsSQLStatement::NodeColumnSorted*>(); (yyval.columnsortedlist)->push_back((yyvsp[(1) - (1)].nodecolumnsorted)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 558 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[(1) - (1)].nodecolumnref), true );
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 562 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[(1) - (2)].nodecolumnref), true );
        ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 566 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[(1) - (2)].nodecolumnref), false );
        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 573 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[(1) - (1)].text));
        delete (yyvsp[(1) - (1)].text);
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 579 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[(1) - (2)].text), *(yyvsp[(2) - (2)].text));
        delete (yyvsp[(1) - (2)].text);
        delete (yyvsp[(2) - (2)].text);
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 588 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    {
          (yyval.tablelist) = (yyvsp[(1) - (3)].tablelist); (yyvsp[(1) - (3)].tablelist)->push_back((yyvsp[(3) - (3)].nodetabledef));
       ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 592 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"
    { (yyval.tablelist) = new QList<QgsSQLStatement::NodeTableDef*>(); (yyval.tablelist)->push_back((yyvsp[(1) - (1)].nodetabledef)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2561 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.cpp"
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
#line 595 "C:/builds/nextgisqgis-dev/qgis/src/core/qgssqlstatementparser.yy"



// returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
QgsSQLStatement::Node* parse(const QString& str, QString& parserErrorMsg)
{
  sqlstatement_parser_context ctx;
  ctx.rootNode = 0;

  sqlstatement_lex_init(&ctx.flex_scanner);
  sqlstatement__scan_string(str.toUtf8().constData(), ctx.flex_scanner);
  int res = sqlstatement_parse(&ctx);
  sqlstatement_lex_destroy(ctx.flex_scanner);

  // list should be empty when parsing was OK
  if (res == 0) // success?
  {
    ctx.rootNode->setWhere(ctx.whereExp);
    ctx.rootNode->setJoins(ctx.joinList);
    ctx.rootNode->setOrderBy(ctx.orderByList);
    return ctx.rootNode;
  }
  else // error?
  {
    parserErrorMsg = ctx.errorMsg;
    delete ctx.rootNode;
    delete ctx.whereExp;
    qDeleteAll(ctx.joinList);
    qDeleteAll(ctx.orderByList);
    return nullptr;
  }
}


void sqlstatement_error(sqlstatement_parser_context* parser_ctx, const QString& errorMsg)
{
  parser_ctx->errorMsg = errorMsg;
}


