#include "header.h"

int main(int arg,char *argv[]){

  if(arg > 1){
    if(strcmp(argv[1],"-e") ==0){
      printf("Encoding\n");
    }else if(strcmp(argv[1],"-d")==0){
      printf("Decoding\n");
    }else{
      printf("-e  =>  For encoding\n-d  =>  For decoding\n");
    }


if(arg >2){
    if(strstr(argv[2],".bmp")){
      printf("%s\n",argv[2]);
    }
  }
  }else{
     printf("-e  =>  For encoding\n-d  =>  For decoding\n");
  }


}