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

#ifndef YY_SQLSTATEMENT_VOLUMES_DATA_WORK_PROJECTS_DESKTOP_QGIS3_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED
# define YY_SQLSTATEMENT_VOLUMES_DATA_WORK_PROJECTS_DESKTOP_QGIS3_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sqlstatement_debug;
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
    LIKE = 266,                    /* LIKE  */
    IS = 267,                      /* IS  */
    PLUS = 268,                    /* PLUS  */
    MINUS = 269,                   /* MINUS  */
    MUL_OR_STAR = 270,             /* MUL_OR_STAR  */
    DIV = 271,                     /* DIV  */
    INTDIV = 272,                  /* INTDIV  */
    MOD = 273,                     /* MOD  */
    CONCAT = 274,                  /* CONCAT  */
    POW = 275,                     /* POW  */
    NOT = 276,                     /* NOT  */
    IN = 277,                      /* IN  */
    BETWEEN = 278,                 /* BETWEEN  */
    SELECT = 279,                  /* SELECT  */
    ALL = 280,                     /* ALL  */
    DISTINCT = 281,                /* DISTINCT  */
    CAST = 282,                    /* CAST  */
    AS = 283,                      /* AS  */
    JOIN = 284,                    /* JOIN  */
    FROM = 285,                    /* FROM  */
    ON = 286,                      /* ON  */
    USING = 287,                   /* USING  */
    WHERE = 288,                   /* WHERE  */
    ORDER = 289,                   /* ORDER  */
    BY = 290,                      /* BY  */
    ASC = 291,                     /* ASC  */
    DESC = 292,                    /* DESC  */
    LEFT = 293,                    /* LEFT  */
    RIGHT = 294,                   /* RIGHT  */
    INNER = 295,                   /* INNER  */
    OUTER = 296,                   /* OUTER  */
    CROSS = 297,                   /* CROSS  */
    FULL = 298,                    /* FULL  */
    NATURAL = 299,                 /* NATURAL  */
    UNION = 300,                   /* UNION  */
    NUMBER_FLOAT = 301,            /* NUMBER_FLOAT  */
    NUMBER_INT = 302,              /* NUMBER_INT  */
    NUMBER_INT64 = 303,            /* NUMBER_INT64  */
    BOOLEAN = 304,                 /* BOOLEAN  */
    NULLVALUE = 305,               /* NULLVALUE  */
    STRING = 306,                  /* STRING  */
    IDENTIFIER = 307,              /* IDENTIFIER  */
    COMMA = 308,                   /* COMMA  */
    Unknown_CHARACTER = 309,       /* Unknown_CHARACTER  */
    UMINUS = 310                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 93 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgssqlstatementparser.yy"

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

#line 143 "/Volumes/Data/work/projects/desktop/qgis3/src/core/qgssqlstatementparser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int sqlstatement_parse (sqlstatement_parser_context* parser_ctx);


#endif /* !YY_SQLSTATEMENT_VOLUMES_DATA_WORK_PROJECTS_DESKTOP_QGIS3_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED  */
