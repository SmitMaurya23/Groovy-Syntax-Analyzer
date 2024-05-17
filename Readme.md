# Groovy Compiler with Lex

This is a simple Lex code for compiling Groovy code. The provided Lex file (`just.l`) is designed to generate a lexical analysis.

### Prerequisites

- Make sure you have Lex installed on your system.

### Compilation
Write following 3 commands in LINUX terminal to compile lex file:
1. lex just.l
2. gcc lex.yy.c
3. ./a.out

OR

we have also prepared a shell script lex.sh, if first deletes lex.yy.c and ./a.out if present and then do above three commands,
so we can compile our code by following command:
1. ./lex.sh just.l

### Running the Compiler
Now we are in our compiler, and follow given steps to get tokens:

1. Prepare a Groovy code file (e.g., `example.groovy`).

2. Run in the compiler

   This will process the Groovy code and produce the tokens.

## Example

- We have give sample codes for this,named sample.txt,
  we can directly read code from the sample.txt using the following commands:
  1. lex just.l
  2. gcc lex.yy.c -o lex
  3. ./lex<sample.txt
  
