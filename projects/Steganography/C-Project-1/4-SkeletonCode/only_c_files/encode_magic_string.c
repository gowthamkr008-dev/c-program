#include<stdio.h>
#include<string.h>
#include "types.h"
#include "encode.h"

Status encode_magic_string(const char *magic_string, EncodeInfo *encInfo){

  printf("Magic string %s\n",magic_string);

  int len = strlen(magic_string);
  for(int i = 0;i<len;i++){
     fread(encInfo->image_data,7,1,encInfo->fptr_src_image);
    if(encode_byte_to_lsb(magic_string[i], encInfo->image_data) ==  e_failure){
      puts("fail to encode");
      return e_failure;
    }else{
     fwrite(encInfo->image_data,MAX_SECRET_BUF_SIZE*8,1,encInfo->fptr_stego_image);
    }
  }
  return e_success;
}