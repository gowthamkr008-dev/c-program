#include"lexer.h"
//find what 

extern int sc_count;
extern int error;
extern int valid;


void isfind(char * token){ 
    if(token[0] == '#'){
        printf("%-40sPREPROCESS DERIVATIVIES\n",token);
    }else if (isKeyword(token)){
        printf("%-40sRESERVED KEYWORD\n",token);
    }else if( isOperator(token)){
        printf("%-40sOPERATOR\n",token);
    }else if(isSpecialCharacter(token)){
        printf("%-40sSPECIAL SYMBOL\n",token);
    }else if(is_constant(token)){
         printf("%-40sSYMBOLIC CONSTANT\n",token);
    }else if(is_identifier(token)){
         printf("%-40sIDENTIFIER\n",token);
  }else if (is_xdigit(token) || is_binarydigit(token)){
        printf("%-40sCONSTANT\n",token);
}else if (is_octal(token)){
        if(is_octal(token) == 2){
             printf("%5sError:  %s\n"," ",token);
        }else if (is_octal(token) == 1){
             printf("%-40sCONSTANT\n",token);
        }
    }else if(is_num(token)){
        printf("%-40sCONSTANT\n",token);
    }else if (token[0] == '"' || token[0] =='\''){
        printf("%-40sLITERAL\n",token);
    }else{
        printf("%5sError %s\n","",token);
       error++;
    }
}
