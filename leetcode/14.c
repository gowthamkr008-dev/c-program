#include<stdio.h>
#include <stdlib.h>
#include <string.h>
char* longestCommonPrefix(char** str, int strssize) {
  // char *ptr;
  int j=0,l=0;
 static  char *string;
  for(int i=0;i<strssize-1;i++){
    if(str[i][l] == str[i+1][l]){
      int k=0;
      while(str[i][k]!= '\0' ||str[i+1][k] != '\0'){
        if(str[i][k] == str[i+1][k]){
          string[j++]=str[i][k];
           k++;
        }else{
          string[j] = '\0';
          break;
        }
       
      }
    
    }l++;

  }
  // strcpy(ptr,string);
  return string;
}



int main(){
  int num;
  printf("Enter a number of name : ");
  scanf("%d",&num);
  char *ptr[20];
  for(int i=0;i<num;i++)
  ptr[i] = malloc(num * sizeof(char));



  for(int i=0;i<num;i++){
    scanf("%19s",ptr[i]);
  }


  
  // for(int i=0;i<num;i++){
  //   printf("%s  ",ptr[i]);
  // }

  char *str;
  str = longestCommonPrefix(ptr,num);
printf("%s\n",str);

for(int i=0;i<num;i++)
  free(ptr[i]);


  

  return 0;
}