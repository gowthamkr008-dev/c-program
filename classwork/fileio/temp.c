#include<stdio.h>
#include <string.h>
int main(){
  FILE *fp;
  fp =fopen("text.txt","w");
  if(fp == NULL){
    return 1;
  }

  int num;
  int ch;
  scanf("%d",&num);
  while( (ch = getchar()) != EOF );

  char str[30];
  scanf("%[^\n]",str);
    while( (ch = getchar()) != EOF );

  fwrite(&num,sizeof(int),1,fp);
  
  fwrite(str,1,strlen(str),fp);
  
  // fscanf(fp,"%d",&num);
  // fscanf(fp,"%s",str);

  rewind(fp);

  int fnum;
  fread(&fnum,sizeof(int),1,fp);
  
  char fstr[20];
    fread(fstr,1,strlen(str),fp);

  printf("%d %s",fnum,fstr);

  fclose(fp);
  return 0;
  

}