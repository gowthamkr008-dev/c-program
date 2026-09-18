#include"lexer.h"
//variable


extern int sc_count;
extern int error;
extern int valid;


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