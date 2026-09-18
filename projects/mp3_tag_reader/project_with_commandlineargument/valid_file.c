#include"reader.h"

int valid_file(char *fname)
{
  FILE * fp;
  fp =fopen(fname,"r");
  if(fp == NULL){
      print_line(30);
    perror("Error ❌");
    print_line(30); 
    return 0;
  }

  char head[4];
  fread(head,1,3,fp);
  if(strcmp(head,"ID3") == 0){
    print_line(30);
    printf("%-5s %s"," ","FILE VALID FORMAT ✅");
    print_line(30);
    return 1;
  }else{
    print_line(30);
    printf("%-3s %s"," ","FILE INVALID FORMAT ❌");
    print_line(30);
    return 0;
  }
  fclose(fp);
}