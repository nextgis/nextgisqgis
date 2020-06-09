/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sqlstatement_parse
#define yylex           sqlstatement_lex
#define yyerror         sqlstatement_error
#define yydebug         sqlstatement_debug
#define yynerrs         sqlstatement_nerrs

/* First part of user prologue.  */
#line 18 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"

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

  // variable where the parser error will be stored
  QString errorMsg;
  // root node of the sqlstatement
  QgsSQLStatement::NodeSelect* rootNode;

  QgsSQLStatement::Node* whereExp;

  QList<QgsSQLStatement::NodeJoin*> joinList;

  QList<QgsSQLStatement::NodeColumnSorted*> orderByList;

  sqlstatement_parser_context() : rootNode( nullptr ), whereExp( nullptr ) {}

  void setWhere( QgsSQLStatement::Node* whereExp ) { this->whereExp = whereExp; }

  void setJoins( const QList<QgsSQLStatement::NodeJoin*>& joinList ) { this->joinList = joinList; }

  void setOrderBy( const QList<QgsSQLStatement::NodeColumnSorted*>& orderByList ) { this->orderByList = orderByList; }
};

#define scanner parser_ctx->flex_scanner

// we want verbose error messages
#define YYERROR_VERBOSE 1

#define BINOP(x, y, z)  new QgsSQLStatement::NodeBinaryOperator(x, y, z)


#line 142 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_SQLSTATEMENT_HOME_USER_WORKSPACE_NEXTGIS_NEXTGISQGIS_NEXTGISQGIS_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED
# define YY_SQLSTATEMENT_HOME_USER_WORKSPACE_NEXTGIS_NEXTGISQGIS_NEXTGISQGIS_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sqlstatement_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 91 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"

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

#line 274 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sqlstatement_parse (sqlstatement_parser_context* parser_ctx);

#endif /* !YY_SQLSTATEMENT_HOME_USER_WORKSPACE_NEXTGIS_NEXTGISQGIS_NEXTGISQGIS_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

#define YYUNDEFTOK  2
#define YYMAXUTOK   310


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   205,   205,   212,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   229,   230,   232,   233,   238,
     244,   253,   257,   263,   264,   265,   266,   267,   268,   270,
     275,   277,   283,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   300,   309,   313,   317,   324,   333,   337,
     342,   347,   354,   359,   365,   381,   400,   419,   443,   448,
     451,   452,   459,   463,   467,   471,   475,   479,   483,   487,
     494,   498,   506,   511,   519,   523,   529,   530,   537,   538,
     546,   550,   555,   559,   563,   570,   576,   585,   589
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
  "table_def", "table_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    40,    41,    46
};
# endif

#define YYPACT_NINF (-93)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -93,    -3,   -63,   -60,    -5,   -93,   -93,   -93,   129,
     -92,   -93,   -93,    67,   -93,   -93,   -93,   -93,   -93,    26,
      30,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    66,    22,    67,    23,     3,     4,    24,    25,
      49,   139,   116,   117,   155,   118,   119,   150,   157,   158,
      95,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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
static const yytype_int8 yystos[] =
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

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (parser_ctx, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, parser_ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (parser_ctx);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, parser_ctx);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule, sqlstatement_parser_context* parser_ctx)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              , parser_ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser_ctx); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  YYUSE (yyvaluep);
  YYUSE (parser_ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 51: /* STRING  */
#line 191 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).text); }
#line 1339 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 52: /* IDENTIFIER  */
#line 191 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).text); }
#line 1345 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 61: /* expr  */
#line 188 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).node); }
#line 1351 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 62: /* column_name  */
#line 190 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodecolumnref); }
#line 1357 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 63: /* expr_list  */
#line 189 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodelist); }
#line 1363 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 64: /* expr_non_logical  */
#line 188 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).node); }
#line 1369 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 66: /* select_statement  */
#line 193 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodeselect); }
#line 1375 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 67: /* selected_column_list  */
#line 198 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { qDeleteAll(*((*yyvaluep).selectedcolumnlist)); delete ((*yyvaluep).selectedcolumnlist); }
#line 1381 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 68: /* selected_column  */
#line 194 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodeselectedcolumn); }
#line 1387 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 69: /* as_clause  */
#line 191 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).text); }
#line 1393 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 72: /* join  */
#line 196 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodejoin); }
#line 1399 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 73: /* using_list  */
#line 197 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).usinglist); }
#line 1405 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 74: /* join_list  */
#line 200 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { qDeleteAll(*((*yyvaluep).joinlist)); delete ((*yyvaluep).joinlist); }
#line 1411 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 77: /* sort_spec_list  */
#line 199 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { qDeleteAll(*((*yyvaluep).columnsortedlist)); delete ((*yyvaluep).columnsortedlist); }
#line 1417 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 78: /* sort_spec  */
#line 195 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodecolumnsorted); }
#line 1423 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 79: /* table_def  */
#line 192 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodetabledef); }
#line 1429 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

    case 80: /* table_list  */
#line 201 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
            { qDeleteAll(*((*yyvaluep).tablelist)); delete ((*yyvaluep).tablelist); }
#line 1435 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (sqlstatement_parser_context* parser_ctx)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, scanner);
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 205 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                       { parser_ctx->rootNode = (yyvsp[0].nodeselect); }
#line 1709 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 3:
#line 213 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 1717 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 4:
#line 217 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1723 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 5:
#line 218 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1729 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 6:
#line 219 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1735 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 7:
#line 220 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1741 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 8:
#line 221 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1747 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 9:
#line 222 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1753 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 10:
#line 223 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1759 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 11:
#line 224 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1765 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 12:
#line 225 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1771 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 13:
#line 226 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1777 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 14:
#line 227 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                { (yyval.node) = new QgsSQLStatement::NodeUnaryOperator((yyvsp[-1].u_op), (yyvsp[0].node)); }
#line 1783 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 15:
#line 229 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                    { (yyval.node) = new QgsSQLStatement::NodeInOperator((yyvsp[-4].node), (yyvsp[-1].nodelist), false);  }
#line 1789 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 16:
#line 230 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                    { (yyval.node) = new QgsSQLStatement::NodeInOperator((yyvsp[-5].node), (yyvsp[-1].nodelist), true); }
#line 1795 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 17:
#line 232 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                             { (yyval.node) = new QgsSQLStatement::NodeBetweenOperator((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), false);  }
#line 1801 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 18:
#line 233 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                                 { (yyval.node) = new QgsSQLStatement::NodeBetweenOperator((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), true);  }
#line 1807 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 19:
#line 239 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnref) = new QgsSQLStatement::NodeColumnRef( *(yyvsp[0].text), false );
            delete (yyvsp[0].text);
        }
#line 1816 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 20:
#line 245 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnref) = new QgsSQLStatement::NodeColumnRef( *(yyvsp[-2].text), *(yyvsp[0].text), false );
            delete (yyvsp[-2].text);
            delete (yyvsp[0].text);
        }
#line 1826 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 21:
#line 254 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
       {
          (yyval.nodelist) = (yyvsp[-2].nodelist); (yyvsp[-2].nodelist)->append((yyvsp[0].node));
       }
#line 1834 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 22:
#line 257 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                        { (yyval.nodelist) = new QgsSQLStatement::NodeList(); (yyval.nodelist)->append((yyvsp[0].node)); }
#line 1840 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 23:
#line 263 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberFloat)) ); }
#line 1846 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 24:
#line 264 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberInt)) ); }
#line 1852 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 25:
#line 265 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberInt64)) ); }
#line 1858 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 26:
#line 266 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].boolVal)) ); }
#line 1864 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 27:
#line 267 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant(*(yyvsp[0].text)) ); delete (yyvsp[0].text); }
#line 1870 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 28:
#line 268 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant() ); }
#line 1876 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 29:
#line 271 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.node) = (yyvsp[0].nodecolumnref);
        }
#line 1884 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 30:
#line 275 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 1890 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 31:
#line 278 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
          (yyval.node) = new QgsSQLStatement::NodeFunction(*(yyvsp[-3].text), (yyvsp[-1].nodelist));
          delete (yyvsp[-3].text);
        }
#line 1899 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 32:
#line 284 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
          (yyval.node) = new QgsSQLStatement::NodeFunction(*(yyvsp[-2].text), new QgsSQLStatement::NodeList());
          delete (yyvsp[-2].text);
        }
#line 1908 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 33:
#line 289 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1914 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 34:
#line 290 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1920 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 35:
#line 291 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1926 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 36:
#line 292 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1932 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 37:
#line 293 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1938 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 38:
#line 294 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1944 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 39:
#line 295 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1950 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 40:
#line 296 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1956 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 41:
#line 297 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                         { (yyval.node) = (yyvsp[0].node); }
#line 1962 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 42:
#line 298 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
                                          { (yyval.node) = new QgsSQLStatement::NodeUnaryOperator( QgsSQLStatement::uoMinus, (yyvsp[0].node)); }
#line 1968 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 43:
#line 301 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.node) = new QgsSQLStatement::NodeCast((yyvsp[-3].node), *(yyvsp[-1].text));
            delete (yyvsp[-1].text);
        }
#line 1977 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 44:
#line 310 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.boolVal) = false;
        }
#line 1985 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 45:
#line 314 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.boolVal) = false;
        }
#line 1993 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 46:
#line 318 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.boolVal) = true;
        }
#line 2001 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 47:
#line 325 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselect) = new QgsSQLStatement::NodeSelect(*(yyvsp[-3].tablelist), *(yyvsp[-5].selectedcolumnlist), (yyvsp[-6].boolVal));
            delete (yyvsp[-5].selectedcolumnlist);
            delete (yyvsp[-3].tablelist);
        }
#line 2011 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 48:
#line 334 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
       {
          (yyval.selectedcolumnlist) = (yyvsp[-2].selectedcolumnlist); (yyvsp[-2].selectedcolumnlist)->append((yyvsp[0].nodeselectedcolumn));
       }
#line 2019 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 49:
#line 338 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
      { (yyval.selectedcolumnlist) = new QList<QgsSQLStatement::NodeSelectedColumn*>(); (yyval.selectedcolumnlist)->append((yyvsp[0].nodeselectedcolumn)); }
#line 2025 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 50:
#line 343 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn((yyvsp[0].node));
        }
#line 2033 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 51:
#line 348 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn((yyvsp[-1].node));
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[0].text));
            delete (yyvsp[0].text);
        }
#line 2043 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 52:
#line 355 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( new QgsSQLStatement::NodeColumnRef("*", true) );
        }
#line 2051 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 53:
#line 360 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( new QgsSQLStatement::NodeColumnRef(*(yyvsp[-2].text), "*", true) );
            delete (yyvsp[-2].text);
        }
#line 2060 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 54:
#line 366 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            // special case for COUNT(*), confirm it.
            if( (yyvsp[-3].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QString( QObject::tr("Syntax Error with %1(*).") ).arg(*(yyvsp[-3].text)));
                delete (yyvsp[-3].text);
                YYERROR;
            }
            delete (yyvsp[-3].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            nodeList->append( new QgsSQLStatement::NodeColumnRef("*", true) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn(
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
        }
#line 2079 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 55:
#line 382 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            // special case for COUNT(*), confirm it.
            if( (yyvsp[-4].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QString( QObject::tr("Syntax Error with %1(*).") ).arg(*(yyvsp[-4].text)));
                delete (yyvsp[-4].text);
                delete (yyvsp[0].text);
                YYERROR;
            }
            delete (yyvsp[-4].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            nodeList->append( new QgsSQLStatement::NodeColumnRef("*", true) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn(
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[0].text));
            delete (yyvsp[0].text);
        }
#line 2101 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 56:
#line 401 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            // special case for COUNT(DISTINCT x), confirm it.
            if( (yyvsp[-4].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QObject::tr(
                        "DISTINCT keyword can only be used in COUNT() operator.") );
                delete (yyvsp[-4].text);
                delete (yyvsp[-1].nodecolumnref);
                YYERROR;
            }
            delete (yyvsp[-4].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            (yyvsp[-1].nodecolumnref)->setDistinct();
            nodeList->append( (yyvsp[-1].nodecolumnref) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn(
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
        }
#line 2123 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 57:
#line 420 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            // special case for COUNT(DISTINCT x), confirm it.
            if( (yyvsp[-5].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QObject::tr(
                        "DISTINCT keyword can only be used in COUNT() operator.") );
                delete (yyvsp[-5].text);
                delete (yyvsp[-2].nodecolumnref);
                delete (yyvsp[0].text);
                YYERROR;
            }
            delete (yyvsp[-5].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            (yyvsp[-2].nodecolumnref)->setDistinct();
            nodeList->append( (yyvsp[-2].nodecolumnref) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn(
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[0].text));
            delete (yyvsp[0].text);
        }
#line 2148 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 58:
#line 444 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.text) = (yyvsp[0].text);
        }
#line 2156 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 61:
#line 453 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            parser_ctx->setWhere((yyvsp[0].node));
        }
#line 2164 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 62:
#line 460 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtDefault;
        }
#line 2172 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 63:
#line 464 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtLeft;
        }
#line 2180 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 64:
#line 468 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtLeftOuter;
        }
#line 2188 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 65:
#line 472 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtRight;
        }
#line 2196 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 66:
#line 476 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtRightOuter;
        }
#line 2204 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 67:
#line 480 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtFull;
        }
#line 2212 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 68:
#line 484 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtCross;
        }
#line 2220 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 69:
#line 488 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtInner;
        }
#line 2228 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 70:
#line 495 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodejoin) = new QgsSQLStatement::NodeJoin((yyvsp[-2].nodetabledef), (yyvsp[0].node), (yyvsp[-3].jointype));
        }
#line 2236 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 71:
#line 499 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodejoin) = new QgsSQLStatement::NodeJoin((yyvsp[-4].nodetabledef), *(yyvsp[-1].usinglist), (yyvsp[-5].jointype));
            delete (yyvsp[-1].usinglist);
        }
#line 2245 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 72:
#line 507 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
          (yyval.usinglist) = new QList<QString>(); (yyval.usinglist)->push_back(*(yyvsp[0].text));
          delete (yyvsp[0].text);
        }
#line 2254 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 73:
#line 512 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
          (yyval.usinglist) = (yyvsp[-2].usinglist); (yyvsp[-2].usinglist)->push_back(*(yyvsp[0].text));
          delete (yyvsp[0].text);
        }
#line 2263 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 74:
#line 520 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
          (yyval.joinlist) = new QList<QgsSQLStatement::NodeJoin*>(); (yyval.joinlist)->push_back((yyvsp[0].nodejoin));
        }
#line 2271 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 75:
#line 524 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
          (yyval.joinlist) = (yyvsp[-1].joinlist); (yyvsp[-1].joinlist)->push_back((yyvsp[0].nodejoin));
        }
#line 2279 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 77:
#line 531 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            parser_ctx->setJoins( *(yyvsp[0].joinlist) );
            delete (yyvsp[0].joinlist);
        }
#line 2288 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 79:
#line 539 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
      {
          parser_ctx->setOrderBy(*(yyvsp[0].columnsortedlist));
          delete (yyvsp[0].columnsortedlist);
      }
#line 2297 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 80:
#line 547 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
       {
          (yyval.columnsortedlist) = (yyvsp[-2].columnsortedlist); (yyvsp[-2].columnsortedlist)->push_back((yyvsp[0].nodecolumnsorted));
       }
#line 2305 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 81:
#line 551 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
      { (yyval.columnsortedlist) = new QList<QgsSQLStatement::NodeColumnSorted*>(); (yyval.columnsortedlist)->push_back((yyvsp[0].nodecolumnsorted)); }
#line 2311 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 82:
#line 556 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[0].nodecolumnref), true );
        }
#line 2319 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 83:
#line 560 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[-1].nodecolumnref), true );
        }
#line 2327 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 84:
#line 564 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[-1].nodecolumnref), false );
        }
#line 2335 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 85:
#line 571 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[0].text));
        delete (yyvsp[0].text);
    }
#line 2344 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 86:
#line 577 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[-1].text), *(yyvsp[0].text));
        delete (yyvsp[-1].text);
        delete (yyvsp[0].text);
    }
#line 2354 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 87:
#line 586 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
       {
          (yyval.tablelist) = (yyvsp[-2].tablelist); (yyvsp[-2].tablelist)->push_back((yyvsp[0].nodetabledef));
       }
#line 2362 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;

  case 88:
#line 590 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"
      { (yyval.tablelist) = new QList<QgsSQLStatement::NodeTableDef*>(); (yyval.tablelist)->push_back((yyvsp[0].nodetabledef)); }
#line 2368 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"
    break;


#line 2372 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (parser_ctx, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (parser_ctx, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser_ctx, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parser_ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, parser_ctx);
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
  return yyresult;
}
#line 593 "/home/user/Workspace/NextGIS/nextgisqgis/nextgisqgis/src/core/qgssqlstatementparser.yy"



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

