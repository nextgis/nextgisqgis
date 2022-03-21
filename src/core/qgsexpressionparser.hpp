/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_EXP_VOLUMES_DATA_WORK_PROJECTS_DESKTOP_QGIS3_SRC_CORE_QGSEXPRESSIONPARSER_HPP_INCLUDED
# define YY_EXP_VOLUMES_DATA_WORK_PROJECTS_DESKTOP_QGIS3_SRC_CORE_QGSEXPRESSIONPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int exp_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OR = 258,                      /* OR  */
    AND = 259,                     /* AND  */
    EQ = 260,                      /* EQ  */
    NE = 261,                      /* NE  */
    LE = 262,                      /* LE  */
    GE = 263,                      /* GE  */
    LT = 264,                      /* LT  */
    GT = 265,                      /* GT  */
    REGEXP = 266,                  /* REGEXP  */
    LIKE = 267,                    /* LIKE  */
    IS = 268,                      /* IS  */
    PLUS = 269,                    /* PLUS  */
    MINUS = 270,                   /* MINUS  */
    MUL = 271,                     /* MUL  */
    DIV = 272,                     /* DIV  */
    INTDIV = 273,                  /* INTDIV  */
    MOD = 274,                     /* MOD  */
    CONCAT = 275,                  /* CONCAT  */
    POW = 276,                     /* POW  */
    NOT = 277,                     /* NOT  */
    IN = 278,                      /* IN  */
    NUMBER_FLOAT = 279,            /* NUMBER_FLOAT  */
    NUMBER_INT = 280,              /* NUMBER_INT  */
    NUMBER_INT64 = 281,            /* NUMBER_INT64  */
    BOOLEAN = 282,                 /* BOOLEAN  */
    NULLVALUE = 283,               /* NULLVALUE  */
    CASE = 284,                    /* CASE  */
    WHEN = 285,                    /* WHEN  */
    THEN = 286,                    /* THEN  */
    ELSE = 287,                    /* ELSE  */
    END = 288,                     /* END  */
    STRING = 289,                  /* STRING  */
    QUOTED_COLUMN_REF = 290,       /* QUOTED_COLUMN_REF  */
    NAME = 291,                    /* NAME  */
    SPECIAL_COL = 292,             /* SPECIAL_COL  */
    VARIABLE = 293,                /* VARIABLE  */
    NAMED_NODE = 294,              /* NAMED_NODE  */
    COMMA = 295,                   /* COMMA  */
    Unknown_CHARACTER = 296,       /* Unknown_CHARACTER  */
    UMINUS = 297                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 94 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.yy"

  QgsExpressionNode* node;
  QgsExpressionNode::NodeList* nodelist;
  QgsExpressionNode::NamedNode* namednode;
  double numberFloat;
  int    numberInt;
  qlonglong numberInt64;
  bool   boolVal;
  QString* text;
  QgsExpressionNodeBinaryOperator::BinaryOperator b_op;
  QgsExpressionNodeUnaryOperator::UnaryOperator u_op;
  QgsExpressionNodeCondition::WhenThen* whenthen;
  QgsExpressionNodeCondition::WhenThenList* whenthenlist;

#line 121 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgsexpressionparser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int exp_parse (expression_parser_context* parser_ctx);


#endif /* !YY_EXP_VOLUMES_DATA_WORK_PROJECTS_DESKTOP_QGIS3_SRC_CORE_QGSEXPRESSIONPARSER_HPP_INCLUDED  */
