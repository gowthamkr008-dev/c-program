#include<stdio.h>
int main(){
    char ch;
    FILE *fp;
    fp =fopen("copy.txt","r");
    if(fp == NULL){
      perror("ERROR:");
      return -1;
    }
    while((ch = fgetc(fp)) !=EOF){
      fputc(ch,stdout);
    }

    fclose(fp);


    return 0;
}