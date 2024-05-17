#!/bin/bash
lex just.l
yacc -d just.y
gcc lex.yy.c y.tab.c -o parser
./parser <just.txt

