#include"lexer.h"


extern int sc_count;
extern int error;
extern int valid;


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
