/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_TAB_HH_INCLUDED
# define YY_YY_PARSER_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    UNSIGNED_INT = 258,
    UNSIGNED_LONG = 259,
    INT = 260,
    BOOL = 261,
    CHAR = 262,
    LONG = 263,
    STRING = 264,
    RETURN = 265,
    BREAK = 266,
    READ = 267,
    WRITE = 268,
    CLOSE = 269,
    CONTINUE = 270,
    FOR = 271,
    WHILE = 272,
    IF = 273,
    ELSE = 274,
    ELSEIF = 275,
    VOID = 276,
    TRUE = 277,
    FALSE = 278,
    UNSIGNED_INT_VALUE = 279,
    SIGNED_INT_VALUE = 280,
    CHAR_VALUE = 281,
    STRING_VALUE = 282,
    VARIABLE_NAME = 283,
    IMPORT = 284,
    QUESTION_MARK = 285,
    COLON = 286,
    COMMA = 287,
    OPN_BRKT = 288,
    CLOSE_BRKT = 289,
    OPN_SQ_BRKT = 290,
    CLOSE_SQ_BRKT = 291,
    OPN_CURLY_BRKT = 292,
    CLOSE_CURLY_BRKT = 293,
    SEMICOLON = 294,
    FILEREAD = 295,
    FILEWRITE = 296,
    LTEQ = 297,
    GTEQ = 298,
    LT = 299,
    GT = 300,
    DBL_EQ = 301,
    PLUS_EQ = 302,
    MINUS_EQ = 303,
    MULTIPLY_EQ = 304,
    DIVIDE_EQ = 305,
    MODULO_EQ = 306,
    PREINC = 307,
    POSTINC = 308,
    PREDEC = 309,
    POSTDEC = 310,
    PLUS = 311,
    MINUS = 312,
    MULTIPLY = 313,
    DIVIDE = 314,
    MODULO = 315,
    NOT_EQ = 316,
    EQ = 317,
    NOT = 318,
    OR = 319,
    AND = 320,
    CLOSE_CLURLY_BRKT = 321
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HH_INCLUDED  */
