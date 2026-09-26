#include<stdio.h>
#include"types.h"
#include"decode.h"

Status decode_size_to_ext(int *num,DecodeInfo * decInfo){
  char img_buff[33];
  fread(img_buff,32,sizeof(char),decInfo->fptr_src_image);
  int data;
  if(decode_size_to_lsb(&data, img_buff) == e_failure ){
    puts("faile to decode the size of extension\n");
    return e_failure;
  }
  *num = data;





  return e_success;
}