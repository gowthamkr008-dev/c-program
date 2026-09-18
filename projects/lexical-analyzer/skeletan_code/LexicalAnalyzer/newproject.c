#include<stdio.h>
#include<string.h>
#include<ctype.h>


static const char* keywords[] = {
    "int", "float", "return", "if", "else", "while", "for", "do", "break", "continue",
    "char", "double", "void", "switch","extern", "case", "default", "const", "static", "sizeof", "struct"
};

static const char* operators[] ={ "+","-","","/","%","=","==","!=","<",">","<=",">=","&&","||","!","&","|","^","~","<<",">>","+=","-=","=","/=","%=","&=","|=","^=","<<=",">>=","++","--","?",":",",",".","->"};
static const char* specialCharacters[] = {",",";","{","}","(",")","[","]"};

void  seprate(char *);
void is_find(char * token);
int iskeyword(char *token);
int isoperator(char *token);


int main(){
    FILE *fp;
    fp =fopen("mail.c","r");
    if(fp == NULL){
        perror("Error: ");
        return -1;
    }


    char str[150];
    while(fscanf(fp," %149[^\n]",str) == 1){
      if(str[0] == '#'){
        printf("%-30sPREPROCESS DERIVATIVIES\n\n",str);
        continue;
      }
      seprate(str);
      fseek(fp,1,SEEK_CUR);
      printf("\n");      
    }
    return 0;
}


void  seprate(char *token){
  int i=0;
  while(token[i] != '\0'){
    if(isalpha(token[i]) || token[i] == '_'){
      char subtoken[strlen(token)];
      int j=0;
      while(isalpha(token[i]) || token[i] == '_'){
        subtoken[j++] = token[i++];
      }
      subtoken[j]='\0';
      i--;
      is_find(subtoken);
    }else if(token[i] == '+' || token[i] == '-' || token[i] == '*'  || token[i] == '/'  || token[i] == '='  || token[i] == '!'  || token[i] == '<'  || token[i] == '>' || token[i] =='|' ||token[i] == '&' || token[i] == '^'|| token[i] == '~' || token[i] == '?' || token[i] == '%'){
      char subtoken[strlen(token)];
      int j=0;
      while(token[i] != '\0'){
        if(token[i] == '+' || token[i] == '-' || token[i] == '*'  || token[i] == '/'  || token[i] == '='  || token[i] == '!'  || token[i] == '<'  || token[i] == '>' || token[i] =='|' ||token[i] == '&' || token[i] == '^'|| token[i] == '~' || token[i] == '?' || token[i] == '%'){
         if((token[i] == '/' && token[i+1] == '/') ||(token[i] == '/' && token [i+1] == '*')){
         // printf("Comment found\n");
          return;
         }
          subtoken[j++] = token[i++];
        }else{
          break;
        }
        i++;
      }

      subtoken[j] = '\0';
      i--;
      is_find(subtoken);

    }else{
      printf("%-30snothing found\n",token);
    }

    i++;
  }


}

void is_find(char * token){
  if(iskeyword(token)){
    printf("%-30sRESERVED KEYWORD\n",token);
  }else if(isoperator(token)) {
    printf("%-30sOPERATOR\n",token);
  }else{
    printf("%-30sIDENTIFIER\n",token);
  }
}











int isoperator(char *token){
  int i = 0,size = sizeof(operators)/sizeof(operators[0]);
  while(i < size){
  if(strcmp(operators[i],token)==0){
    return 1;
  }
  i++;
  }
  return 0;
}

int iskeyword(char *token){
 int i = 0,size = sizeof(keywords)/sizeof(keywords[0]);
  while(i<size){
  if(strcmp(keywords[i],token)==0){
    return 1;
  }
  i++;
  }
  return 0;
}