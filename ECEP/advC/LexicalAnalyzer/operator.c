#include"lexer.h"


extern int sc_count;
extern int error;
extern int valid;


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