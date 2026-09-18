#include"lexer.h"

extern int sc_count;
extern int error;
extern int valid;



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
