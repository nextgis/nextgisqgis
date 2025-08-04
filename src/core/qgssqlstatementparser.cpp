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
#define yyparse         sqlstatement_parse
#define yylex           sqlstatement_lex
#define yyerror         sqlstatement_error
#define yydebug         sqlstatement_debug
#define yynerrs         sqlstatement_nerrs

/* First part of user prologue.  */
#line 18 "src/core/qgssqlstatementparser.yy"

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

  QgsSQLStatement::Node* expression;

  QList<QgsSQLStatement::NodeJoin*> joinList;

  QList<QgsSQLStatement::NodeColumnSorted*> orderByList;

  sqlstatement_parser_context() : rootNode( nullptr ), whereExp( nullptr ), expression( nullptr ) {}

  void setWhere( QgsSQLStatement::Node* whereExp ) { this->whereExp = whereExp; }

  void setJoins( const QList<QgsSQLStatement::NodeJoin*>& joinList ) { this->joinList = joinList; }

  void setOrderBy( const QList<QgsSQLStatement::NodeColumnSorted*>& orderByList ) { this->orderByList = orderByList; }
};

#define scanner parser_ctx->flex_scanner

// we want verbose error messages
#define YYERROR_VERBOSE 1

#define BINOP(x, y, z)  new QgsSQLStatement::NodeBinaryOperator(x, y, z)


#line 145 "src/core/qgssqlstatementparser.cpp"

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

#include "qgssqlstatementparser.hpp"
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
  YYSYMBOL_LIKE = 11,                      /* LIKE  */
  YYSYMBOL_IS = 12,                        /* IS  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_MINUS = 14,                     /* MINUS  */
  YYSYMBOL_MUL_OR_STAR = 15,               /* MUL_OR_STAR  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_INTDIV = 17,                    /* INTDIV  */
  YYSYMBOL_MOD = 18,                       /* MOD  */
  YYSYMBOL_CONCAT = 19,                    /* CONCAT  */
  YYSYMBOL_POW = 20,                       /* POW  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_IN = 22,                        /* IN  */
  YYSYMBOL_BETWEEN = 23,                   /* BETWEEN  */
  YYSYMBOL_SELECT = 24,                    /* SELECT  */
  YYSYMBOL_ALL = 25,                       /* ALL  */
  YYSYMBOL_DISTINCT = 26,                  /* DISTINCT  */
  YYSYMBOL_CAST = 27,                      /* CAST  */
  YYSYMBOL_AS = 28,                        /* AS  */
  YYSYMBOL_JOIN = 29,                      /* JOIN  */
  YYSYMBOL_FROM = 30,                      /* FROM  */
  YYSYMBOL_ON = 31,                        /* ON  */
  YYSYMBOL_USING = 32,                     /* USING  */
  YYSYMBOL_WHERE = 33,                     /* WHERE  */
  YYSYMBOL_ORDER = 34,                     /* ORDER  */
  YYSYMBOL_BY = 35,                        /* BY  */
  YYSYMBOL_ASC = 36,                       /* ASC  */
  YYSYMBOL_DESC = 37,                      /* DESC  */
  YYSYMBOL_LEFT = 38,                      /* LEFT  */
  YYSYMBOL_RIGHT = 39,                     /* RIGHT  */
  YYSYMBOL_INNER = 40,                     /* INNER  */
  YYSYMBOL_OUTER = 41,                     /* OUTER  */
  YYSYMBOL_CROSS = 42,                     /* CROSS  */
  YYSYMBOL_FULL = 43,                      /* FULL  */
  YYSYMBOL_NATURAL = 44,                   /* NATURAL  */
  YYSYMBOL_UNION = 45,                     /* UNION  */
  YYSYMBOL_NUMBER_FLOAT = 46,              /* NUMBER_FLOAT  */
  YYSYMBOL_NUMBER_INT = 47,                /* NUMBER_INT  */
  YYSYMBOL_NUMBER_INT64 = 48,              /* NUMBER_INT64  */
  YYSYMBOL_BOOLEAN = 49,                   /* BOOLEAN  */
  YYSYMBOL_NULLVALUE = 50,                 /* NULLVALUE  */
  YYSYMBOL_STRING = 51,                    /* STRING  */
  YYSYMBOL_IDENTIFIER = 52,                /* IDENTIFIER  */
  YYSYMBOL_IDENTIFIER_WITH_DOT = 53,       /* IDENTIFIER_WITH_DOT  */
  YYSYMBOL_COMMA = 54,                     /* COMMA  */
  YYSYMBOL_Unknown_CHARACTER = 55,         /* Unknown_CHARACTER  */
  YYSYMBOL_UMINUS = 56,                    /* UMINUS  */
  YYSYMBOL_57_ = 57,                       /* '('  */
  YYSYMBOL_58_ = 58,                       /* ')'  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_root = 61,                      /* root  */
  YYSYMBOL_expr = 62,                      /* expr  */
  YYSYMBOL_column_name = 63,               /* column_name  */
  YYSYMBOL_expr_list = 64,                 /* expr_list  */
  YYSYMBOL_expr_non_logical = 65,          /* expr_non_logical  */
  YYSYMBOL_select_type = 66,               /* select_type  */
  YYSYMBOL_select_statement = 67,          /* select_statement  */
  YYSYMBOL_selected_column_list = 68,      /* selected_column_list  */
  YYSYMBOL_selected_column = 69,           /* selected_column  */
  YYSYMBOL_as_clause = 70,                 /* as_clause  */
  YYSYMBOL_opt_where = 71,                 /* opt_where  */
  YYSYMBOL_join_qualifier = 72,            /* join_qualifier  */
  YYSYMBOL_join = 73,                      /* join  */
  YYSYMBOL_using_list = 74,                /* using_list  */
  YYSYMBOL_join_list = 75,                 /* join_list  */
  YYSYMBOL_opt_joins = 76,                 /* opt_joins  */
  YYSYMBOL_opt_order_by = 77,              /* opt_order_by  */
  YYSYMBOL_sort_spec_list = 78,            /* sort_spec_list  */
  YYSYMBOL_sort_spec = 79,                 /* sort_spec  */
  YYSYMBOL_table_def = 80,                 /* table_def  */
  YYSYMBOL_table_list = 81                 /* table_list  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   381

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      57,    58,     2,     2,     2,     2,    59,     2,     2,     2,
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
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   207,   207,   208,   215,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   232,   233,   235,   236,
     241,   247,   256,   260,   266,   267,   268,   269,   270,   271,
     273,   278,   280,   286,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   303,   312,   316,   320,   327,   336,
     340,   345,   350,   357,   362,   368,   384,   403,   422,   446,
     451,   454,   455,   462,   466,   470,   474,   478,   482,   486,
     490,   497,   501,   509,   514,   522,   526,   532,   533,   540,
     541,   549,   553,   558,   562,   566,   573,   578,   584,   591,
     597,   604,   615,   619
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
  "NE", "LE", "GE", "LT", "GT", "LIKE", "IS", "PLUS", "MINUS",
  "MUL_OR_STAR", "DIV", "INTDIV", "MOD", "CONCAT", "POW", "NOT", "IN",
  "BETWEEN", "SELECT", "ALL", "DISTINCT", "CAST", "AS", "JOIN", "FROM",
  "ON", "USING", "WHERE", "ORDER", "BY", "ASC", "DESC", "LEFT", "RIGHT",
  "INNER", "OUTER", "CROSS", "FULL", "NATURAL", "UNION", "NUMBER_FLOAT",
  "NUMBER_INT", "NUMBER_INT64", "BOOLEAN", "NULLVALUE", "STRING",
  "IDENTIFIER", "IDENTIFIER_WITH_DOT", "COMMA", "Unknown_CHARACTER",
  "UMINUS", "'('", "')'", "'.'", "$accept", "root", "expr", "column_name",
  "expr_list", "expr_non_logical", "select_type", "select_statement",
  "selected_column_list", "selected_column", "as_clause", "opt_where",
  "join_qualifier", "join", "using_list", "join_list", "opt_joins",
  "opt_order_by", "sort_spec_list", "sort_spec", "table_def", "table_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     165,   232,   232,   220,    16,   -48,   -99,   -99,   -99,   -99,
     -99,   -99,    -1,   220,    14,   313,   -99,   361,   180,   -99,
     -99,   -99,   341,   -99,   -99,   220,   125,   -35,    59,   -99,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
       6,     2,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   -99,    37,    98,   -28,   -99,   287,   -99,   313,   -46,
     -99,   -99,   333,   341,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,    21,   232,   220,   235,   245,   245,    94,    94,
      94,    94,   -99,    94,   109,    -9,   -30,   -99,   -99,     5,
     180,    36,   220,   -99,   220,   353,   -43,   232,    41,    43,
     -99,   -99,    27,   -99,    89,   -99,    53,   313,    29,   232,
     -99,   361,   -12,    66,    79,    90,   -99,   -99,    44,    48,
     116,   118,   119,     5,     5,   -99,   -19,   120,   -99,   -99,
     361,   -99,   -12,    32,   -99,   133,   -99,   134,   -99,   -99,
     -99,   -99,    84,   -99,   220,   115,   -99,   102,   -99,   -99,
     -99,   220,   107,   313,   130,   -99,   -12,   313,   117,    43,
     -99,   -99,    39,    97,   114,   -99,   128,   -99,   -99,   -99,
      43,   -99,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    45,     0,    24,    25,    26,    27,
      29,    28,    20,     0,     0,     3,    30,     4,     0,     2,
      42,    43,    15,    46,    47,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    20,    51,     0,    50,     0,    33,    23,     0,
      21,    31,     6,     5,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    34,    35,    36,    38,
      37,    39,    41,    40,     0,     0,     0,    60,    52,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
      54,    59,    86,    93,    77,    49,     0,    22,     0,     0,
      16,    18,    55,    20,     0,     0,    89,    63,     0,     0,
       0,     0,     0,     0,     0,    75,    78,    61,    44,    17,
      19,    56,    57,    87,    64,     0,    66,     0,    70,    69,
      68,    92,     0,    76,     0,    79,    58,     0,    90,    65,
      67,     0,     0,    62,     0,    48,    88,    71,     0,     0,
      91,    73,     0,    83,    80,    82,     0,    72,    84,    85,
       0,    74,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,   -99,     0,   -98,   -67,     3,   -99,   -99,   -99,    80,
     -58,   -99,   -99,    55,   -99,   -99,   -99,   -99,   -99,    15,
      17,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    14,    58,    16,    59,    17,    18,    19,    54,    55,
      88,   145,   124,   125,   162,   126,   127,   155,   164,   165,
     103,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,   114,    89,    22,    20,    21,   100,    96,    92,    25,
     117,    92,    93,    28,    29,   110,    86,    60,    53,   118,
     119,   120,   101,   121,   122,    56,    90,   108,    72,    73,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      87,    23,    24,    60,   116,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   131,    86,    26,   102,    27,    74,
      86,   163,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,   163,   134,   146,   148,    95,   136,    94,    87,
      40,    41,    42,    92,    87,   135,   115,   129,   106,   137,
      53,   147,   107,   166,    84,   113,    85,   167,   160,   112,
     111,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,   128,   130,    49,    50,   151,   152,    61,   117,    40,
      41,    42,     1,     2,    98,    27,    86,   118,   119,   120,
       3,   121,   122,   168,   169,    99,     5,   132,     1,     2,
     141,   142,   133,   123,   153,   138,     3,   139,   140,   154,
      87,   157,     5,   144,   156,     6,     7,     8,     9,    10,
      11,    12,   149,   150,   158,   159,    13,    57,   170,   161,
     105,     6,     7,     8,     9,    10,    11,    12,     1,     2,
     171,   143,    13,    57,     0,   172,     3,     0,     0,     4,
       0,     0,     5,     1,     2,    51,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,     0,    13,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    52,     1,     2,     0,     0,    13,     0,    97,
       0,     3,     0,     0,     0,     1,     2,     5,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     5,
      45,    46,    47,    48,    49,    50,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     0,    13,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,     0,    13,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,     0,     0,    91,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,    42,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   109,     0,     0,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    43,    44,    45,    46,    47,    48,
      49,    50
};

static const yytype_int16 yycheck[] =
{
       0,    99,    30,     3,     1,     2,    15,    74,    54,    57,
      29,    54,    58,    13,     0,    58,    28,    52,    18,    38,
      39,    40,    52,    42,    43,    25,    54,    94,    22,    23,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      52,    25,    26,    52,   102,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   112,    28,    57,    52,    59,    57,
      28,   159,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   170,    29,   132,   133,    73,    29,    57,    52,
      21,    22,    23,    54,    52,    41,    59,    58,    52,    41,
      90,    59,    92,    54,    57,    52,    59,    58,   156,    58,
      97,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    58,   109,    19,    20,    31,    32,    58,    29,    21,
      22,    23,    13,    14,    15,    59,    28,    38,    39,    40,
      21,    42,    43,    36,    37,    26,    27,    58,    13,    14,
     123,   124,    52,    54,   144,    29,    21,    29,    29,    34,
      52,   151,    27,    33,    52,    46,    47,    48,    49,    50,
      51,    52,    29,    29,    57,    35,    57,    58,    54,    52,
      90,    46,    47,    48,    49,    50,    51,    52,    13,    14,
      52,   126,    57,    58,    -1,   170,    21,    -1,    -1,    24,
      -1,    -1,    27,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    13,    14,    -1,    -1,    57,    -1,     4,
      -1,    21,    -1,    -1,    -1,    13,    14,    27,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    27,
      15,    16,    17,    18,    19,    20,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     5,     6,     7,     8,
       9,    10,    11,    12,    21,    22,    23,     4,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    13,    14,    15,    16,    17,    18,
      19,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    14,    21,    24,    27,    46,    47,    48,    49,
      50,    51,    52,    57,    61,    62,    63,    65,    66,    67,
      65,    65,    62,    25,    26,    57,    57,    59,    62,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      21,    22,    23,    13,    14,    15,    16,    17,    18,    19,
      20,    15,    52,    62,    68,    69,    62,    58,    62,    64,
      52,    58,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    22,    23,    57,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    57,    59,    28,    52,    70,    30,
      54,    28,    54,    58,    57,    65,    64,     4,    15,    26,
      15,    52,    52,    80,    81,    69,    52,    62,    64,     4,
      58,    65,    58,    52,    63,    59,    70,    29,    38,    39,
      40,    42,    43,    54,    72,    73,    75,    76,    58,    58,
      65,    70,    58,    52,    29,    41,    29,    41,    29,    29,
      29,    80,    80,    73,    33,    71,    70,    59,    70,    29,
      29,    31,    32,    62,    34,    77,    52,    62,    57,    35,
      70,    52,    74,    63,    78,    79,    54,    58,    36,    37,
      54,    52,    79
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    67,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    81,    81
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     5,     6,     5,     6,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     6,     1,     2,     2,     7,     3,
       1,     1,     2,     1,     3,     4,     5,     5,     6,     2,
       1,     0,     2,     1,     2,     3,     2,     3,     2,     2,
       2,     4,     6,     1,     3,     1,     2,     0,     1,     0,
       3,     3,     1,     1,     2,     2,     1,     3,     5,     2,
       4,     6,     3,     1
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
        yyerror (parser_ctx, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, parser_ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, parser_ctx);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, sqlstatement_parser_context* parser_ctx)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], parser_ctx);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  YY_USE (yyvaluep);
  YY_USE (parser_ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_STRING: /* STRING  */
#line 193 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).text); }
#line 1383 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 193 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).text); }
#line 1389 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_IDENTIFIER_WITH_DOT: /* IDENTIFIER_WITH_DOT  */
#line 193 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).text); }
#line 1395 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 190 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).node); }
#line 1401 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 192 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodecolumnref); }
#line 1407 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 191 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodelist); }
#line 1413 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_expr_non_logical: /* expr_non_logical  */
#line 190 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).node); }
#line 1419 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 195 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodeselect); }
#line 1425 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_selected_column_list: /* selected_column_list  */
#line 200 "src/core/qgssqlstatementparser.yy"
            { qDeleteAll(*((*yyvaluep).selectedcolumnlist)); delete ((*yyvaluep).selectedcolumnlist); }
#line 1431 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_selected_column: /* selected_column  */
#line 196 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodeselectedcolumn); }
#line 1437 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_as_clause: /* as_clause  */
#line 193 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).text); }
#line 1443 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_join: /* join  */
#line 198 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodejoin); }
#line 1449 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_using_list: /* using_list  */
#line 199 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).usinglist); }
#line 1455 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_join_list: /* join_list  */
#line 202 "src/core/qgssqlstatementparser.yy"
            { qDeleteAll(*((*yyvaluep).joinlist)); delete ((*yyvaluep).joinlist); }
#line 1461 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_sort_spec_list: /* sort_spec_list  */
#line 201 "src/core/qgssqlstatementparser.yy"
            { qDeleteAll(*((*yyvaluep).columnsortedlist)); delete ((*yyvaluep).columnsortedlist); }
#line 1467 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_sort_spec: /* sort_spec  */
#line 197 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodecolumnsorted); }
#line 1473 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_table_def: /* table_def  */
#line 194 "src/core/qgssqlstatementparser.yy"
            { delete ((*yyvaluep).nodetabledef); }
#line 1479 "src/core/qgssqlstatementparser.cpp"
        break;

    case YYSYMBOL_table_list: /* table_list  */
#line 203 "src/core/qgssqlstatementparser.yy"
            { qDeleteAll(*((*yyvaluep).tablelist)); delete ((*yyvaluep).tablelist); }
#line 1485 "src/core/qgssqlstatementparser.cpp"
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
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, scanner);
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
  case 2: /* root: select_statement  */
#line 207 "src/core/qgssqlstatementparser.yy"
                       { parser_ctx->rootNode = (yyvsp[0].nodeselect); }
#line 1764 "src/core/qgssqlstatementparser.cpp"
    break;

  case 3: /* root: expr  */
#line 208 "src/core/qgssqlstatementparser.yy"
             { parser_ctx->expression = (yyvsp[0].node); }
#line 1770 "src/core/qgssqlstatementparser.cpp"
    break;

  case 4: /* expr: expr_non_logical  */
#line 216 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.node) = (yyvsp[0].node);
        }
#line 1778 "src/core/qgssqlstatementparser.cpp"
    break;

  case 5: /* expr: expr AND expr  */
#line 220 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1784 "src/core/qgssqlstatementparser.cpp"
    break;

  case 6: /* expr: expr OR expr  */
#line 221 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1790 "src/core/qgssqlstatementparser.cpp"
    break;

  case 7: /* expr: expr EQ expr  */
#line 222 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1796 "src/core/qgssqlstatementparser.cpp"
    break;

  case 8: /* expr: expr NE expr  */
#line 223 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1802 "src/core/qgssqlstatementparser.cpp"
    break;

  case 9: /* expr: expr LE expr  */
#line 224 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1808 "src/core/qgssqlstatementparser.cpp"
    break;

  case 10: /* expr: expr GE expr  */
#line 225 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1814 "src/core/qgssqlstatementparser.cpp"
    break;

  case 11: /* expr: expr LT expr  */
#line 226 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1820 "src/core/qgssqlstatementparser.cpp"
    break;

  case 12: /* expr: expr GT expr  */
#line 227 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1826 "src/core/qgssqlstatementparser.cpp"
    break;

  case 13: /* expr: expr LIKE expr  */
#line 228 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1832 "src/core/qgssqlstatementparser.cpp"
    break;

  case 14: /* expr: expr IS expr  */
#line 229 "src/core/qgssqlstatementparser.yy"
                          { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1838 "src/core/qgssqlstatementparser.cpp"
    break;

  case 15: /* expr: NOT expr  */
#line 230 "src/core/qgssqlstatementparser.yy"
                                { (yyval.node) = new QgsSQLStatement::NodeUnaryOperator((yyvsp[-1].u_op), (yyvsp[0].node)); }
#line 1844 "src/core/qgssqlstatementparser.cpp"
    break;

  case 16: /* expr: expr IN '(' expr_list ')'  */
#line 232 "src/core/qgssqlstatementparser.yy"
                                    { (yyval.node) = new QgsSQLStatement::NodeInOperator((yyvsp[-4].node), (yyvsp[-1].nodelist), false);  }
#line 1850 "src/core/qgssqlstatementparser.cpp"
    break;

  case 17: /* expr: expr NOT IN '(' expr_list ')'  */
#line 233 "src/core/qgssqlstatementparser.yy"
                                    { (yyval.node) = new QgsSQLStatement::NodeInOperator((yyvsp[-5].node), (yyvsp[-1].nodelist), true); }
#line 1856 "src/core/qgssqlstatementparser.cpp"
    break;

  case 18: /* expr: expr BETWEEN expr_non_logical AND expr_non_logical  */
#line 235 "src/core/qgssqlstatementparser.yy"
                                                             { (yyval.node) = new QgsSQLStatement::NodeBetweenOperator((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), false);  }
#line 1862 "src/core/qgssqlstatementparser.cpp"
    break;

  case 19: /* expr: expr NOT BETWEEN expr_non_logical AND expr_non_logical  */
#line 236 "src/core/qgssqlstatementparser.yy"
                                                                 { (yyval.node) = new QgsSQLStatement::NodeBetweenOperator((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), true);  }
#line 1868 "src/core/qgssqlstatementparser.cpp"
    break;

  case 20: /* column_name: IDENTIFIER  */
#line 242 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnref) = new QgsSQLStatement::NodeColumnRef( *(yyvsp[0].text), false );
            delete (yyvsp[0].text);
        }
#line 1877 "src/core/qgssqlstatementparser.cpp"
    break;

  case 21: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 248 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnref) = new QgsSQLStatement::NodeColumnRef( *(yyvsp[-2].text), *(yyvsp[0].text), false );
            delete (yyvsp[-2].text);
            delete (yyvsp[0].text);
        }
#line 1887 "src/core/qgssqlstatementparser.cpp"
    break;

  case 22: /* expr_list: expr_list COMMA expr  */
#line 257 "src/core/qgssqlstatementparser.yy"
       {
          (yyval.nodelist) = (yyvsp[-2].nodelist); (yyvsp[-2].nodelist)->append((yyvsp[0].node));
       }
#line 1895 "src/core/qgssqlstatementparser.cpp"
    break;

  case 23: /* expr_list: expr  */
#line 260 "src/core/qgssqlstatementparser.yy"
                        { (yyval.nodelist) = new QgsSQLStatement::NodeList(); (yyval.nodelist)->append((yyvsp[0].node)); }
#line 1901 "src/core/qgssqlstatementparser.cpp"
    break;

  case 24: /* expr_non_logical: NUMBER_FLOAT  */
#line 266 "src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberFloat)) ); }
#line 1907 "src/core/qgssqlstatementparser.cpp"
    break;

  case 25: /* expr_non_logical: NUMBER_INT  */
#line 267 "src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberInt)) ); }
#line 1913 "src/core/qgssqlstatementparser.cpp"
    break;

  case 26: /* expr_non_logical: NUMBER_INT64  */
#line 268 "src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberInt64)) ); }
#line 1919 "src/core/qgssqlstatementparser.cpp"
    break;

  case 27: /* expr_non_logical: BOOLEAN  */
#line 269 "src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].boolVal)) ); }
#line 1925 "src/core/qgssqlstatementparser.cpp"
    break;

  case 28: /* expr_non_logical: STRING  */
#line 270 "src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant(*(yyvsp[0].text)) ); delete (yyvsp[0].text); }
#line 1931 "src/core/qgssqlstatementparser.cpp"
    break;

  case 29: /* expr_non_logical: NULLVALUE  */
#line 271 "src/core/qgssqlstatementparser.yy"
                                  { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant() ); }
#line 1937 "src/core/qgssqlstatementparser.cpp"
    break;

  case 30: /* expr_non_logical: column_name  */
#line 274 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.node) = (yyvsp[0].nodecolumnref);
        }
#line 1945 "src/core/qgssqlstatementparser.cpp"
    break;

  case 31: /* expr_non_logical: '(' expr ')'  */
#line 278 "src/core/qgssqlstatementparser.yy"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 1951 "src/core/qgssqlstatementparser.cpp"
    break;

  case 32: /* expr_non_logical: IDENTIFIER '(' expr_list ')'  */
#line 281 "src/core/qgssqlstatementparser.yy"
        {
          (yyval.node) = new QgsSQLStatement::NodeFunction(*(yyvsp[-3].text), (yyvsp[-1].nodelist));
          delete (yyvsp[-3].text);
        }
#line 1960 "src/core/qgssqlstatementparser.cpp"
    break;

  case 33: /* expr_non_logical: IDENTIFIER '(' ')'  */
#line 287 "src/core/qgssqlstatementparser.yy"
        {
          (yyval.node) = new QgsSQLStatement::NodeFunction(*(yyvsp[-2].text), new QgsSQLStatement::NodeList());
          delete (yyvsp[-2].text);
        }
#line 1969 "src/core/qgssqlstatementparser.cpp"
    break;

  case 34: /* expr_non_logical: expr_non_logical PLUS expr_non_logical  */
#line 292 "src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1975 "src/core/qgssqlstatementparser.cpp"
    break;

  case 35: /* expr_non_logical: expr_non_logical MINUS expr_non_logical  */
#line 293 "src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1981 "src/core/qgssqlstatementparser.cpp"
    break;

  case 36: /* expr_non_logical: expr_non_logical MUL_OR_STAR expr_non_logical  */
#line 294 "src/core/qgssqlstatementparser.yy"
                                                    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1987 "src/core/qgssqlstatementparser.cpp"
    break;

  case 37: /* expr_non_logical: expr_non_logical INTDIV expr_non_logical  */
#line 295 "src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1993 "src/core/qgssqlstatementparser.cpp"
    break;

  case 38: /* expr_non_logical: expr_non_logical DIV expr_non_logical  */
#line 296 "src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1999 "src/core/qgssqlstatementparser.cpp"
    break;

  case 39: /* expr_non_logical: expr_non_logical MOD expr_non_logical  */
#line 297 "src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2005 "src/core/qgssqlstatementparser.cpp"
    break;

  case 40: /* expr_non_logical: expr_non_logical POW expr_non_logical  */
#line 298 "src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2011 "src/core/qgssqlstatementparser.cpp"
    break;

  case 41: /* expr_non_logical: expr_non_logical CONCAT expr_non_logical  */
#line 299 "src/core/qgssqlstatementparser.yy"
                                                  { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2017 "src/core/qgssqlstatementparser.cpp"
    break;

  case 42: /* expr_non_logical: PLUS expr_non_logical  */
#line 300 "src/core/qgssqlstatementparser.yy"
                                         { (yyval.node) = (yyvsp[0].node); }
#line 2023 "src/core/qgssqlstatementparser.cpp"
    break;

  case 43: /* expr_non_logical: MINUS expr_non_logical  */
#line 301 "src/core/qgssqlstatementparser.yy"
                                          { (yyval.node) = new QgsSQLStatement::NodeUnaryOperator( QgsSQLStatement::uoMinus, (yyvsp[0].node)); }
#line 2029 "src/core/qgssqlstatementparser.cpp"
    break;

  case 44: /* expr_non_logical: CAST '(' expr AS IDENTIFIER ')'  */
#line 304 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.node) = new QgsSQLStatement::NodeCast((yyvsp[-3].node), *(yyvsp[-1].text));
            delete (yyvsp[-1].text);
        }
#line 2038 "src/core/qgssqlstatementparser.cpp"
    break;

  case 45: /* select_type: SELECT  */
#line 313 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.boolVal) = false;
        }
#line 2046 "src/core/qgssqlstatementparser.cpp"
    break;

  case 46: /* select_type: SELECT ALL  */
#line 317 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.boolVal) = false;
        }
#line 2054 "src/core/qgssqlstatementparser.cpp"
    break;

  case 47: /* select_type: SELECT DISTINCT  */
#line 321 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.boolVal) = true;
        }
#line 2062 "src/core/qgssqlstatementparser.cpp"
    break;

  case 48: /* select_statement: select_type selected_column_list FROM table_list opt_joins opt_where opt_order_by  */
#line 328 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselect) = new QgsSQLStatement::NodeSelect(*(yyvsp[-3].tablelist), *(yyvsp[-5].selectedcolumnlist), (yyvsp[-6].boolVal));
            delete (yyvsp[-5].selectedcolumnlist);
            delete (yyvsp[-3].tablelist);
        }
#line 2072 "src/core/qgssqlstatementparser.cpp"
    break;

  case 49: /* selected_column_list: selected_column_list COMMA selected_column  */
#line 337 "src/core/qgssqlstatementparser.yy"
       {
          (yyval.selectedcolumnlist) = (yyvsp[-2].selectedcolumnlist); (yyvsp[-2].selectedcolumnlist)->append((yyvsp[0].nodeselectedcolumn));
       }
#line 2080 "src/core/qgssqlstatementparser.cpp"
    break;

  case 50: /* selected_column_list: selected_column  */
#line 341 "src/core/qgssqlstatementparser.yy"
      { (yyval.selectedcolumnlist) = new QList<QgsSQLStatement::NodeSelectedColumn*>(); (yyval.selectedcolumnlist)->append((yyvsp[0].nodeselectedcolumn)); }
#line 2086 "src/core/qgssqlstatementparser.cpp"
    break;

  case 51: /* selected_column: expr  */
#line 346 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn((yyvsp[0].node));
        }
#line 2094 "src/core/qgssqlstatementparser.cpp"
    break;

  case 52: /* selected_column: expr as_clause  */
#line 351 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn((yyvsp[-1].node));
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[0].text));
            delete (yyvsp[0].text);
        }
#line 2104 "src/core/qgssqlstatementparser.cpp"
    break;

  case 53: /* selected_column: MUL_OR_STAR  */
#line 358 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( new QgsSQLStatement::NodeColumnRef("*", true) );
        }
#line 2112 "src/core/qgssqlstatementparser.cpp"
    break;

  case 54: /* selected_column: IDENTIFIER '.' MUL_OR_STAR  */
#line 363 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( new QgsSQLStatement::NodeColumnRef(*(yyvsp[-2].text), "*", true) );
            delete (yyvsp[-2].text);
        }
#line 2121 "src/core/qgssqlstatementparser.cpp"
    break;

  case 55: /* selected_column: IDENTIFIER '(' MUL_OR_STAR ')'  */
#line 369 "src/core/qgssqlstatementparser.yy"
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
#line 2140 "src/core/qgssqlstatementparser.cpp"
    break;

  case 56: /* selected_column: IDENTIFIER '(' MUL_OR_STAR ')' as_clause  */
#line 385 "src/core/qgssqlstatementparser.yy"
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
#line 2162 "src/core/qgssqlstatementparser.cpp"
    break;

  case 57: /* selected_column: IDENTIFIER '(' DISTINCT column_name ')'  */
#line 404 "src/core/qgssqlstatementparser.yy"
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
#line 2184 "src/core/qgssqlstatementparser.cpp"
    break;

  case 58: /* selected_column: IDENTIFIER '(' DISTINCT column_name ')' as_clause  */
#line 423 "src/core/qgssqlstatementparser.yy"
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
#line 2209 "src/core/qgssqlstatementparser.cpp"
    break;

  case 59: /* as_clause: AS IDENTIFIER  */
#line 447 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.text) = (yyvsp[0].text);
        }
#line 2217 "src/core/qgssqlstatementparser.cpp"
    break;

  case 62: /* opt_where: WHERE expr  */
#line 456 "src/core/qgssqlstatementparser.yy"
        {
            parser_ctx->setWhere((yyvsp[0].node));
        }
#line 2225 "src/core/qgssqlstatementparser.cpp"
    break;

  case 63: /* join_qualifier: JOIN  */
#line 463 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtDefault;
        }
#line 2233 "src/core/qgssqlstatementparser.cpp"
    break;

  case 64: /* join_qualifier: LEFT JOIN  */
#line 467 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtLeft;
        }
#line 2241 "src/core/qgssqlstatementparser.cpp"
    break;

  case 65: /* join_qualifier: LEFT OUTER JOIN  */
#line 471 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtLeftOuter;
        }
#line 2249 "src/core/qgssqlstatementparser.cpp"
    break;

  case 66: /* join_qualifier: RIGHT JOIN  */
#line 475 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtRight;
        }
#line 2257 "src/core/qgssqlstatementparser.cpp"
    break;

  case 67: /* join_qualifier: RIGHT OUTER JOIN  */
#line 479 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtRightOuter;
        }
#line 2265 "src/core/qgssqlstatementparser.cpp"
    break;

  case 68: /* join_qualifier: FULL JOIN  */
#line 483 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtFull;
        }
#line 2273 "src/core/qgssqlstatementparser.cpp"
    break;

  case 69: /* join_qualifier: CROSS JOIN  */
#line 487 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtCross;
        }
#line 2281 "src/core/qgssqlstatementparser.cpp"
    break;

  case 70: /* join_qualifier: INNER JOIN  */
#line 491 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.jointype) = QgsSQLStatement::jtInner;
        }
#line 2289 "src/core/qgssqlstatementparser.cpp"
    break;

  case 71: /* join: join_qualifier table_def ON expr  */
#line 498 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodejoin) = new QgsSQLStatement::NodeJoin((yyvsp[-2].nodetabledef), (yyvsp[0].node), (yyvsp[-3].jointype));
        }
#line 2297 "src/core/qgssqlstatementparser.cpp"
    break;

  case 72: /* join: join_qualifier table_def USING '(' using_list ')'  */
#line 502 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodejoin) = new QgsSQLStatement::NodeJoin((yyvsp[-4].nodetabledef), *(yyvsp[-1].usinglist), (yyvsp[-5].jointype));
            delete (yyvsp[-1].usinglist);
        }
#line 2306 "src/core/qgssqlstatementparser.cpp"
    break;

  case 73: /* using_list: IDENTIFIER  */
#line 510 "src/core/qgssqlstatementparser.yy"
        {
          (yyval.usinglist) = new QList<QString>(); (yyval.usinglist)->push_back(*(yyvsp[0].text));
          delete (yyvsp[0].text);
        }
#line 2315 "src/core/qgssqlstatementparser.cpp"
    break;

  case 74: /* using_list: using_list COMMA IDENTIFIER  */
#line 515 "src/core/qgssqlstatementparser.yy"
        {
          (yyval.usinglist) = (yyvsp[-2].usinglist); (yyvsp[-2].usinglist)->push_back(*(yyvsp[0].text));
          delete (yyvsp[0].text);
        }
#line 2324 "src/core/qgssqlstatementparser.cpp"
    break;

  case 75: /* join_list: join  */
#line 523 "src/core/qgssqlstatementparser.yy"
        {
          (yyval.joinlist) = new QList<QgsSQLStatement::NodeJoin*>(); (yyval.joinlist)->push_back((yyvsp[0].nodejoin));
        }
#line 2332 "src/core/qgssqlstatementparser.cpp"
    break;

  case 76: /* join_list: join_list join  */
#line 527 "src/core/qgssqlstatementparser.yy"
        {
          (yyval.joinlist) = (yyvsp[-1].joinlist); (yyvsp[-1].joinlist)->push_back((yyvsp[0].nodejoin));
        }
#line 2340 "src/core/qgssqlstatementparser.cpp"
    break;

  case 78: /* opt_joins: join_list  */
#line 534 "src/core/qgssqlstatementparser.yy"
        {
            parser_ctx->setJoins( *(yyvsp[0].joinlist) );
            delete (yyvsp[0].joinlist);
        }
#line 2349 "src/core/qgssqlstatementparser.cpp"
    break;

  case 80: /* opt_order_by: ORDER BY sort_spec_list  */
#line 542 "src/core/qgssqlstatementparser.yy"
      {
          parser_ctx->setOrderBy(*(yyvsp[0].columnsortedlist));
          delete (yyvsp[0].columnsortedlist);
      }
#line 2358 "src/core/qgssqlstatementparser.cpp"
    break;

  case 81: /* sort_spec_list: sort_spec_list COMMA sort_spec  */
#line 550 "src/core/qgssqlstatementparser.yy"
       {
          (yyval.columnsortedlist) = (yyvsp[-2].columnsortedlist); (yyvsp[-2].columnsortedlist)->push_back((yyvsp[0].nodecolumnsorted));
       }
#line 2366 "src/core/qgssqlstatementparser.cpp"
    break;

  case 82: /* sort_spec_list: sort_spec  */
#line 554 "src/core/qgssqlstatementparser.yy"
      { (yyval.columnsortedlist) = new QList<QgsSQLStatement::NodeColumnSorted*>(); (yyval.columnsortedlist)->push_back((yyvsp[0].nodecolumnsorted)); }
#line 2372 "src/core/qgssqlstatementparser.cpp"
    break;

  case 83: /* sort_spec: column_name  */
#line 559 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[0].nodecolumnref), true );
        }
#line 2380 "src/core/qgssqlstatementparser.cpp"
    break;

  case 84: /* sort_spec: column_name ASC  */
#line 563 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[-1].nodecolumnref), true );
        }
#line 2388 "src/core/qgssqlstatementparser.cpp"
    break;

  case 85: /* sort_spec: column_name DESC  */
#line 567 "src/core/qgssqlstatementparser.yy"
        {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[-1].nodecolumnref), false );
        }
#line 2396 "src/core/qgssqlstatementparser.cpp"
    break;

  case 86: /* table_def: IDENTIFIER  */
#line 574 "src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[0].text));
        delete (yyvsp[0].text);
    }
#line 2405 "src/core/qgssqlstatementparser.cpp"
    break;

  case 87: /* table_def: IDENTIFIER '.' IDENTIFIER  */
#line 579 "src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[-2].text), *(yyvsp[0].text), QString());
        delete (yyvsp[-2].text);
        delete (yyvsp[0].text);
    }
#line 2415 "src/core/qgssqlstatementparser.cpp"
    break;

  case 88: /* table_def: IDENTIFIER '.' IDENTIFIER '.' IDENTIFIER  */
#line 585 "src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[-4].text) + '.' + *(yyvsp[-2].text), *(yyvsp[0].text), QString());
        delete (yyvsp[-4].text);
        delete (yyvsp[-2].text);
        delete (yyvsp[0].text);
    }
#line 2426 "src/core/qgssqlstatementparser.cpp"
    break;

  case 89: /* table_def: IDENTIFIER as_clause  */
#line 592 "src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[-1].text), *(yyvsp[0].text));
        delete (yyvsp[-1].text);
        delete (yyvsp[0].text);
    }
#line 2436 "src/core/qgssqlstatementparser.cpp"
    break;

  case 90: /* table_def: IDENTIFIER '.' IDENTIFIER as_clause  */
#line 598 "src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[-3].text), *(yyvsp[-1].text), *(yyvsp[0].text));
        delete (yyvsp[-3].text);
        delete (yyvsp[-1].text);
        delete (yyvsp[0].text);
    }
#line 2447 "src/core/qgssqlstatementparser.cpp"
    break;

  case 91: /* table_def: IDENTIFIER '.' IDENTIFIER '.' IDENTIFIER as_clause  */
#line 605 "src/core/qgssqlstatementparser.yy"
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[-5].text) + '.' + *(yyvsp[-3].text), *(yyvsp[-1].text), *(yyvsp[0].text));
        delete (yyvsp[-5].text);
        delete (yyvsp[-3].text);
        delete (yyvsp[-1].text);
        delete (yyvsp[0].text);
    }
#line 2459 "src/core/qgssqlstatementparser.cpp"
    break;

  case 92: /* table_list: table_list COMMA table_def  */
#line 616 "src/core/qgssqlstatementparser.yy"
       {
          (yyval.tablelist) = (yyvsp[-2].tablelist); (yyvsp[-2].tablelist)->push_back((yyvsp[0].nodetabledef));
       }
#line 2467 "src/core/qgssqlstatementparser.cpp"
    break;

  case 93: /* table_list: table_def  */
#line 620 "src/core/qgssqlstatementparser.yy"
      { (yyval.tablelist) = new QList<QgsSQLStatement::NodeTableDef*>(); (yyval.tablelist)->push_back((yyvsp[0].nodetabledef)); }
#line 2473 "src/core/qgssqlstatementparser.cpp"
    break;


#line 2477 "src/core/qgssqlstatementparser.cpp"

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
          = {yyssp, yytoken};
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
        yyerror (parser_ctx, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, parser_ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (parser_ctx, YY_("memory exhausted"));
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
                  yytoken, &yylval, parser_ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, parser_ctx);
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

#line 623 "src/core/qgssqlstatementparser.yy"



// returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
QgsSQLStatement::Node* parse(const QString& str, QString& parserErrorMsg, bool allowFragments )
{
  sqlstatement_parser_context ctx;
  ctx.rootNode = 0;

  sqlstatement_lex_init(&ctx.flex_scanner);
  sqlstatement__scan_string(str.toUtf8().constData(), ctx.flex_scanner);
  int res = sqlstatement_parse(&ctx);
  sqlstatement_lex_destroy(ctx.flex_scanner);

  // list should be empty when parsing was OK
  if ( res == 0 && ( ctx.rootNode || ( allowFragments && ctx.expression ) ) ) // success?
  {
    if ( ctx.rootNode )
    {
      ctx.rootNode->setWhere(ctx.whereExp);
      ctx.rootNode->setJoins(ctx.joinList);
      ctx.rootNode->setOrderBy(ctx.orderByList);
      return ctx.rootNode;
    }
    else
    {
      //fragment
      return ctx.expression;
    }
  }
  else // error?
  {
    if( !allowFragments && !ctx.rootNode &&
        !str.startsWith("SELECT", Qt::CaseInsensitive) )
    {
      parserErrorMsg = QObject::tr("Expression must begin with SELECT");
    }
    else
    {
      parserErrorMsg = ctx.errorMsg;
    }
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

