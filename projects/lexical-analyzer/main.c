#include<stdio.h>
#include<string.h>


int main(){
    static char * reserved_key_data[] = { "int","float","double","char","short","auto","register","singed","unsigned",
                                          "const","extern","typedef","union","volatile","enum","static","register",
                                          "struct","void"};

      char token[50];
      FILE *fp;
       fp = fopen("/home/gowtham/cprogram/projects/print.c","r");
       if(fp == NULL){
            perror("Error:");
             return -1;
        }
      char ch;
      int i =0;
  int size = sizeof(reserved_key_data)/sizeof(reserved_key_data[0]);
  
   //printf("%d",size);
   while( fscanf(fp,"%s",token) == 1){

   fseek(fp,1,SEEK_CUR);
   }
   printf("%s",token);

   fclose(fp);

  }