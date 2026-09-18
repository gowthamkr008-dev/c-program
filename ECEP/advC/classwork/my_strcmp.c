#include<stdio.h>
#include<ctype.h>
#include <string.h>
#include <stdio_ext.h>

int my_strcmp(char *name,char *cname){
  int i= 0;
  while(name[i] != '\0' || cname[i] != '\0'){
    if((name[i] - cname[i]) != 0){
      return name[i] - cname[i];
    }
    i++;
  }
  if(name[i] == '\0' && name[i] == '\0'){
    return 0;
  }
  if(name[i] == '\0'){
    return 1;
  }else if(cname[i] == '\0'){
    return -1;
  }
}

int main(){
  char name[20],cname[20];
  scanf("%[^\n]",name);
  __fpurge(stdin);
  scanf("%[^\n]",cname);
  printf("inbuild function : %d \n",strcmp(name,cname));
    printf("myown function : %d \n",my_strcmp(name,cname));
}