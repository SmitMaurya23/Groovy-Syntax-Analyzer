%{ 
/* Definition section */
#include<stdio.h> 
#include<stdlib.h> 
extern int line_number;
extern int yylex();
extern int yyparse();
extern int yylval;
extern void yyerror(const char*);

int x = 0; // Initialize x
%} 

%token Single_Line_Comment Multiple_Line_Comment Groovy_Doc_Comment Groovy_Doc_Runtime_Comment 
%token annotations Finally
%token Groovy_JAVA_Package Import
%token abstract_Method
%token protected_Method
%token private_Method
%token printing_to_the_console_Method
%token File_Not_Found_Exception
%token Conditional_Statement
%token Loop_Statement
%token Object_Derived_Data_Type
%token class_Derived_Data_Type
%token record_Derived_Data_Type
%token interface_Derived_Data_Type
%token List_Data_type Array_Data_type
%token Keyword_as_an_Identifier
%token Assert
%token For Return Try Catch Exception
%token While
%token If In 
%token Else
%token Def
%token Do
%token AndOr
%token Switch Case Default Break InstanceOf This Void
%token Keyword
%token Boolean_literal_Boolean_Data_Type
%token Double_Quoted_String_Literal
%token Single_Quoted_String_Literal
%token Triple_Quoted_String_Literal
%token Slashy_string_Literal
%token Dollar_slashy_string_Literal
%token Binary_Literal_Primitive_Data_Types
%token Hexadecimal_Literal_Primitive_Data_Types
%token Octal_Literal_Primitive_Data_Types
%token Negative_Integer_Literal_Primitive_Data_Types
%token Float_Literal_Primitive_Data_Types
%token Integer_Literal_Primitive_Data_Types
%token Long_Integer_Literal_Primitive_Data_Types
%token comparisionOperater
%token operator
%token Assignement_Operator
%token comma colon semi_colon
%token left_round right_round left_curly right_curly left_square right_square
%token Boolean_Data_Type
%token Integer_Data_Type
%token Character_Data_Type String_Data_Type
%token Short_Data_Type
%token Long_Data_Type
%token Float_Data_Type 
%token Double_Data_Type
%token Identifier Each
%token Keyword_as_an_Identifier_using_dot
%token SPECIAL_CHARACTERS
%token NL dot List New
%token end
%start program


/* Rule Section */
%% 

empty_rule: ;


//general formats

program: content end {printf("\nvalid program\n\n"); return 0;} ;

content: LineS | Block ;

assignement: variable Assignement_Operator any;

term: term operator term | left_round term right_round  | variable | literal | usingFunction;

any: term | map | list ;

//Instructions

Instruction: definingVariable | definingDataVariables | printfunction | assignement | assertStatement | return | classDeclaration | loop_statement | conditionalStatement | comment | definingFunction | usingFunction | import | this | annotations| eachStatement;

Line:Instruction NL| InstructionS NL | InstructionS semi_colon NL | comment | comment NL | NL ;

EndLine: Line | Instruction | InstructionS | InstructionS semi_colon ;

InstructionS: Instruction semi_colon InstructionS | Instruction | Instruction semi_colon | Instruction comment;

LineS: Line LineS | Block LineS | Block | EndLine;

Block: LeftClose LineS RightClose ;

comment: Single_Line_Comment | Multiple_Line_Comment | Groovy_Doc_Comment | Groovy_Doc_Runtime_Comment ;

return: Return any;

//CLASSES

classDeclaration: class_Derived_Data_Type variable Block | interface_Derived_Data_Type variable Block;

// declaring variables

variable: Keyword_as_an_Identifier | Identifier | Keyword_as_an_Identifier_using_dot | Array_Data_type;

definingVariable: Def variable | Def assignement ;

definingDataVariables: dataType variable | dataType assignement ;

//Functions

definingFunction: Def variable left_round parameters right_round Block | dataType variable left_round parameters right_round Block | Void variable left_round parameters right_round Block | variable left_round parameters right_round Block;

usingFunction: variable left_round parameters right_round | variable dot usingFunction | string_literal dot usingFunction | variable left_round right_round;

parameters: Function_any | Function_any comma parameters | empty_rule ;

Function_any: any | definingDataVariables;

//printfunction

printfunction: printing_to_the_console_Method printable | printing_to_the_console_Method left_round printable right_round ;

printable: any ;

//literals
literal: string_literal | numeric_literal | boolean_literal ;

string_literal: Double_Quoted_String_Literal | Single_Quoted_String_Literal | Triple_Quoted_String_Literal | Slashy_string_Literal | Dollar_slashy_string_Literal ;

boolean_literal: Boolean_literal_Boolean_Data_Type ;

numeric_literal: Hexadecimal_Literal_Primitive_Data_Types | Octal_Literal_Primitive_Data_Types | Negative_Integer_Literal_Primitive_Data_Types | Float_Literal_Primitive_Data_Types | Integer_Literal_Primitive_Data_Types | Long_Integer_Literal_Primitive_Data_Types ;

//data types

TypeData: Boolean_Data_Type | Integer_Data_Type | Character_Data_Type | Short_Data_Type | Long_Data_Type | Float_Data_Type | Double_Data_Type | List_Data_type | Array_Data_type | String_Data_Type | New;

dataType: usingMethods | TypeData ;
//methods

methods: abstract_Method | protected_Method | private_Method;

usingMethods: methods TypeData ;


//loops

For_statement: For left_round true_false right_round loop_content;
While_statement: While left_round true_false right_round loop_content;
loop_content: NL Block | Block | Instruction | NL Instruction | Instruction semi_colon | NL Instruction semi_colon ;
Do_while_statement: Do loop_content While left_round true_false right_round ;
eachStatement: variable dot Each Block;

loop_statement: For_statement | While_statement | Do_while_statement | switch_case | TryStatement;

//if-else statements

conditionalStatement: If left_round true_false right_round loop_content |  If left_round true_false right_round loop_content Else loop_content ;

assertStatement: Assert true_false ;

//Try-catch
TryStatement: Try loop_content |  Try loop_content Catches | Try loop_content Catches finally;
finally: Finally loop_content;
Catch_statement: Catch left_round  Catch_content right_round loop_content ;
Catches: Catch_statement | Catch_statement Catches;
Catch_content: Exception | Exception variable ;

//this statement
this: This dot variable Assignement_Operator term;


//Switch Cases
switch_case: Switch left_round variable right_round colon NL LeftClose Cases RightClose;
Cases: Case literal colon case_content | Default literal colon case_content;
case_content: LineS | LineS Break | NL LineS | NL LineS Break;

//statements that return true or false
comparision: any comparisionOperater any;
in_statement: variable In variable | variable In list | variable In map;
comp_in:comparision | in_statement ;
true_false: comp_in | comp_in AndOr comp_in | left_round comp_in right_round | any | any InstanceOf any;

//maps and lists
map: left_curly map_content right_curly ;
map_unit: any colon any ;
map_content: map_unit | map_unit comma map_content ;

list: left_square list_content right_square;
list_unit: any ;
list_content: list_unit | list_unit comma list_content ;



//new statements


//Import
import: Import Groovy_JAVA_Package;
//Brackets
LeftClose: left_curly | left_curly NL;
RightClose: right_curly | right_curly NL;


%% 

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

