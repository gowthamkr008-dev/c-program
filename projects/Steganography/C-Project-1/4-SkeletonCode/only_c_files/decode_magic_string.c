#include<stdio.h>
#include"types.h"
#include"decode.h"


Status decode_magic_string(char *str,DecodeInfo * decInfo){


 
  for(int i=0;i<2;i++){
  fread(decInfo->image_data,8,sizeof(char),decInfo->fptr_src_image);
  char ch;
    if(decode_byte_to_lsb(&ch,decInfo->image_data) == e_failure){
      puts("Fail to decode\n");
      return e_failure;
    }else{
      str[i] = ch;
    }
    // printf("%c\n",str[i]);
  }



  return e_success;
}