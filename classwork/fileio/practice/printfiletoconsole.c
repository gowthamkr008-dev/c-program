#include<stdio.h>
int main(){
        FILE *fp;
        fp = fopen("/home/gowtham/cprogram/classwork/fileio/copy.txt","r");
       // /home/gowtham/cprogram/classwork/fileio/copy1.txt
        if(fp == NULL){
                perror("Error");
                return -1;
        }
        char ch;

        while(ch = fgetc(fp)){
                if(feof(fp)){
                        break;
                }
                fputc(ch,stdout);
        }

        return 0;
}
//print what the inside the file to print in console until the end of file
