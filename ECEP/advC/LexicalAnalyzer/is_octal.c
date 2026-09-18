#include"lexer.h"
extern int error;
int is_octal(char *token){
  int i =0,valid =0,print =0;
  if(token[0] == '0' && token[1] >= '0' && token[1] <= '7'){
    while(token[i] != '\0'){
      if(token[i] >= '0' && token[i] <= '7'){
        valid =1;
      }else{
        error++;
        valid =0;
      }
      i++;
    }
if(valid){
  return 1;
}else{
  return 2;
}

  }else{
    return 0;
  }
}