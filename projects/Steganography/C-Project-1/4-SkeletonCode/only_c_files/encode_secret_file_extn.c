#include <stdio.h>
#include <string.h>
#include "encode.h"
#include "types.h"
#include "common.h"


Status encode_secret_file_extn(const char *file_extn,EncodeInfo * encInfo){

  
  int size = strlen(file_extn);
  printf("%d\n",size);
  for(int i=0;i<size;i++){
    fread(encInfo->image_data,8,sizeof(char),encInfo->fptr_src_image);
    if(encode_byte_to_lsb(file_extn[i],encInfo->image_data)==e_success ){
      fwrite(encInfo->image_data,8,sizeof(char),encInfo->fptr_stego_image);
    }else{
      printf("Fail to encode\n");
      return e_failure;
    }

  }
printf("Succesfully decode\n");
  return e_success;
}