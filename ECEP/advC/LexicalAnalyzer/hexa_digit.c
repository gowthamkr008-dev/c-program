#include"lexer.h"


extern int sc_count;
extern int error;
extern int valid;


//hexa digit
int is_xdigit(char *token){
     int j = 0,valid =0;
     if( (strncmp(token,"0x",2) == 0) ||  (strncmp(token,"0X",2) == 0) ){
        j += 2;
    while(token[j] !='\0'){
        if(isxdigit(token[j])){
            valid = 1;
        }else{
            error++;
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
