/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         exp_parse
#define yylex           exp_lex
#define yyerror         exp_error
#define yydebug         exp_debug
#define yynerrs         exp_nerrs

/* First part of user prologue.  */
#line 16 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"

#include <qglobal.h>
#include <QList>
#include <cstdlib>
#include "qgslogger.h"
#include "expression/qgsexpression.h"
#include "expression/qgsexpressionnode.h"
#include "expression/qgsexpressionnodeimpl.h"
#include "expression/qgsexpressionfunction.h"

#ifdef _MSC_VER
#  pragma warning( disable: 4065 )  // switch statement contains 'default' but no 'case' labels
#  pragma warning( disable: 4702 )  // unreachable code
#endif

// don't redeclare malloc/free
#define YYINCLUDED_STDLIB_H 1

// maximum number of errors encountered before parser aborts
#define MAX_ERRORS 10

struct expression_parser_context;
#include "qgsexpressionparser.hpp"

//! from lexer
typedef void* yyscan_t;
typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern int exp_lex_init(yyscan_t* scanner);
extern int exp_lex_destroy(yyscan_t scanner);
extern int exp_lex(YYSTYPE* yylval_param, YYLTYPE* yyloc, yyscan_t yyscanner);
extern YY_BUFFER_STATE exp__scan_string(const char* buffer, yyscan_t scanner);

/** returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
    (interface function to be called from QgsExpression)
  */
QgsExpressionNode* parseExpression(const QString& str, QString& parserErrorMsg, QList<QgsExpression::ParserError>& parserError);

/** error handler for bison */
void exp_error(YYLTYPE* yyloc, expression_parser_context* parser_ctx, const char* msg);

struct expression_parser_context
{
  // lexer context
  yyscan_t flex_scanner;

  // List of all errors.
  QList<QgsExpression::ParserError> parserErrors;
  QString errorMsg;
  // Current parser error.
  QgsExpression::ParserError::ParserErrorType currentErrorType = QgsExpression::ParserError::Unknown;
  // root node of the expression
  QgsExpressionNode* rootNode;
};

#define scanner parser_ctx->flex_scanner

// we want verbose error messages
#define YYERROR_VERBOSE 1

#define BINOP(x, y, z)  new QgsExpressionNodeBinaryOperator(x, y, z)

void addParserLocation(YYLTYPE* yyloc, QgsExpressionNode *node)
{
  node->parserFirstLine = yyloc->first_line;
  node->parserFirstColumn = yyloc->first_column;
  node->parserLastLine = yyloc->last_line;
  node->parserLastColumn = yyloc->last_column;
}


#line 147 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"

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

#include "qgsexpressionparser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OR = 3,                         /* OR  */
  YYSYMBOL_AND = 4,                        /* AND  */
  YYSYMBOL_EQ = 5,                         /* EQ  */
  YYSYMBOL_NE = 6,                         /* NE  */
  YYSYMBOL_LE = 7,                         /* LE  */
  YYSYMBOL_GE = 8,                         /* GE  */
  YYSYMBOL_LT = 9,                         /* LT  */
  YYSYMBOL_GT = 10,                        /* GT  */
  YYSYMBOL_REGEXP = 11,                    /* REGEXP  */
  YYSYMBOL_LIKE = 12,                      /* LIKE  */
  YYSYMBOL_IS = 13,                        /* IS  */
  YYSYMBOL_PLUS = 14,                      /* PLUS  */
  YYSYMBOL_MINUS = 15,                     /* MINUS  */
  YYSYMBOL_MUL = 16,                       /* MUL  */
  YYSYMBOL_DIV = 17,                       /* DIV  */
  YYSYMBOL_INTDIV = 18,                    /* INTDIV  */
  YYSYMBOL_MOD = 19,                       /* MOD  */
  YYSYMBOL_CONCAT = 20,                    /* CONCAT  */
  YYSYMBOL_POW = 21,                       /* POW  */
  YYSYMBOL_NOT = 22,                       /* NOT  */
  YYSYMBOL_IN = 23,                        /* IN  */
  YYSYMBOL_NUMBER_FLOAT = 24,              /* NUMBER_FLOAT  */
  YYSYMBOL_NUMBER_INT = 25,                /* NUMBER_INT  */
  YYSYMBOL_NUMBER_INT64 = 26,              /* NUMBER_INT64  */
  YYSYMBOL_BOOLEAN = 27,                   /* BOOLEAN  */
  YYSYMBOL_NULLVALUE = 28,                 /* NULLVALUE  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_WHEN = 30,                      /* WHEN  */
  YYSYMBOL_THEN = 31,                      /* THEN  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_END = 33,                       /* END  */
  YYSYMBOL_STRING = 34,                    /* STRING  */
  YYSYMBOL_QUOTED_COLUMN_REF = 35,         /* QUOTED_COLUMN_REF  */
  YYSYMBOL_NAME = 36,                      /* NAME  */
  YYSYMBOL_SPECIAL_COL = 37,               /* SPECIAL_COL  */
  YYSYMBOL_VARIABLE = 38,                  /* VARIABLE  */
  YYSYMBOL_NAMED_NODE = 39,                /* NAMED_NODE  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_Unknown_CHARACTER = 41,         /* Unknown_CHARACTER  */
  YYSYMBOL_UMINUS = 42,                    /* UMINUS  */
  YYSYMBOL_43_ = 43,                       /* '['  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_root = 48,                      /* root  */
  YYSYMBOL_expression = 49,                /* expression  */
  YYSYMBOL_named_node = 50,                /* named_node  */
  YYSYMBOL_exp_list = 51,                  /* exp_list  */
  YYSYMBOL_when_then_clauses = 52,         /* when_then_clauses  */
  YYSYMBOL_when_then_clause = 53           /* when_then_clause  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   445

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  98

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    46,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   180,   180,   181,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   259,   284,   285,   287,
     289,   290,   292,   293,   296,   297,   300,   318,   329,   330,
     331,   332,   333,   334,   338,   342,   357,   358,   359,   363,
     364,   368
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "OR", "AND", "EQ",
  "NE", "LE", "GE", "LT", "GT", "REGEXP", "LIKE", "IS", "PLUS", "MINUS",
  "MUL", "DIV", "INTDIV", "MOD", "CONCAT", "POW", "NOT", "IN",
  "NUMBER_FLOAT", "NUMBER_INT", "NUMBER_INT64", "BOOLEAN", "NULLVALUE",
  "CASE", "WHEN", "THEN", "ELSE", "END", "STRING", "QUOTED_COLUMN_REF",
  "NAME", "SPECIAL_COL", "VARIABLE", "NAMED_NODE", "COMMA",
  "Unknown_CHARACTER", "UMINUS", "'['", "'('", "')'", "']'", "$accept",
  "root", "expression", "named_node", "exp_list", "when_then_clauses",
  "when_then_clause", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-75)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      76,   365,   365,   365,   365,   -75,   -75,   -75,   -75,   -75,
     -21,   -75,   -75,   -33,   -75,   -75,   365,    19,   243,   243,
     -19,   -19,   302,   365,   -12,   -75,   313,   118,   -75,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,    -1,   -18,
     365,   161,   365,   -75,   -75,   365,   -75,   243,   -75,   -32,
     -75,   283,   302,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   402,   402,   -15,   -15,   -15,   -15,   -19,   -15,
     -17,   339,    53,   365,   202,   243,   339,   -75,   339,   -30,
     -75,   243,   -75,   243,   -75,   -28,   -75,   -75
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,    38,    39,    40,    41,    43,
       0,    42,    35,    34,    36,    37,     0,     0,     2,     3,
      30,    31,    23,     0,     0,    50,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    49,     0,    26,    47,    48,     0,
      24,     5,     4,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    19,    18,    20,    22,    21,
       0,     0,     0,     0,     0,    44,     0,    25,     0,     0,
      29,    51,    33,    45,    46,     0,    27,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -75,   -75,     0,   -61,   -74,   -75,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    17,    57,    58,    59,    24,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      18,    19,    20,    21,    22,    46,    47,    89,    86,    23,
      86,    26,    86,    87,    95,    96,    27,    97,    23,    28,
      52,    53,    80,    51,    50,    94,    81,    88,    50,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    54,     0,
      82,     0,    84,     0,     0,    85,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     1,     0,     0,
       0,     0,     0,    91,     0,     0,    93,     0,     0,     0,
       2,     3,     0,     0,     0,     0,    50,     0,     4,    90,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
      11,    12,    13,    14,    15,     0,     0,     0,     0,     0,
      16,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,    60,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     2,     3,     0,
       0,     0,     0,     0,     0,     4,     0,     5,     6,     7,
       8,     9,    10,     0,     0,    50,     0,    11,    12,    13,
      14,    15,    55,     2,     3,     0,     0,    16,    56,     0,
       0,     4,     0,     5,     6,     7,     8,     9,    10,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    55,     2,
       3,     0,     0,    16,     0,     0,     0,     4,     0,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,    11,
      12,    13,    14,    15,     0,     0,     0,     0,     0,    16,
      40,    41,    42,    43,    44,    45,    46,    47,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,    50
};

static const yytype_int8 yycheck[] =
{
       0,     1,     2,     3,     4,    20,    21,    81,    40,    30,
      40,    44,    40,    45,    88,    45,    16,    45,    30,     0,
      32,    33,    23,    23,    43,    86,    44,    44,    43,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    24,    -1,
      50,    -1,    52,    -1,    -1,    55,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    43,    -1,    22,    46,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      44,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    43,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    -1,    43,    -1,    34,    35,    36,
      37,    38,    39,    14,    15,    -1,    -1,    44,    45,    -1,
      -1,    22,    -1,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    14,
      15,    -1,    -1,    44,    -1,    -1,    -1,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    44,
      14,    15,    16,    17,    18,    19,    20,    21,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    14,    15,    22,    24,    25,    26,    27,    28,
      29,    34,    35,    36,    37,    38,    44,    48,    49,    49,
      49,    49,    49,    30,    52,    53,    44,    49,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      43,    49,    32,    33,    53,    39,    45,    49,    50,    51,
      45,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      23,    44,    49,    31,    49,    49,    40,    45,    44,    51,
      46,    49,    33,    49,    50,    51,    45,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    51,    51,    51,    51,    52,
      52,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     4,     3,     5,     6,     4,
       2,     2,     3,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     1,     1,     2,
       1,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (&yylloc, parser_ctx, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, parser_ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, expression_parser_context* parser_ctx)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (parser_ctx);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, expression_parser_context* parser_ctx)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, parser_ctx);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, expression_parser_context* parser_ctx)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), parser_ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, parser_ctx); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, expression_parser_context* parser_ctx)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (parser_ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_STRING: /* STRING  */
#line 174 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).text); }
#line 1415 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_QUOTED_COLUMN_REF: /* QUOTED_COLUMN_REF  */
#line 174 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).text); }
#line 1421 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_NAME: /* NAME  */
#line 174 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).text); }
#line 1427 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_SPECIAL_COL: /* SPECIAL_COL  */
#line 174 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).text); }
#line 1433 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_VARIABLE: /* VARIABLE  */
#line 174 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).text); }
#line 1439 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_NAMED_NODE: /* NAMED_NODE  */
#line 174 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).text); }
#line 1445 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_expression: /* expression  */
#line 171 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).node); }
#line 1451 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_named_node: /* named_node  */
#line 173 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).namednode); }
#line 1457 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_exp_list: /* exp_list  */
#line 172 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).nodelist); }
#line 1463 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_when_then_clauses: /* when_then_clauses  */
#line 176 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).whenthenlist); }
#line 1469 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
        break;

    case YYSYMBOL_when_then_clause: /* when_then_clause  */
#line 175 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
            { delete ((*yyvaluep).whenthen); }
#line 1475 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
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
yyparse (expression_parser_context* parser_ctx)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* root: expression  */
#line 180 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                 { parser_ctx->rootNode = (yyvsp[0].node); }
#line 1781 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 3: /* root: error expression  */
#line 182 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
        {
            delete (yyvsp[0].node);
            if ( parser_ctx->parserErrors.count() < MAX_ERRORS )
              yyerrok;
            else
              YYABORT;
        }
#line 1793 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 4: /* expression: expression AND expression  */
#line 192 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1799 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 5: /* expression: expression OR expression  */
#line 193 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1805 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 6: /* expression: expression EQ expression  */
#line 194 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1811 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 7: /* expression: expression NE expression  */
#line 195 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1817 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 8: /* expression: expression LE expression  */
#line 196 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1823 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 9: /* expression: expression GE expression  */
#line 197 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1829 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 10: /* expression: expression LT expression  */
#line 198 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1835 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 11: /* expression: expression GT expression  */
#line 199 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1841 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 12: /* expression: expression REGEXP expression  */
#line 200 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1847 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 13: /* expression: expression LIKE expression  */
#line 201 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1853 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 14: /* expression: expression IS expression  */
#line 202 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1859 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 15: /* expression: expression PLUS expression  */
#line 203 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1865 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 16: /* expression: expression MINUS expression  */
#line 204 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1871 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 17: /* expression: expression MUL expression  */
#line 205 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1877 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 18: /* expression: expression INTDIV expression  */
#line 206 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1883 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 19: /* expression: expression DIV expression  */
#line 207 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1889 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 20: /* expression: expression MOD expression  */
#line 208 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1895 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 21: /* expression: expression POW expression  */
#line 209 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1901 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 22: /* expression: expression CONCAT expression  */
#line 210 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1907 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 23: /* expression: NOT expression  */
#line 211 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = new QgsExpressionNodeUnaryOperator((yyvsp[-1].u_op), (yyvsp[0].node)); }
#line 1913 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 24: /* expression: '(' expression ')'  */
#line 212 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = (yyvsp[-1].node); }
#line 1919 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 25: /* expression: NAME '(' exp_list ')'  */
#line 214 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
        {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[-3].text));
          delete (yyvsp[-3].text);
          if (fnIndex == -1)
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionUnknown;
            parser_ctx->currentErrorType = errorType;
            exp_error(&yyloc, parser_ctx, QObject::tr( "Function is not known" ).toUtf8().constData() );
            delete (yyvsp[-1].nodelist);
            YYERROR;
          }
          QString paramError;
          if ( !QgsExpressionNodeFunction::validateParams( fnIndex, (yyvsp[-1].nodelist), paramError ) )
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionInvalidParams;
            parser_ctx->currentErrorType = errorType;
            exp_error( &yyloc, parser_ctx, paramError.toLocal8Bit().constData() );
            delete (yyvsp[-1].nodelist);
            YYERROR;
          }
          QgsExpressionFunction* func = QgsExpression::Functions()[fnIndex];
          if ( func->params() != -1
               && !( func->params() >= (yyvsp[-1].nodelist)->count()
               && func->minParams() <= (yyvsp[-1].nodelist)->count() ) )
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionWrongArgs;
            parser_ctx->currentErrorType = errorType;
            QString expectedMessage;
            if ( func->params() == func->minParams() )
            {
               expectedMessage = QObject::tr( "Expected %1 but got %2." ).arg( QString::number( func->params() ), QString::number( (yyvsp[-1].nodelist)->count() ) );
            }
            else
            {
               expectedMessage = QObject::tr( "Expected between %1 and %2 parameters but %3 were provided." ).arg( QString::number( func->minParams() ), QString::number( func->params() ), QString::number( (yyvsp[-1].nodelist)->count() ) );
            }
            exp_error(&yyloc, parser_ctx, QObject::tr( "%1 function is called with wrong number of arguments. %2" ).arg( QgsExpression::Functions()[fnIndex]->name(), expectedMessage ).toUtf8().constData() );
            delete (yyvsp[-1].nodelist);
            YYERROR;
          }

          (yyval.node) = new QgsExpressionNodeFunction(fnIndex, (yyvsp[-1].nodelist));
          addParserLocation(&(yylsp[-3]), (yyval.node));
        }
#line 1968 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 26: /* expression: NAME '(' ')'  */
#line 260 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
        {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[-2].text));
          delete (yyvsp[-2].text);
          if (fnIndex == -1)
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionUnknown;
            parser_ctx->currentErrorType = errorType;
            exp_error(&yyloc, parser_ctx, QObject::tr( "Function is not known" ).toUtf8().constData() );
            YYERROR;
          }
          // 0 parameters is expected, -1 parameters means leave it to the
          // implementation
          if ( QgsExpression::Functions()[fnIndex]->minParams() > 0 )
          {

            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionWrongArgs;
            parser_ctx->currentErrorType = errorType;
            exp_error(&yyloc, parser_ctx, QObject::tr( "%1 function is called with wrong number of arguments" ).arg( QgsExpression::Functions()[fnIndex]->name() ).toLocal8Bit().constData() );
            YYERROR;
          }
          (yyval.node) = new QgsExpressionNodeFunction(fnIndex, new QgsExpressionNode::NodeList());
          addParserLocation(&(yylsp[-2]), (yyval.node));
        }
#line 1996 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 27: /* expression: expression IN '(' exp_list ')'  */
#line 284 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                         { (yyval.node) = new QgsExpressionNodeInOperator((yyvsp[-4].node), (yyvsp[-1].nodelist), false);  }
#line 2002 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 28: /* expression: expression NOT IN '(' exp_list ')'  */
#line 285 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                         { (yyval.node) = new QgsExpressionNodeInOperator((yyvsp[-5].node), (yyvsp[-1].nodelist), true); }
#line 2008 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 29: /* expression: expression '[' expression ']'  */
#line 287 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                    { (yyval.node) = new QgsExpressionNodeIndexOperator( (yyvsp[-3].node), (yyvsp[-1].node) ); }
#line 2014 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 30: /* expression: PLUS expression  */
#line 289 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                   { (yyval.node) = (yyvsp[0].node); }
#line 2020 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 31: /* expression: MINUS expression  */
#line 290 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                    { (yyval.node) = new QgsExpressionNodeUnaryOperator( QgsExpressionNodeUnaryOperator::uoMinus, (yyvsp[0].node)); }
#line 2026 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 32: /* expression: CASE when_then_clauses END  */
#line 292 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                      { (yyval.node) = new QgsExpressionNodeCondition((yyvsp[-1].whenthenlist)); }
#line 2032 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 33: /* expression: CASE when_then_clauses ELSE expression END  */
#line 293 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                                  { (yyval.node) = new QgsExpressionNodeCondition((yyvsp[-3].whenthenlist),(yyvsp[-1].node)); }
#line 2038 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 34: /* expression: NAME  */
#line 296 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                            { (yyval.node) = new QgsExpressionNodeColumnRef( *(yyvsp[0].text) ); delete (yyvsp[0].text); }
#line 2044 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 35: /* expression: QUOTED_COLUMN_REF  */
#line 297 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                         { (yyval.node) = new QgsExpressionNodeColumnRef( *(yyvsp[0].text) ); delete (yyvsp[0].text); }
#line 2050 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 36: /* expression: SPECIAL_COL  */
#line 301 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
        {
          int fnIndex = QgsExpression::functionIndex(*(yyvsp[0].text));
          if (fnIndex >= 0)
          {
            (yyval.node) = new QgsExpressionNodeFunction( fnIndex, nullptr );
          }
          else
          {
            QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionUnknown;
            parser_ctx->currentErrorType = errorType;
            exp_error(&yyloc, parser_ctx, QObject::tr( "%1 function is not known" ).arg( *(yyvsp[0].text) ).toLocal8Bit().constData());
            YYERROR;
          }
          delete (yyvsp[0].text);
        }
#line 2070 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 37: /* expression: VARIABLE  */
#line 319 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
        {
          // @var is equivalent to var( "var" )
          QgsExpressionNode::NodeList* args = new QgsExpressionNode::NodeList();
          QgsExpressionNodeLiteral* literal = new QgsExpressionNodeLiteral( QString( *(yyvsp[0].text) ).mid( 1 ) );
          args->append( literal );
          (yyval.node) = new QgsExpressionNodeFunction( QgsExpression::functionIndex( "var" ), args );
          delete (yyvsp[0].text);
        }
#line 2083 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 38: /* expression: NUMBER_FLOAT  */
#line 329 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                  { (yyval.node) = new QgsExpressionNodeLiteral( QVariant((yyvsp[0].numberFloat)) ); }
#line 2089 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 39: /* expression: NUMBER_INT  */
#line 330 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                  { (yyval.node) = new QgsExpressionNodeLiteral( QVariant((yyvsp[0].numberInt)) ); }
#line 2095 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 40: /* expression: NUMBER_INT64  */
#line 331 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                  { (yyval.node) = new QgsExpressionNodeLiteral( QVariant((yyvsp[0].numberInt64)) ); }
#line 2101 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 41: /* expression: BOOLEAN  */
#line 332 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                  { (yyval.node) = new QgsExpressionNodeLiteral( QVariant((yyvsp[0].boolVal)) ); }
#line 2107 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 42: /* expression: STRING  */
#line 333 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                  { (yyval.node) = new QgsExpressionNodeLiteral( QVariant(*(yyvsp[0].text)) ); delete (yyvsp[0].text); }
#line 2113 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 43: /* expression: NULLVALUE  */
#line 334 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                  { (yyval.node) = new QgsExpressionNodeLiteral( QVariant() ); }
#line 2119 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 44: /* named_node: NAMED_NODE expression  */
#line 338 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                          { (yyval.namednode) = new QgsExpressionNode::NamedNode( *(yyvsp[-1].text), (yyvsp[0].node) ); delete (yyvsp[-1].text); }
#line 2125 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 45: /* exp_list: exp_list COMMA expression  */
#line 343 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
       {
         if ( (yyvsp[-2].nodelist)->hasNamedNodes() )
         {
           QgsExpression::ParserError::ParserErrorType errorType = QgsExpression::ParserError::FunctionNamedArgsError;
           parser_ctx->currentErrorType = errorType;
           exp_error(&yyloc, parser_ctx, QObject::tr( "All parameters following a named parameter must also be named." ).toUtf8().constData() );
           delete (yyvsp[-2].nodelist);
           YYERROR;
         }
         else
         {
           (yyval.nodelist) = (yyvsp[-2].nodelist); (yyvsp[-2].nodelist)->append((yyvsp[0].node));
         }
       }
#line 2144 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 46: /* exp_list: exp_list COMMA named_node  */
#line 357 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                { (yyval.nodelist) = (yyvsp[-2].nodelist); (yyvsp[-2].nodelist)->append((yyvsp[0].namednode)); }
#line 2150 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 47: /* exp_list: expression  */
#line 358 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                              { (yyval.nodelist) = new QgsExpressionNode::NodeList(); (yyval.nodelist)->append((yyvsp[0].node)); }
#line 2156 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 48: /* exp_list: named_node  */
#line 359 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                              { (yyval.nodelist) = new QgsExpressionNode::NodeList(); (yyval.nodelist)->append((yyvsp[0].namednode)); }
#line 2162 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 49: /* when_then_clauses: when_then_clauses when_then_clause  */
#line 363 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                          { (yyval.whenthenlist) = (yyvsp[-1].whenthenlist); (yyvsp[-1].whenthenlist)->append((yyvsp[0].whenthen)); }
#line 2168 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 50: /* when_then_clauses: when_then_clause  */
#line 364 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                          { (yyval.whenthenlist) = new QgsExpressionNodeCondition::WhenThenList(); (yyval.whenthenlist)->append((yyvsp[0].whenthen)); }
#line 2174 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;

  case 51: /* when_then_clause: WHEN expression THEN expression  */
#line 368 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"
                                          { (yyval.whenthen) = new QgsExpressionNodeCondition::WhenThen((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2180 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"
    break;


#line 2184 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, parser_ctx, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, parser_ctx);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, parser_ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, parser_ctx, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, parser_ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, parser_ctx);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 371 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"



// returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
QgsExpressionNode* parseExpression(const QString& str, QString& parserErrorMsg, QList<QgsExpression::ParserError> &parserErrors)
{
  expression_parser_context ctx;
  ctx.rootNode = 0;

  exp_lex_init(&ctx.flex_scanner);
  exp__scan_string(str.toUtf8().constData(), ctx.flex_scanner);
  int res = exp_parse(&ctx);
  exp_lex_destroy(ctx.flex_scanner);

  // list should be empty when parsing was OK
  if (res == 0 && ctx.parserErrors.count() == 0) // success?
  {
    return ctx.rootNode;
  }
  else // error?
  {
    parserErrorMsg = ctx.errorMsg;
    parserErrors = ctx.parserErrors;
    delete ctx.rootNode;
    return nullptr;
  }
}


void exp_error(YYLTYPE* yyloc,expression_parser_context* parser_ctx, const char* msg)
{
  QgsExpression::ParserError error = QgsExpression::ParserError();
  error.firstColumn = yyloc->first_column;
  error.firstLine = yyloc->first_line;
  error.lastColumn = yyloc->last_column;
  error.lastLine = yyloc->last_line;
  error.errorMsg = msg;
  error.errorType = parser_ctx->currentErrorType;
  parser_ctx->parserErrors.append(error);
  // Reset the current error type for the next error.
  parser_ctx->currentErrorType = QgsExpression::ParserError::Unknown;

  parser_ctx->errorMsg = parser_ctx->errorMsg + "\n" + msg;
}

