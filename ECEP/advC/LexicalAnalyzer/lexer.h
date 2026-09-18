#include <stdio.h>
#include <stdio.h>
#include<string.h>
#include <ctype.h>

void isfind(char *token);
int isKeyword(const char* str);
int isOperator(const char* str);
int isSpecialCharacter(char *ch);
int is_num(const char *token);
void is_allseprate(char *token);
int is_xdigit(char *token);
int is_identifier(char *token);
int is_constant(char *token);
int is_binarydigit(char *token);
int is_octal(char *token);




static const char* keywords[] = {
   "auto", "break", "case", "char", "const", "continue", "default", "do",
"double", "else", "enum", "extern", "float", "for", "goto", "if",
"int", "long", "register", "return", "short", "signed", "sizeof", "static",
"struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"

};

static const char* operators[] ={"+","&","-","*","/","%","=","+=","-=","*=","/=","%=","&=","|=","^=","<<=",">>=","++","--","==","!=","<",">","<=",">=","&&","||","!","&","|","^","~","<<",">>",".","->",",","?","*",":"};
static const char* specialCharacters[] = { ".",",",";","{","}","(",")","[","]"};
