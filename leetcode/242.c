#include<stdio.h>
#include<string.h>
#include <stdio_ext.h>
#include <stdlib.h>

int isanagram(char *str1, char *str2){
  int i,j;
  if(strlen(str1) != strlen(str2)){
    return 0;
  }

  int *arr =(int *)calloc(strlen(str1),sizeof(int));
  int k=0;
  for(i = 0;i<strlen(str1);i++){
    for(j = 0;j<strlen(str2);j++){
      if(str1[i] == str2[j]){
          arr[k++]=1;
          break;
      }
    }
  }

  for(i =0;i<strlen(str1);i++){
    if(arr[i]!= 1){
      return 0;
    }
  }

  return 1;

  
}
int main(){
  char str1[30];
  char str2[30];
  scanf("%29s",str1);
   __fpurge(stdin);
  scanf("%29s",str2);


  int flag = isanagram(str1,str2);
if(flag== 1){
  printf("true");
}else{
  printf("False");
}


  return 0;
}