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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    Single_Line_Comment = 258,     /* Single_Line_Comment  */
    Multiple_Line_Comment = 259,   /* Multiple_Line_Comment  */
    Groovy_Doc_Comment = 260,      /* Groovy_Doc_Comment  */
    Groovy_Doc_Runtime_Comment = 261, /* Groovy_Doc_Runtime_Comment  */
    annotations = 262,             /* annotations  */
    Finally = 263,                 /* Finally  */
    Groovy_JAVA_Package = 264,     /* Groovy_JAVA_Package  */
    Import = 265,                  /* Import  */
    abstract_Method = 266,         /* abstract_Method  */
    protected_Method = 267,        /* protected_Method  */
    private_Method = 268,          /* private_Method  */
    printing_to_the_console_Method = 269, /* printing_to_the_console_Method  */
    File_Not_Found_Exception = 270, /* File_Not_Found_Exception  */
    Conditional_Statement = 271,   /* Conditional_Statement  */
    Loop_Statement = 272,          /* Loop_Statement  */
    Object_Derived_Data_Type = 273, /* Object_Derived_Data_Type  */
    class_Derived_Data_Type = 274, /* class_Derived_Data_Type  */
    record_Derived_Data_Type = 275, /* record_Derived_Data_Type  */
    interface_Derived_Data_Type = 276, /* interface_Derived_Data_Type  */
    List_Data_type = 277,          /* List_Data_type  */
    Array_Data_type = 278,         /* Array_Data_type  */
    Keyword_as_an_Identifier = 279, /* Keyword_as_an_Identifier  */
    Assert = 280,                  /* Assert  */
    For = 281,                     /* For  */
    Return = 282,                  /* Return  */
    Try = 283,                     /* Try  */
    Catch = 284,                   /* Catch  */
    Exception = 285,               /* Exception  */
    While = 286,                   /* While  */
    If = 287,                      /* If  */
    In = 288,                      /* In  */
    Else = 289,                    /* Else  */
    Def = 290,                     /* Def  */
    Do = 291,                      /* Do  */
    AndOr = 292,                   /* AndOr  */
    Switch = 293,                  /* Switch  */
    Case = 294,                    /* Case  */
    Default = 295,                 /* Default  */
    Break = 296,                   /* Break  */
    InstanceOf = 297,              /* InstanceOf  */
    This = 298,                    /* This  */
    Void = 299,                    /* Void  */
    Keyword = 300,                 /* Keyword  */
    Boolean_literal_Boolean_Data_Type = 301, /* Boolean_literal_Boolean_Data_Type  */
    Double_Quoted_String_Literal = 302, /* Double_Quoted_String_Literal  */
    Single_Quoted_String_Literal = 303, /* Single_Quoted_String_Literal  */
    Triple_Quoted_String_Literal = 304, /* Triple_Quoted_String_Literal  */
    Slashy_string_Literal = 305,   /* Slashy_string_Literal  */
    Dollar_slashy_string_Literal = 306, /* Dollar_slashy_string_Literal  */
    Binary_Literal_Primitive_Data_Types = 307, /* Binary_Literal_Primitive_Data_Types  */
    Hexadecimal_Literal_Primitive_Data_Types = 308, /* Hexadecimal_Literal_Primitive_Data_Types  */
    Octal_Literal_Primitive_Data_Types = 309, /* Octal_Literal_Primitive_Data_Types  */
    Negative_Integer_Literal_Primitive_Data_Types = 310, /* Negative_Integer_Literal_Primitive_Data_Types  */
    Float_Literal_Primitive_Data_Types = 311, /* Float_Literal_Primitive_Data_Types  */
    Integer_Literal_Primitive_Data_Types = 312, /* Integer_Literal_Primitive_Data_Types  */
    Long_Integer_Literal_Primitive_Data_Types = 313, /* Long_Integer_Literal_Primitive_Data_Types  */
    comparisionOperater = 314,     /* comparisionOperater  */
    operator = 315,                /* operator  */
    Assignement_Operator = 316,    /* Assignement_Operator  */
    comma = 317,                   /* comma  */
    colon = 318,                   /* colon  */
    semi_colon = 319,              /* semi_colon  */
    left_round = 320,              /* left_round  */
    right_round = 321,             /* right_round  */
    left_curly = 322,              /* left_curly  */
    right_curly = 323,             /* right_curly  */
    left_square = 324,             /* left_square  */
    right_square = 325,            /* right_square  */
    Boolean_Data_Type = 326,       /* Boolean_Data_Type  */
    Integer_Data_Type = 327,       /* Integer_Data_Type  */
    Character_Data_Type = 328,     /* Character_Data_Type  */
    String_Data_Type = 329,        /* String_Data_Type  */
    Short_Data_Type = 330,         /* Short_Data_Type  */
    Long_Data_Type = 331,          /* Long_Data_Type  */
    Float_Data_Type = 332,         /* Float_Data_Type  */
    Double_Data_Type = 333,        /* Double_Data_Type  */
    Identifier = 334,              /* Identifier  */
    Each = 335,                    /* Each  */
    Keyword_as_an_Identifier_using_dot = 336, /* Keyword_as_an_Identifier_using_dot  */
    SPECIAL_CHARACTERS = 337,      /* SPECIAL_CHARACTERS  */
    NL = 338,                      /* NL  */
    dot = 339,                     /* dot  */
    List = 340,                    /* List  */
    New = 341,                     /* New  */
    end = 342                      /* end  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define Single_Line_Comment 258
#define Multiple_Line_Comment 259
#define Groovy_Doc_Comment 260
#define Groovy_Doc_Runtime_Comment 261
#define annotations 262
#define Finally 263
#define Groovy_JAVA_Package 264
#define Import 265
#define abstract_Method 266
#define protected_Method 267
#define private_Method 268
#define printing_to_the_console_Method 269
#define File_Not_Found_Exception 270
#define Conditional_Statement 271
#define Loop_Statement 272
#define Object_Derived_Data_Type 273
#define class_Derived_Data_Type 274
#define record_Derived_Data_Type 275
#define interface_Derived_Data_Type 276
#define List_Data_type 277
#define Array_Data_type 278
#define Keyword_as_an_Identifier 279
#define Assert 280
#define For 281
#define Return 282
#define Try 283
#define Catch 284
#define Exception 285
#define While 286
#define If 287
#define In 288
#define Else 289
#define Def 290
#define Do 291
#define AndOr 292
#define Switch 293
#define Case 294
#define Default 295
#define Break 296
#define InstanceOf 297
#define This 298
#define Void 299
#define Keyword 300
#define Boolean_literal_Boolean_Data_Type 301
#define Double_Quoted_String_Literal 302
#define Single_Quoted_String_Literal 303
#define Triple_Quoted_String_Literal 304
#define Slashy_string_Literal 305
#define Dollar_slashy_string_Literal 306
#define Binary_Literal_Primitive_Data_Types 307
#define Hexadecimal_Literal_Primitive_Data_Types 308
#define Octal_Literal_Primitive_Data_Types 309
#define Negative_Integer_Literal_Primitive_Data_Types 310
#define Float_Literal_Primitive_Data_Types 311
#define Integer_Literal_Primitive_Data_Types 312
#define Long_Integer_Literal_Primitive_Data_Types 313
#define comparisionOperater 314
#define operator 315
#define Assignement_Operator 316
#define comma 317
#define colon 318
#define semi_colon 319
#define left_round 320
#define right_round 321
#define left_curly 322
#define right_curly 323
#define left_square 324
#define right_square 325
#define Boolean_Data_Type 326
#define Integer_Data_Type 327
#define Character_Data_Type 328
#define String_Data_Type 329
#define Short_Data_Type 330
#define Long_Data_Type 331
#define Float_Data_Type 332
#define Double_Data_Type 333
#define Identifier 334
#define Each 335
#define Keyword_as_an_Identifier_using_dot 336
#define SPECIAL_CHARACTERS 337
#define NL 338
#define dot 339
#define List 340
#define New 341
#define end 342

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
