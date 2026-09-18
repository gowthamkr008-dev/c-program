#include "lexer.h"

int sc_count ,error =0,valid ;

int main() {
    FILE *fp;
    fp = fopen("mail.txt","r");
    if(fp == NULL){
        perror("ERROR ");
        return -1;
    }
    char token[150];

    printf("\n");
    for(int i = 0; i < 25; i++)
        printf("=");
    printf("Lexical Analyzer");
     for(int i = 0;i < 25; i++)
        printf("=");

        printf("\n\n");
    while(fscanf(fp," %149[^\n]",token) == 1){
        is_allseprate(token);
        fseek(fp,1,SEEK_CUR);

    }
    if( error  != 0){
        printf("\ninvalid on integer constant \n");
    }
    if(sc_count != 0){
        printf("\nerror: expected declaration or statement at end of input\n\n");
    }

    return 0;
}


//EOF = -1
// NULL = ((void * )0)
