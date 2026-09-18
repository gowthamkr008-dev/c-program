#include"lexer.h"
//hexa digit


extern int sc_count;
extern int error;
extern int valid;


int is_binarydigit(char *token){
     int j = 0,valid =0;
     if( (strncmp(token,"0B",2) == 0) ||  (strncmp(token,"0b",2) == 0) ){
        j += 2;
    while(token[j] !='\0'){
        if(token[j]=='1' || token[j] == '0'){
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
