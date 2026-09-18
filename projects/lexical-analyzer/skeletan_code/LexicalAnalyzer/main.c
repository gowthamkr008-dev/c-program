#include <stdio.h>
#include<string.h>
#include <ctype.h>

void isfind(char *token);
int isKeyword(const char* str);//
int isOperator(const char* str);//
int isSpecialCharacter(char *ch);//
int is_num(const char *token);
void is_allseprate(char *token);
int is_xdigit(char *token);
int is_identifier(char *token);
int is_constant(char *token);


static const char* keywords[] = {
   "auto", "break", "case", "char", "const", "continue", "default", "do",
"double", "else", "enum", "extern", "float", "for", "goto", "if",
"int", "long", "register", "return", "short", "signed", "sizeof", "static",
"struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"

};

static const char* operators[] ={"+","&","-","*","/","%","=","+=","-=","*=","/=","%=","&=","|=","^=","<<=",">>=","++","--","==","!=","<",">","<=",">=","&&","||","!","&","|","^","~","<<",">>",".","->",",","?","*",":"};
static const char* specialCharacters[] = { ".",",",";","{","}","(",")","[","]"};
static int sc_count ,error ,valid ;
//main function
int main() {
    FILE *fp;
    fp = fopen("mail.c","r");
    if(fp == NULL){
        perror("ERROR:");
        return -1;
    }
    char token[150];
    while(fscanf(fp," %149[^\n]",token) == 1){
        is_allseprate(token);
        fseek(fp,1,SEEK_CUR);

    }
    if( error != 0){
        printf("\ninvalid on integer constant \n");
    }
    if(sc_count != 0){
        printf("\nerror: expected declaration or statement at end of input\n\n");
    }

    return 0;
}

//find what 
void isfind(char * token){ 
    if(token[0] == '#'){
        printf("%-40sPREPROCESS DERIVATIVIES\n",token);
    }else if (isKeyword(token)){
        printf("%-40sRESERVED KEYWORD\n",token);
    }else if( isOperator(token)){
        printf("%-40sOPERATOR\n",token);
    }else if(isSpecialCharacter(token)){
        printf("%-40sSPECIAL SYMBOL\n",token);
    }else if(is_identifier(token)){
         printf("%-40sIDENTIFIER\n",token);
    }else if(is_constant(token)){
         printf("%-40sSYMBOLIC CONSTANT\n",token);
    }else if(is_num(token)){
        printf("%-40sCONSTANT\n",token);
    }else if (is_xdigit(token)){
        printf("%-40sCONSTANT\n",token);
    }else if (token[0] == '"' || token[0] =='\''){
        printf("%-40sLITERAL\n",token);
    }else{
        printf("%10sError founded %s\n","",token);
       // error++;
    }
}

void  is_allseprate(char * token){
    int i = 0;
    
    while( token[i] != '\0'){
        if(valid ==1){
            if(strstr(token, "*/")){
                valid = 0;
                while(token[i] != '\0'){
                    if(token[i] == '*'&& token[i+1] == '/'){
                        i+=2;
                    if(token[i] == '\n' || token[i] == '\0'){
                        return;
                    }
                        break;
                    }
                    i++;
                }
            }else{
                return;
            }
        }//find multiline comment
      if(token[i] == '#'){
            char subtoken[strlen(token)];
            int j = 0;
            while(token[i] != '>' || token[i] == '\n'){
                subtoken[j++] = token[i++];
            }
            subtoken[j++] = token[i--];
            i++;
            subtoken[j] = '\0';
            isfind(subtoken);
        }//find preprocessor derivatives
        else if( ((token[i] == '0') && (token[i+1] == 'x' || token[i+1] == 'X') && isxdigit((unsigned char)token[i+2])) ) {
            
            int j = 0;
            char subtoken[strlen(token)+1];
            subtoken[j++] = token[i++];
            subtoken[j++] = token[i++];
            while(token[i] != '\0'){
                if(isxdigit(token[i])){
                subtoken[j++] = token[i++];
                }else{
                    break;
                }
            }
            i--;
            subtoken[j] = '\0';
          //  printf("%15s hexa\n",token);
            isfind(subtoken);
             }//find hexa number
      else if(  isdigit(token[i]) ||  ((token[i] == '+' || token[i] == '-') && (isdigit(token[i+1])) ) ) {
        int j=0,dot =0;
        char subtoken[strlen(token)+1];
        while(isdigit(token[i]) ||  ((token[i] == '+' || token[i] == '-') && (isdigit(token[i+1]))) || token[i] == '.' ){
            if(token[i] == '.'){
                dot++;
            }
            if(dot <= 1){
            subtoken[j++] = token[i++];
            }else{
                subtoken[j] ='\0';
                printf("\n%6s%s Too many decimal points in number\n\n","",token);
                error++;
                return;
            }
        }//find number
        i--;
        subtoken[j] ='\0';
       // printf("%15s\n",subtoken);
        if((isalpha(token[i+1]) && isdigit(token[i+2])) ){
            printf("\n%5sError invalid suffixon'%s'integer constant\n\n"," ",token);
            error++;
            return;
        }
          subtoken[j] ='\0';
          isfind(subtoken);
         
 /* digit */
 }else if(token[i] == '"'  || token[i] == '\''){
    int j=0;
    char subtoken[strlen(token)];
    if(token[i] == '"'){
    subtoken[j++] = token[i++];
    while(token[i] != '"'){
        subtoken[j++] = token[i++];
    }
    subtoken[j++] =token[i];
    subtoken[j] = '\0';
    isfind(subtoken);
}else if(token[i] == '\''){
    subtoken[j++] = token[i++];
    while(token[i] != '\''){
        subtoken[j++] = token[i++];
    }
    subtoken[j++] =token[i];
    subtoken[j] = '\0';
    isfind(subtoken);
}

 }
 else if(isalpha(token[i])  || token[i] == '_'){
        int j=0;
        char subtoken[strlen(token)+1];
        while( ( isalpha(token[i]) )|| (token[i] == '_') ){
            subtoken[j++]=token[i++];
        }
        subtoken[j] = '\0';
        i--;
        isfind(subtoken);
    }//is identifier
    else if(token[i] == '+' || token[i] == '-' || token[i] == '*'  || token[i] == '/'  || token[i] == '='  || token[i] == '!'  || token[i] == '<'  || token[i] == '>' || token[i] =='|' ||token[i] == '&' || token[i] == '^'|| token[i] == '~' || token[i] == '?' || token[i] == '%')
    {
        int j=0;
        char subtoken[strlen(token)];
        while(token[i] != '\0'){
        if(token[i] == '+' || token[i] == '-' || token[i] == '*'  || token[i] == '/'  || token[i] == '='  || token[i] == '!'  || token[i] == '<'  || token[i] == '>' || token[i] =='|' ||token[i] == '&' || token[i] == '^'|| token[i] == '~' || token[i] == '?' || token[i] == '%')
        {
             if(token[i] == '/' && token[i+1] == '/'){
                return;
                }else if(token[i] == '/' && token[i+1] == '*'){
                // printf("%15sMultiline comment found\n","");
            valid = 1;
            return;
            }     
            subtoken[j++] = token[i++];   
        }else{
            break;
        }
    }
    subtoken[j] = '\0';
    i--;
    isfind(subtoken);
    }//end of operator
    else if((token[i]== '(' || token[i] == '['|| token[i] == '{'||token[i]== ')' || token[i] == '}'|| token[i] == ']'||token[i] == ','||token[i] == ';'||token[i] == ':' ))
    {
         char subtoken[5];
           int j=0;
        if(token[i]== '(' || token[i] == '['|| token[i] == '{'){
           sc_count++;
           subtoken[j++]= token[i];
           subtoken[j] = '\0';
           isfind(subtoken);
        }else if(token[i]== ')' || token[i] == '}'|| token[i] == ']'){
           sc_count--;
           subtoken[j++]= token[i];
           subtoken[j] = '\0';
           isfind(subtoken);
        }else{
           subtoken[j++] = token[i];
           subtoken[j] = '\0';
            isfind(subtoken);
            }

        }
     i++; 
}

}

//is keywords
int isKeyword(const char* token){
    int i=0,size = sizeof(keywords)/sizeof(keywords[0]);
    while(i < size){
        if(strcmp(keywords[i],token) ==0){
            return 1;
        }
        i++;
    }
    return 0;
}

//is operators
int isOperator(const char* str){
    int i=0,size = sizeof(operators)/sizeof(operators[0]);
    while(i<size){
        if(strcmp(operators[i],str) ==0){
            return 1;
        }
        i++;
    }
    return 0; 

}

//find speial characters
int isSpecialCharacter(char *ch){
    int i=0,size = sizeof(specialCharacters)/sizeof(specialCharacters[0]);
    while(i<size){
        if(strcmp(specialCharacters[i],ch) ==0){
            return 1;
        }
        i++;
    }
    return 0;
}

//num
int is_num(const char *token){
    int i=0,valid =0;
    while(token[i] != '\0'){
        if ( (((token[i] == '+' || token[i] == '-' )  && isdigit(token[i+1]))  || isdigit(token[i]) || token[i] == '.') && (isalpha(token[i]) == 0)){

            valid =1;
        }else{
            valid =0;
            break;
        }
        i++;
    }
    if(valid){
        return 1;
    }else{
        return 0;
    }
}

//hexa digit
int is_xdigit(char *token){
     int j = 0,valid =0;
     if( (strncmp(token,"0x",2) == 0) ||  (strncmp(token,"0X",2) == 0) ){
        j += 2;
    while(token[j] !='\0'){
        if(isxdigit(token[j])){
            valid = 1;
        }else{
            valid =0;
            break;
        }
        j++;
    }
   }else{
    valid =0;
   }
    if(valid){
        return 1;
    }else{
        return 0;
    }
}

//variable
int is_identifier(char *token){
    int j = 0, valid = 0;
    if(isalpha(token[j]) || token[j] == '_'){
        while(token[j] != '\0'){
            if(isalpha(token[j]) || token[j] == '_'){
                valid =1;
            }else{
                valid =0;
                break;
            }
            j++;
        }
    }
    if(valid){
        return 1;
    }else{
        return 0;
    }


}

//macro
int is_constant(char *token){
    if(strcmp(token,"NULL") == 0 || strcmp(token,"EOF") == 0){
        return 1;
    }
return 0;
}
//EOF = -1
// NULL = ((void * )0)
