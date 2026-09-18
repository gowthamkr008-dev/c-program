#include<stdio.h>
#include<string.h>
#include<ctype.h>


void isfind(char *token);


static const char* keywords[] = {
    "int", "float", "return", "if", "else", "while", "for", "do", "break", "continue",
    "char", "double", "void", "switch", "case", "default", "const", "static", "sizeof", "struct"
};

static const char* operators[] ={ "+","-","*","/","%","=","!","<",">","|","&","++","--"};
static const char* specialCharacters[] = {",",";","{","}","(",")","[","]"};
int main(){
  FILE *fp;
  fp = fopen("/home/gowtham/cprogram/projects/print.c","r");
  if(fp == NULL){
    perror("Error:");
    return -1;
  }

  char ch = 'a';
  char token[50];
  int i=0;
  while(fscanf(fp,"%s",token) == 1){
  // printf("%s\n",token);
   isfind(token);
  }


 // }
  
return 0;
}

void isfind(char *token){
 int i=0;
 int size = sizeof(keywords)/sizeof(keywords[0]);
 while(i<size){
    if(strcmp(token,keywords[i]) == 0){
      printf("%s -> is keyword\n",token);
      break;
    }else if(strcmp(token, operators[i]) ==0){
      printf("%s ->is operator\n",token);
      break;
    }

    i++;
 } 
}