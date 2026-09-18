#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  char name[50];
  scanf("%[^\n]",name);
  int i=0;
  while(name[i] != '\0'){
    if(isdigit(name[i])){
      printf("isdigit =  %c",name[i]);
    }else if(isalpha(name[i])){
      printf("isalpha = %c",name[i]);
    }else{
      printf("is special characters %c",name[i]);
    }
printf("\n");
    i++;
  }



}