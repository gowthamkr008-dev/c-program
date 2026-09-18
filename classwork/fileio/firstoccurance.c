#include<stdio.h>
int main(){
    FILE *fp;
    fp =fopen("copy.txt","r");
    if(fp == NULL){
      perror("ERROR:");
      return -1;
    }

    char ch;
    while((ch =fgetc(fp)) !=EOF){
      if(ch == 'c'){
        printf("Find the occurance %ld\n",ftell(fp));
        break;
      }
    }



    return 0;
}