 #define _GNU_SOURCE 
#include<stdio.h>
 

  int main(){
    FILE *fp ,*cp;
    fp = fopen("copy.txt","r");

    if(fp == NULL){
        perror("ERROR:");
        return -1;
    }
  cp = fopen("coptfromother.txt","w");
  if(cp == NULL){
    perror("ERROR:");
    return -1;
  }

  char ch;
  while(fread(&ch,sizeof(char),1,fp)){
    fwrite(&ch,sizeof(char),1,cp);
  }
printf("Copied!\n");
  //fcloseall() ;
    fcloseall();

    return 0;
  }