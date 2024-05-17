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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "just.y"
 
/* Definition section */
#include<stdio.h> 
#include<stdlib.h> 
extern int line_number;
extern int yylex();
extern int yyparse();
extern int yylval;
extern void yyerror(const char*);

int x = 0; // Initialize x

#line 84 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Single_Line_Comment = 3,        /* Single_Line_Comment  */
  YYSYMBOL_Multiple_Line_Comment = 4,      /* Multiple_Line_Comment  */
  YYSYMBOL_Groovy_Doc_Comment = 5,         /* Groovy_Doc_Comment  */
  YYSYMBOL_Groovy_Doc_Runtime_Comment = 6, /* Groovy_Doc_Runtime_Comment  */
  YYSYMBOL_annotations = 7,                /* annotations  */
  YYSYMBOL_Finally = 8,                    /* Finally  */
  YYSYMBOL_Groovy_JAVA_Package = 9,        /* Groovy_JAVA_Package  */
  YYSYMBOL_Import = 10,                    /* Import  */
  YYSYMBOL_abstract_Method = 11,           /* abstract_Method  */
  YYSYMBOL_protected_Method = 12,          /* protected_Method  */
  YYSYMBOL_private_Method = 13,            /* private_Method  */
  YYSYMBOL_printing_to_the_console_Method = 14, /* printing_to_the_console_Method  */
  YYSYMBOL_File_Not_Found_Exception = 15,  /* File_Not_Found_Exception  */
  YYSYMBOL_Conditional_Statement = 16,     /* Conditional_Statement  */
  YYSYMBOL_Loop_Statement = 17,            /* Loop_Statement  */
  YYSYMBOL_Object_Derived_Data_Type = 18,  /* Object_Derived_Data_Type  */
  YYSYMBOL_class_Derived_Data_Type = 19,   /* class_Derived_Data_Type  */
  YYSYMBOL_record_Derived_Data_Type = 20,  /* record_Derived_Data_Type  */
  YYSYMBOL_interface_Derived_Data_Type = 21, /* interface_Derived_Data_Type  */
  YYSYMBOL_List_Data_type = 22,            /* List_Data_type  */
  YYSYMBOL_Array_Data_type = 23,           /* Array_Data_type  */
  YYSYMBOL_Keyword_as_an_Identifier = 24,  /* Keyword_as_an_Identifier  */
  YYSYMBOL_Assert = 25,                    /* Assert  */
  YYSYMBOL_For = 26,                       /* For  */
  YYSYMBOL_Return = 27,                    /* Return  */
  YYSYMBOL_Try = 28,                       /* Try  */
  YYSYMBOL_Catch = 29,                     /* Catch  */
  YYSYMBOL_Exception = 30,                 /* Exception  */
  YYSYMBOL_While = 31,                     /* While  */
  YYSYMBOL_If = 32,                        /* If  */
  YYSYMBOL_In = 33,                        /* In  */
  YYSYMBOL_Else = 34,                      /* Else  */
  YYSYMBOL_Def = 35,                       /* Def  */
  YYSYMBOL_Do = 36,                        /* Do  */
  YYSYMBOL_AndOr = 37,                     /* AndOr  */
  YYSYMBOL_Switch = 38,                    /* Switch  */
  YYSYMBOL_Case = 39,                      /* Case  */
  YYSYMBOL_Default = 40,                   /* Default  */
  YYSYMBOL_Break = 41,                     /* Break  */
  YYSYMBOL_InstanceOf = 42,                /* InstanceOf  */
  YYSYMBOL_This = 43,                      /* This  */
  YYSYMBOL_Void = 44,                      /* Void  */
  YYSYMBOL_Keyword = 45,                   /* Keyword  */
  YYSYMBOL_Boolean_literal_Boolean_Data_Type = 46, /* Boolean_literal_Boolean_Data_Type  */
  YYSYMBOL_Double_Quoted_String_Literal = 47, /* Double_Quoted_String_Literal  */
  YYSYMBOL_Single_Quoted_String_Literal = 48, /* Single_Quoted_String_Literal  */
  YYSYMBOL_Triple_Quoted_String_Literal = 49, /* Triple_Quoted_String_Literal  */
  YYSYMBOL_Slashy_string_Literal = 50,     /* Slashy_string_Literal  */
  YYSYMBOL_Dollar_slashy_string_Literal = 51, /* Dollar_slashy_string_Literal  */
  YYSYMBOL_Binary_Literal_Primitive_Data_Types = 52, /* Binary_Literal_Primitive_Data_Types  */
  YYSYMBOL_Hexadecimal_Literal_Primitive_Data_Types = 53, /* Hexadecimal_Literal_Primitive_Data_Types  */
  YYSYMBOL_Octal_Literal_Primitive_Data_Types = 54, /* Octal_Literal_Primitive_Data_Types  */
  YYSYMBOL_Negative_Integer_Literal_Primitive_Data_Types = 55, /* Negative_Integer_Literal_Primitive_Data_Types  */
  YYSYMBOL_Float_Literal_Primitive_Data_Types = 56, /* Float_Literal_Primitive_Data_Types  */
  YYSYMBOL_Integer_Literal_Primitive_Data_Types = 57, /* Integer_Literal_Primitive_Data_Types  */
  YYSYMBOL_Long_Integer_Literal_Primitive_Data_Types = 58, /* Long_Integer_Literal_Primitive_Data_Types  */
  YYSYMBOL_comparisionOperater = 59,       /* comparisionOperater  */
  YYSYMBOL_operator = 60,                  /* operator  */
  YYSYMBOL_Assignement_Operator = 61,      /* Assignement_Operator  */
  YYSYMBOL_comma = 62,                     /* comma  */
  YYSYMBOL_colon = 63,                     /* colon  */
  YYSYMBOL_semi_colon = 64,                /* semi_colon  */
  YYSYMBOL_left_round = 65,                /* left_round  */
  YYSYMBOL_right_round = 66,               /* right_round  */
  YYSYMBOL_left_curly = 67,                /* left_curly  */
  YYSYMBOL_right_curly = 68,               /* right_curly  */
  YYSYMBOL_left_square = 69,               /* left_square  */
  YYSYMBOL_right_square = 70,              /* right_square  */
  YYSYMBOL_Boolean_Data_Type = 71,         /* Boolean_Data_Type  */
  YYSYMBOL_Integer_Data_Type = 72,         /* Integer_Data_Type  */
  YYSYMBOL_Character_Data_Type = 73,       /* Character_Data_Type  */
  YYSYMBOL_String_Data_Type = 74,          /* String_Data_Type  */
  YYSYMBOL_Short_Data_Type = 75,           /* Short_Data_Type  */
  YYSYMBOL_Long_Data_Type = 76,            /* Long_Data_Type  */
  YYSYMBOL_Float_Data_Type = 77,           /* Float_Data_Type  */
  YYSYMBOL_Double_Data_Type = 78,          /* Double_Data_Type  */
  YYSYMBOL_Identifier = 79,                /* Identifier  */
  YYSYMBOL_Each = 80,                      /* Each  */
  YYSYMBOL_Keyword_as_an_Identifier_using_dot = 81, /* Keyword_as_an_Identifier_using_dot  */
  YYSYMBOL_SPECIAL_CHARACTERS = 82,        /* SPECIAL_CHARACTERS  */
  YYSYMBOL_NL = 83,                        /* NL  */
  YYSYMBOL_dot = 84,                       /* dot  */
  YYSYMBOL_List = 85,                      /* List  */
  YYSYMBOL_New = 86,                       /* New  */
  YYSYMBOL_end = 87,                       /* end  */
  YYSYMBOL_YYACCEPT = 88,                  /* $accept  */
  YYSYMBOL_empty_rule = 89,                /* empty_rule  */
  YYSYMBOL_program = 90,                   /* program  */
  YYSYMBOL_content = 91,                   /* content  */
  YYSYMBOL_assignement = 92,               /* assignement  */
  YYSYMBOL_term = 93,                      /* term  */
  YYSYMBOL_any = 94,                       /* any  */
  YYSYMBOL_Instruction = 95,               /* Instruction  */
  YYSYMBOL_Line = 96,                      /* Line  */
  YYSYMBOL_EndLine = 97,                   /* EndLine  */
  YYSYMBOL_InstructionS = 98,              /* InstructionS  */
  YYSYMBOL_LineS = 99,                     /* LineS  */
  YYSYMBOL_Block = 100,                    /* Block  */
  YYSYMBOL_comment = 101,                  /* comment  */
  YYSYMBOL_return = 102,                   /* return  */
  YYSYMBOL_classDeclaration = 103,         /* classDeclaration  */
  YYSYMBOL_variable = 104,                 /* variable  */
  YYSYMBOL_definingVariable = 105,         /* definingVariable  */
  YYSYMBOL_definingDataVariables = 106,    /* definingDataVariables  */
  YYSYMBOL_definingFunction = 107,         /* definingFunction  */
  YYSYMBOL_usingFunction = 108,            /* usingFunction  */
  YYSYMBOL_parameters = 109,               /* parameters  */
  YYSYMBOL_Function_any = 110,             /* Function_any  */
  YYSYMBOL_printfunction = 111,            /* printfunction  */
  YYSYMBOL_printable = 112,                /* printable  */
  YYSYMBOL_literal = 113,                  /* literal  */
  YYSYMBOL_string_literal = 114,           /* string_literal  */
  YYSYMBOL_boolean_literal = 115,          /* boolean_literal  */
  YYSYMBOL_numeric_literal = 116,          /* numeric_literal  */
  YYSYMBOL_TypeData = 117,                 /* TypeData  */
  YYSYMBOL_dataType = 118,                 /* dataType  */
  YYSYMBOL_methods = 119,                  /* methods  */
  YYSYMBOL_usingMethods = 120,             /* usingMethods  */
  YYSYMBOL_For_statement = 121,            /* For_statement  */
  YYSYMBOL_While_statement = 122,          /* While_statement  */
  YYSYMBOL_loop_content = 123,             /* loop_content  */
  YYSYMBOL_Do_while_statement = 124,       /* Do_while_statement  */
  YYSYMBOL_eachStatement = 125,            /* eachStatement  */
  YYSYMBOL_loop_statement = 126,           /* loop_statement  */
  YYSYMBOL_conditionalStatement = 127,     /* conditionalStatement  */
  YYSYMBOL_assertStatement = 128,          /* assertStatement  */
  YYSYMBOL_TryStatement = 129,             /* TryStatement  */
  YYSYMBOL_finally = 130,                  /* finally  */
  YYSYMBOL_Catch_statement = 131,          /* Catch_statement  */
  YYSYMBOL_Catches = 132,                  /* Catches  */
  YYSYMBOL_Catch_content = 133,            /* Catch_content  */
  YYSYMBOL_this = 134,                     /* this  */
  YYSYMBOL_switch_case = 135,              /* switch_case  */
  YYSYMBOL_Cases = 136,                    /* Cases  */
  YYSYMBOL_case_content = 137,             /* case_content  */
  YYSYMBOL_comparision = 138,              /* comparision  */
  YYSYMBOL_in_statement = 139,             /* in_statement  */
  YYSYMBOL_comp_in = 140,                  /* comp_in  */
  YYSYMBOL_true_false = 141,               /* true_false  */
  YYSYMBOL_map = 142,                      /* map  */
  YYSYMBOL_map_unit = 143,                 /* map_unit  */
  YYSYMBOL_map_content = 144,              /* map_content  */
  YYSYMBOL_list = 145,                     /* list  */
  YYSYMBOL_list_unit = 146,                /* list_unit  */
  YYSYMBOL_list_content = 147,             /* list_content  */
  YYSYMBOL_import = 148,                   /* import  */
  YYSYMBOL_LeftClose = 149,                /* LeftClose  */
  YYSYMBOL_RightClose = 150                /* RightClose  */
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
typedef yytype_int16 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  129
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1106

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  281

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   342


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    76,    76,    81,    83,    83,    85,    87,    87,    87,
      87,    87,    89,    89,    89,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    95,    95,    95,    95,    95,    95,    97,    97,    97,
      97,    99,    99,    99,    99,   101,   101,   101,   101,   103,
     105,   105,   105,   105,   107,   111,   111,   115,   115,   115,
     115,   117,   117,   119,   119,   123,   123,   123,   123,   125,
     125,   125,   125,   127,   127,   127,   129,   129,   133,   133,
     135,   138,   138,   138,   140,   140,   140,   140,   140,   142,
     144,   144,   144,   144,   144,   144,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   150,   150,   153,
     153,   153,   155,   160,   161,   162,   162,   162,   162,   162,
     162,   163,   164,   166,   166,   166,   166,   166,   170,   170,
     172,   175,   175,   175,   176,   177,   178,   178,   179,   179,
     182,   186,   187,   187,   188,   188,   188,   188,   191,   192,
     192,   192,   193,   193,   194,   194,   194,   194,   194,   197,
     198,   199,   199,   201,   202,   203,   203,   211,   213,   213,
     214,   214
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "Single_Line_Comment",
  "Multiple_Line_Comment", "Groovy_Doc_Comment",
  "Groovy_Doc_Runtime_Comment", "annotations", "Finally",
  "Groovy_JAVA_Package", "Import", "abstract_Method", "protected_Method",
  "private_Method", "printing_to_the_console_Method",
  "File_Not_Found_Exception", "Conditional_Statement", "Loop_Statement",
  "Object_Derived_Data_Type", "class_Derived_Data_Type",
  "record_Derived_Data_Type", "interface_Derived_Data_Type",
  "List_Data_type", "Array_Data_type", "Keyword_as_an_Identifier",
  "Assert", "For", "Return", "Try", "Catch", "Exception", "While", "If",
  "In", "Else", "Def", "Do", "AndOr", "Switch", "Case", "Default", "Break",
  "InstanceOf", "This", "Void", "Keyword",
  "Boolean_literal_Boolean_Data_Type", "Double_Quoted_String_Literal",
  "Single_Quoted_String_Literal", "Triple_Quoted_String_Literal",
  "Slashy_string_Literal", "Dollar_slashy_string_Literal",
  "Binary_Literal_Primitive_Data_Types",
  "Hexadecimal_Literal_Primitive_Data_Types",
  "Octal_Literal_Primitive_Data_Types",
  "Negative_Integer_Literal_Primitive_Data_Types",
  "Float_Literal_Primitive_Data_Types",
  "Integer_Literal_Primitive_Data_Types",
  "Long_Integer_Literal_Primitive_Data_Types", "comparisionOperater",
  "operator", "Assignement_Operator", "comma", "colon", "semi_colon",
  "left_round", "right_round", "left_curly", "right_curly", "left_square",
  "right_square", "Boolean_Data_Type", "Integer_Data_Type",
  "Character_Data_Type", "String_Data_Type", "Short_Data_Type",
  "Long_Data_Type", "Float_Data_Type", "Double_Data_Type", "Identifier",
  "Each", "Keyword_as_an_Identifier_using_dot", "SPECIAL_CHARACTERS", "NL",
  "dot", "List", "New", "end", "$accept", "empty_rule", "program",
  "content", "assignement", "term", "any", "Instruction", "Line",
  "EndLine", "InstructionS", "LineS", "Block", "comment", "return",
  "classDeclaration", "variable", "definingVariable",
  "definingDataVariables", "definingFunction", "usingFunction",
  "parameters", "Function_any", "printfunction", "printable", "literal",
  "string_literal", "boolean_literal", "numeric_literal", "TypeData",
  "dataType", "methods", "usingMethods", "For_statement",
  "While_statement", "loop_content", "Do_while_statement", "eachStatement",
  "loop_statement", "conditionalStatement", "assertStatement",
  "TryStatement", "finally", "Catch_statement", "Catches", "Catch_content",
  "this", "switch_case", "Cases", "case_content", "comparision",
  "in_statement", "comp_in", "true_false", "map", "map_unit",
  "map_content", "list", "list_unit", "list_content", "import",
  "LeftClose", "RightClose", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-168)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-105)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     434,  -168,  -168,  -168,  -168,  -168,     6,  -168,  -168,  -168,
     349,    32,    32,  -168,    71,  -168,   941,   -35,   977,   518,
     -22,    -2,    32,   518,    10,    -6,    32,  -168,  -168,  -168,
    -168,  -168,   -49,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,    81,    -4,  -168,    68,   434,
    -168,   -50,  -168,   434,   307,  -168,  -168,   -37,  -168,  -168,
    -168,  -168,  -168,     9,  -168,    32,   258,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,   434,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,   977,
     977,   977,    30,  -168,   -14,  -168,  -168,  -168,     9,  -168,
    -168,  -168,  -168,    33,    33,   977,   -38,   -24,  -168,  -168,
      69,  -168,   941,  1013,  -168,   686,    45,  -168,  -168,    87,
     941,   941,  -168,   -15,    88,    32,    32,    49,  -168,  -168,
    -168,   770,  -168,  -168,  -168,   434,    39,  -168,  -168,  -168,
     977,   811,   894,  1025,  -168,    15,  -168,  -168,    55,   -31,
      58,    66,    77,    62,  -168,    79,    76,  1013,   811,  1025,
    -168,  -168,    90,    94,   977,   977,   113,   977,    95,   -31,
      89,  -168,  -168,    97,    87,   146,    99,   102,   882,    98,
     104,   110,   882,    83,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,   108,   114,    32,    33,   -14,  -168,  -168,   882,    92,
    -168,  -168,  -168,   977,   977,  -168,   977,  -168,    30,   111,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,   518,  -168,   148,
    -168,   518,  -168,   518,   518,   115,   941,   116,  1013,   118,
      33,   882,   124,  -168,   120,  -168,  -168,  -168,  -168,  -168,
    -168,    32,   121,  -168,  -168,   154,    33,   125,   107,    30,
      33,  -168,  -168,    33,  -168,   518,   518,  -168,  -168,    33,
    -168,  -168,  -168,  -168,   -32,   440,   440,    55,   132,  -168,
     133,  -168,   602,   602,   434,   156,  -168,  -168,   157,  -168,
    -168
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    50,    51,    52,    53,    29,     0,   109,   110,   111,
       0,     0,     0,   103,    60,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,   168,    96,    97,    98,   105,    99,   100,   101,
     102,    58,    59,    36,   106,     0,     0,    18,    38,    37,
      48,    39,     4,     5,    34,    20,    21,     0,    15,    16,
      25,    26,    17,     0,   108,     0,     0,   107,   123,   124,
     125,    30,    22,    23,    19,   127,    28,   126,    27,     0,
     167,    60,    89,    90,    91,    92,    93,    94,    95,     0,
       0,     0,    12,    80,     9,    11,    78,    10,    81,    83,
      82,    13,    14,     0,     0,     0,   157,     9,   152,   153,
     154,   130,     0,     0,    54,     0,   117,   116,    24,   131,
       0,     0,    62,    61,     0,     0,     0,     0,   169,     1,
       3,    43,    31,    44,    45,    47,    40,    32,    46,    35,
       0,     0,     0,     0,    64,    63,   104,   112,     0,    12,
       0,     0,   161,     0,   164,   165,     0,     0,     0,     0,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   115,   119,     0,   136,   132,     0,     0,     2,     0,
       0,     0,     2,    42,    41,    33,     6,    72,    75,    76,
      77,     0,    73,     0,     0,     0,    70,    71,     2,   170,
      49,     8,    79,     0,     0,   159,     0,   163,     7,     0,
     156,   158,   148,   149,   151,   150,   155,     0,   120,     0,
     137,     0,   133,     0,     0,     0,     0,     0,     0,     0,
      69,     2,    63,   122,     0,   171,   160,   162,   166,    69,
     113,   138,     0,   134,   114,   128,     0,     0,     0,   140,
       0,    68,    74,     0,   139,     0,     0,    65,   121,     0,
      67,    66,   135,   129,     0,     0,     0,     0,     0,    81,
       0,   141,     0,     0,    36,   144,   142,   143,   146,   145,
     147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,  -168,   -20,   -88,   248,   -13,  -168,  -168,
      70,     3,    54,    48,  -168,  -168,     0,  -168,  -121,  -168,
      85,  -140,  -168,  -168,   117,  -167,    13,  -168,  -168,   136,
    -114,  -168,  -168,  -168,  -168,    36,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,    25,  -168,  -168,  -168,  -168,   -70,
    -168,  -168,  -100,   -81,    41,  -168,     1,    43,  -168,     7,
    -168,   -47,   -53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   188,    45,    46,    47,    92,   189,    48,    49,    50,
      51,   138,   117,   118,    55,    56,    94,    58,    59,    60,
      95,   191,   192,    62,    96,    97,    98,    99,   100,    64,
      65,    66,    67,    68,    69,   119,    70,    71,    72,    73,
      74,    75,   222,   174,   175,   242,    76,    77,   267,   276,
     108,   109,   110,   111,   101,   152,   153,   102,   155,   156,
      78,    79,   200
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   149,   122,    52,   164,   163,   116,   265,   266,   166,
     116,   103,   104,    63,   136,    80,   107,   149,   209,    57,
     190,   165,   123,    57,   140,   169,   127,   193,   141,   157,
     112,   168,    63,   137,   128,   201,    63,   190,   225,   176,
     177,   158,   229,   120,   193,   144,   140,   142,    54,    57,
     178,   158,   134,    57,    53,    81,    15,   190,   234,   124,
     159,   190,    63,   121,   193,   145,    63,   216,   193,   208,
     159,     1,     2,     3,     4,   125,   140,   190,   126,    57,
     198,   129,   148,   130,   193,    61,     1,     2,     3,     4,
     157,   252,    63,   143,  -104,  -104,   133,    54,   268,   270,
      32,    54,   170,   135,    61,   107,   167,   135,    61,   172,
     190,    41,   107,    42,   182,    57,   173,   193,   183,   179,
     107,   107,   185,   199,   202,   180,   181,    54,    63,   203,
     205,    57,   131,   135,    61,    57,    81,    15,    61,   204,
     249,   206,   195,   195,    63,   247,   207,   131,    63,   165,
    -104,   132,  -104,   218,   221,    63,    63,   160,   161,   195,
     210,   217,   219,   226,    61,   223,   213,   107,   224,   171,
     227,   228,    63,   144,   230,   235,   231,   239,   241,   248,
      90,   246,    91,    54,   250,   140,   253,   255,   256,   135,
     259,   258,    41,   232,    42,   272,   273,   279,   280,   220,
      61,   184,   147,   277,   116,   237,   150,   214,   116,   215,
     116,   116,   264,   238,   271,     0,    61,    57,     0,     0,
      61,    57,     0,    57,    57,     0,   107,   196,   197,     0,
      63,   133,     0,     0,    63,     0,    63,    63,     0,     0,
       0,   254,   116,   116,   196,     0,     0,     0,   233,     0,
       0,     0,     0,   240,     0,    57,    57,   243,    93,   244,
     245,     0,     0,     0,   106,     0,   114,     0,    63,    63,
       0,     0,    57,    57,    57,   275,   275,   278,   269,   269,
      13,   146,     0,     0,   251,    63,    63,    63,     0,     0,
       0,   262,   263,     0,     0,     0,     0,     0,     0,     0,
     257,     0,    61,     0,   260,     0,    61,   261,    61,    61,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,     0,
      54,    54,    54,     0,     0,     0,   135,   135,   135,    33,
      34,    35,    36,    37,    38,    39,    40,    93,   151,   154,
      61,    61,     0,     0,    44,     0,     0,     0,   -24,     0,
       0,     0,     0,   162,     0,     0,     0,    61,    61,    61,
     106,     0,     0,     0,     0,     0,     0,     0,   106,   106,
       0,   -24,    81,    15,     0,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   186,     0,
     139,     0,     0,     0,   -24,    82,    27,    28,    29,    30,
      31,     0,    83,    84,    85,    86,    87,    88,     0,     0,
       0,     0,   211,   212,    89,   162,    90,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
      42,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     0,     0,     6,     7,     8,     9,    10,     0,
       0,   236,   151,    11,   154,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,    20,    21,     0,     0,    22,
      23,     0,    24,     0,   106,     0,     0,    25,    26,     0,
       0,    27,    28,    29,    30,    31,    82,    27,    28,    29,
      30,    31,     0,    83,    84,    85,    86,    87,    88,     0,
       0,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,    42,     0,    43,     0,     0,
      44,     1,     2,     3,     4,     5,     0,     0,     6,     7,
       8,     9,    10,     0,     0,     0,     0,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,    20,
      21,     0,     0,    22,    23,     0,    24,     0,     0,     0,
       0,    25,    26,     0,     0,    27,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     0,    42,
       0,   115,     0,     0,    44,     1,     2,     3,     4,     5,
       0,     0,     6,     7,     8,     9,    10,     0,     0,     0,
       0,    11,     0,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,    20,    21,     0,     0,    22,    23,     0,
      24,     0,     0,     0,     0,    25,    26,     0,     0,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,     0,    42,     0,   274,     0,     0,    44,     1,
       2,     3,     4,     5,     0,     0,     6,     7,     8,     9,
      10,     0,     0,     0,     0,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,    20,    21,     0,
       0,    22,    23,     0,    24,     0,     0,     0,     0,    25,
      26,     0,     0,    27,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     0,    42,     0,     0,
       0,     0,    44,     1,     2,     3,     4,     5,     0,     0,
       6,     7,     8,     9,    10,     0,     0,     0,     0,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,    20,    21,     0,     0,    22,    23,     0,    24,     0,
       0,     0,     0,    25,    26,     0,     0,    27,    28,    29,
      30,    31,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       0,    42,     0,     0,     0,     0,    44,    82,    27,    28,
      29,    30,    31,     0,    83,    84,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,   113,   187,    90,     0,
      91,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    42,     7,     8,     9,     0,    44,     0,     0,
       0,     0,     0,     0,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,    27,
      28,    29,    30,    31,     0,    83,    84,    85,    86,    87,
      88,    27,    28,    29,    30,    31,     0,   113,     0,    90,
       0,    91,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,     0,    42,    81,    15,     0,     0,    44,     0,
       0,     0,     0,    41,   194,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,    27,    28,
      29,    30,    31,     0,    83,    84,    85,    86,    87,    88,
      81,    15,     0,     0,     0,     0,   105,     0,    90,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,    42,    82,    27,    28,    29,    30,    31,     0,
      83,    84,    85,    86,    87,    88,    81,    15,     0,     0,
       0,     0,   113,     0,    90,     0,    91,     0,    81,    15,
       0,     0,     0,     0,     0,     0,    41,     0,    42,    82,
      27,    28,    29,    30,    31,     0,    83,    84,    85,    86,
      87,    88,    27,    28,    29,    30,    31,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,    42
};

static const yytype_int16 yycheck[] =
{
       0,    89,    22,     0,    42,   105,    19,    39,    40,    33,
      23,    11,    12,     0,    64,     9,    16,   105,   158,    19,
     141,    59,    22,    23,    61,   113,    26,   141,    65,    60,
      65,   112,    19,    83,    83,    66,    23,   158,   178,   120,
     121,    65,   182,    65,   158,    65,    61,    84,     0,    49,
      65,    65,    49,    53,     0,    23,    24,   178,   198,    23,
      84,   182,    49,    65,   178,    65,    53,   167,   182,   157,
      84,     3,     4,     5,     6,    65,    61,   198,    84,    79,
      65,     0,    79,    87,   198,     0,     3,     4,     5,     6,
      60,   231,    79,    84,    23,    24,    48,    49,   265,   266,
      67,    53,   115,    49,    19,   105,    37,    53,    23,    64,
     231,    79,   112,    81,    65,   115,    29,   231,   131,    31,
     120,   121,    83,    68,    66,   125,   126,    79,   115,    63,
      68,   131,    64,    79,    49,   135,    23,    24,    53,    62,
     228,    62,   142,   143,   131,   226,    70,    64,   135,    59,
      79,    83,    81,    64,     8,   142,   143,   103,   104,   159,
      66,    66,    65,    65,    79,    66,   166,   167,    66,   115,
      66,    61,   159,   193,    66,    83,    62,    66,    30,    63,
      67,    66,    69,   135,    66,    61,    66,    66,    34,   135,
      83,    66,    79,   193,    81,    63,    63,    41,    41,   174,
     115,   131,    66,   273,   217,   204,    89,   166,   221,   166,
     223,   224,   259,   206,   267,    -1,   131,   217,    -1,    -1,
     135,   221,    -1,   223,   224,    -1,   226,   142,   143,    -1,
     217,   183,    -1,    -1,   221,    -1,   223,   224,    -1,    -1,
      -1,   241,   255,   256,   159,    -1,    -1,    -1,   194,    -1,
      -1,    -1,    -1,   217,    -1,   255,   256,   221,    10,   223,
     224,    -1,    -1,    -1,    16,    -1,    18,    -1,   255,   256,
      -1,    -1,   272,   273,   274,   272,   273,   274,   265,   266,
      22,    23,    -1,    -1,   230,   272,   273,   274,    -1,    -1,
      -1,   255,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,   217,    -1,   250,    -1,   221,   253,   223,   224,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
     272,   273,   274,    -1,    -1,    -1,   272,   273,   274,    71,
      72,    73,    74,    75,    76,    77,    78,    89,    90,    91,
     255,   256,    -1,    -1,    86,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,   272,   273,   274,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   121,
      -1,    64,    23,    24,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      83,    -1,    -1,    -1,    87,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,   164,   165,    65,   167,    67,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    -1,
      -1,   203,   204,    19,   206,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    38,    -1,   226,    -1,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    50,    51,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    55,    56,    57,    58,    -1,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    -1,    -1,
      86,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    -1,    -1,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    -1,    -1,    86,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    -1,    -1,    35,    36,    -1,
      38,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    -1,    -1,    86,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    -1,
      -1,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    32,    -1,    -1,    35,    36,    -1,    38,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    11,    12,    13,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    47,    48,    49,    50,    51,    -1,    65,    -1,    67,
      -1,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    23,    24,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      23,    24,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    23,    24,    -1,    -1,
      -1,    -1,    65,    -1,    67,    -1,    69,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    47,    48,    49,    50,    51,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    11,    12,    13,
      14,    19,    21,    22,    23,    24,    25,    26,    27,    28,
      31,    32,    35,    36,    38,    43,    44,    47,    48,    49,
      50,    51,    67,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    81,    83,    86,    90,    91,    92,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   111,   114,   117,   118,   119,   120,   121,   122,
     124,   125,   126,   127,   128,   129,   134,   135,   148,   149,
       9,    23,    46,    53,    54,    55,    56,    57,    58,    65,
      67,    69,    93,    94,   104,   108,   112,   113,   114,   115,
     116,   142,   145,   104,   104,    65,    94,   104,   138,   139,
     140,   141,    65,    65,    94,    83,    95,   100,   101,   123,
      65,    65,    92,   104,   123,    65,    84,   104,    83,     0,
      87,    64,    83,   101,    99,   100,    64,    83,    99,    83,
      61,    65,    84,    84,    92,   104,    23,   117,    99,    93,
     112,    94,   143,   144,    94,   146,   147,    60,    65,    84,
     100,   100,    94,   140,    42,    59,    33,    37,   141,    93,
      95,   100,    64,    29,   131,   132,   141,   141,    65,    31,
     104,   104,    65,    95,    98,    83,    94,    66,    89,    94,
     106,   109,   110,   118,    80,   104,   108,   108,    65,    68,
     150,    66,    66,    63,    62,    68,    62,    70,    93,   109,
      66,    94,    94,   104,   142,   145,   140,    66,    64,    65,
     132,     8,   130,    66,    66,   109,    65,    66,    61,   109,
      66,    62,   104,   100,   109,    83,    94,   144,   147,    66,
     123,    30,   133,   123,   123,   123,    66,   141,    63,    93,
      66,   100,   109,    66,   104,    66,    34,   100,    66,    83,
     100,   100,   123,   123,   149,    39,    40,   136,   113,   114,
     113,   150,    63,    63,    83,    99,   137,   137,    99,    41,
      41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    93,    93,    93,
      93,    93,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    96,    96,    96,    96,    96,    97,    97,    97,
      97,    98,    98,    98,    98,    99,    99,    99,    99,   100,
     101,   101,   101,   101,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   108,   109,   109,   109,   110,   110,   111,   111,
     112,   113,   113,   113,   114,   114,   114,   114,   114,   115,
     116,   116,   116,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   119,
     119,   119,   120,   121,   122,   123,   123,   123,   123,   123,
     123,   124,   125,   126,   126,   126,   126,   126,   127,   127,
     128,   129,   129,   129,   130,   131,   132,   132,   133,   133,
     134,   135,   136,   136,   137,   137,   137,   137,   138,   139,
     139,   139,   140,   140,   141,   141,   141,   141,   141,   142,
     143,   144,   144,   145,   146,   147,   147,   148,   149,   149,
     150,   150
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     1,     2,     1,     1,     1,     1,
       2,     3,     1,     2,     2,     2,     2,     1,     1,     3,
       1,     1,     1,     1,     2,     3,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     6,     6,     6,     5,     4,
       3,     3,     3,     1,     3,     1,     1,     1,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     5,     2,     1,     1,     2,     2,
       3,     6,     4,     1,     1,     1,     1,     1,     5,     7,
       2,     2,     3,     4,     2,     5,     1,     2,     1,     2,
       5,     9,     4,     4,     1,     2,     2,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     1,     3,     2,     1,     2,
       1,     2
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
        yyerror (YY_("syntax error: cannot back up")); \
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
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
  case 3: /* program: content end  */
#line 81 "just.y"
                     {printf("\nvalid program\n\n"); return 0;}
#line 1838 "y.tab.c"
    break;


#line 1842 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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
                      yytoken, &yylval);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 217 "just.y"
 

void yyerror(const char*s)
{ 
printf("\ninvalid\n"); 
fprintf(stderr, "%s at line %d\n", s, line_number+1);
exit(0); 
} 

//driver code 
main() 
{ 
printf("enter the program\n"); 
yyparse(); 

} 

