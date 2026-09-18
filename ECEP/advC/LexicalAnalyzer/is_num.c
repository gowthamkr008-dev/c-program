
#include"lexer.h"
//num

extern int sc_count;
extern int error;
extern int valid;



int is_num(const char *token){
    int i=0,valid =0;
    while(token[i] != '\0'){
        if(((token[i] == '+' || token[i] == '-' )  && isdigit(token[i+1]))  || isdigit(token[i]) || token[i] == '.'){

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
