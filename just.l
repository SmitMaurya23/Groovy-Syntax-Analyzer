%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int line_number = 0; // Corrected line_number initialization
%}

GSTRING \"([^\"\\]|\\.)*\"

KEYWORD "abstract"|"break"|"byte"|"catch"|"class"|"const"|"continue"|"def"|"default"|"extends"|"final"|"finally"|"implements"|"import"|"instanceof"|"interface"|"native"|"new"|"null"|"package"|"private"|"protected"|"public"|"println"|"return"|"static"|"strictfp"|"super"|"synchronized"|"this"|"throw"|"throws"|"transient"|"try"|"void"|"volatile"

ID ([a-zA-Z][a-zA-Z0-9]*)|(("_"|"$")[a-zA-Z0-9]+)

OPERATOR "+"|"-"|"*"|"/"|"%"|"**"|"++"|"--"|"!"|"=="|"!="|">"|"<"|">="|"<="|"&&"|"||"|"&"|"|"|"^"|"~"|"<<"|">>"|">>>"|"?"|":"|"?:"|"?:="|"?."|"."|".&"|".@"|"=~"|"==~"|"~="|"<<="|">>="|">>>="|"+="|"-="|"*="|"/="|"%="|"&="|"|="|"^="|"as"|"in"|"is"|"to"|"==="

BRACKETS  "["|"]"
DoubleQ \"[^\"\n]*\"
SingleQ '[^'\n]*'
NUMBER [0-9]+|([0-9]+\.[0-9]+)

List {DoubleQ}|{SingleQ}|{NUMBER}|{ID}

ListInsideList "["(({List})",")*({List})"]"



%%
"//"([^\n]*)                                    { /* Comments*/ return Single_Line_Comment;  }

\/\*[\s\S]*?\*\/                                 { /* Comments*/ return Multiple_Line_Comment;}

\/\*\*(?:\s*\*\s*.*\n*)*\s*\*\/                  { /* Comments*/ return Groovy_Doc_Comment;}

\/\*\*@[\s\S]*?\*\/                              { /* Comments*/ return Groovy_Doc_Runtime_Comment;}

@{ID}  {/*annotations*/ return annotations;}


("groovy."|"java."){ID}"."({ID}|"*")             {/*Packages*/return Groovy_JAVA_Package;}
"abstract"                                       {/* method*/ return abstract_Method;}
"protected"                                      {/* method*/ return protected_Method;}
"private"                                        {/* method*/ return private_Method;}

"println"|"print"                                {/*method*/return printing_to_the_console_Method;}

"IOException"|"NumberFormatException"|"NullPointerException"|"IndexOutOfBoundsException"|"IllegalArgumentException"|"Exception"|"FileNotFoundException|ArithmeticException"      {/*Exception*/ return Exception;}
	
"import" {return Import;}
"try"       {return Try;}
"catch"       {return Catch;}
"case"       {return Case;}
"switch"     {/* Conditional Statements*/return Switch;}

"default"       {return Default;}
"break"     {/* Conditional Statements*/return Break;}
"instanceof"                             {return InstanceOf;}
"do"                             {return Do;}
"in"                             {return In;}

"for"                            {return For;}
    
"while"                             {return While;}
"if"                             {return If;}
"else"                             {return Else;}

"Object"                           {/* Derived Data Types */ return Object_Derived_Data_Type;}

"class"                             {/* Derived Data Types */ return class_Derived_Data_Type;}
"record"                             {/* Derived Data Types */ return record_Derived_Data_Type;}

"interface"                           {/* Derived Data Types */ return interface_Derived_Data_Type;}



"List"                                  {/* Derived Data Types */ return List_Data_type;}


("Boolean"|"Integer"|"String"|"Character"|"Short"|"Long"|"Float"|"Double"|"boolean"|"int"|"char"|"short"|"long"|"float"|"double")("[]")+    {/* Derived Data Types */ return Array_Data_type;}
  
"def"                        {return Def;}
"return"                     {return Return;}
"assert"                     {return Assert;}
"endCode"		{return end;}
"each"          {return Each;}



"true"|"false"             {/* Literals */ return Boolean_literal_Boolean_Data_Type;}
    
    
\"[^\"\n]*\"                {/* Literals */ return Double_Quoted_String_Literal;}
'[^'\n]*'                   {/* Literals  */ return Single_Quoted_String_Literal;}
\'\'\'[^\'\\]*\'\'\'       {/* Literals  */ return Triple_Quoted_String_Literal;}
\/[^\/]*\/                 {/* Literals  */return Slashy_string_Literal;}
\$/([^$/]|\/[^$])*\/\$     {/* Literals  */return Dollar_slashy_string_Literal;}
0b[0|1]+(_[0|1]+)*       {/* Literals */ return Binary_Literal_Primitive_Data_Types;}
0x[0-9a-f]+(_[0-9a-f]+)*   {/* Literals */ return Hexadecimal_Literal_Primitive_Data_Types;}
0[0-7]+(_[0-7]+)*          {/* Literals  */ return Octal_Literal_Primitive_Data_Types;}
-[1-9][0-9]*            {/* Literals  */ return Negative_Integer_Literal_Primitive_Data_Types;}
[0-9](_[0-9]+)*\.[0-9]+       {/* Literals */ return Float_Literal_Primitive_Data_Types;}
0" "|[0-9]+(_[0-9]+)*                    {/* Literals  */ return Integer_Literal_Primitive_Data_Types;}
0" "|[1-9]+(_[0-9]+)*[Ll]             {/* Literals */ return Long_Integer_Literal_Primitive_Data_Types;}

"&&"|"||" {return AndOr;}

"=="|"<"|">"|">="|"<=" {return comparisionOperater;}


"="            {/*Operator*/return Assignement_Operator;} 
"["        {return left_square;}
"]"	   {return right_square;}
"("        {return left_round;}
")"        {return right_round;}
"{"        {return left_curly;}
"}"        {return right_curly;}
":"        {return colon;}
","        {return comma;} 
";"        {return semi_colon;}
"."        {return dot;}


"void" {/* Primitive Data Types */ return Void; } //

"String" {/* Primitive Data Types */ return String_Data_Type; } //
"finally" {return Finally; }
"this" {return This; }

"boolean"  {/* Primitive Data Types */ return Boolean_Data_Type;}
"int"      {/* Primitive Data Types */ return Integer_Data_Type;}
"char"     {/* Primitive Data Types */ return Character_Data_Type;}
"short"    {/* Primitive Data Types */ return Short_Data_Type;}
"long"     {/* Primitive Data Types */ return Long_Data_Type;}
"float"   {/* Primitive Data Types */ return Float_Data_Type;}
"double" {/* Primitive Data Types */ return Double_Data_Type;}
"Boolean" {/* Primitive Data Types */ return Boolean_Data_Type;}
"Integer" {/* Primitive Data Types */ return Integer_Data_Type;}
"Character" {/* Primitive Data Types */ return Character_Data_Type;}
"Short" {/* Primitive Data Types */ return Short_Data_Type;}
"Long" {/* Primitive Data Types */ return Long_Data_Type;}
"Float" {/* Primitive Data Types */ return Float_Data_Type;}
"Double" {/* Primitive Data Types */ return Double_Data_Type; }

{OPERATOR} {return operator;}
"@"|"$"|"~"|"`"       {return SPECIAL_CHARACTERS;}


'{KEYWORD}'                {/* Identifier*/ return Keyword_as_an_Identifier;} 
{KEYWORD}                   {return Keyword;}
{ID}"."{KEYWORD}       {return Keyword_as_an_Identifier_using_dot;}
{ID}                  {/*Identifier*/ return Identifier;}

" "|""  {;}

\n {line_number++; return NL;}
. {return yytext[0];}

%%

int yywrap() {
    return 1;
}

