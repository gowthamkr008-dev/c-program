#include <stdio.h>
#include <string.h>
#include "encode.h"
#include "types.h"
#include "common.h"


Status encode_secret_file_size(long file_size, EncodeInfo *encInfo){
  char image_buffer[33];
  printf(" %ld\n",file_size);
  fread(image_buffer,31,1,encInfo->fptr_src_image);
  printf("%s\n",image_buffer);
  if(encode_size_to_lsb(file_size,image_buffer) == e_success ){
      puts("size encoded");
  }else{
    return e_failure;
  }

  fwrite(image_buffer,31,1,encInfo->fptr_stego_image);
  return e_success;
}