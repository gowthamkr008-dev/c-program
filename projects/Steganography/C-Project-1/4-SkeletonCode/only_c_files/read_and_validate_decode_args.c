#include"decode.h"
#include<string.h>

Status read_and_validate_decode_args(char *argv[], DecodeInfo *decInfo){
  puts("FIle validation\n");
  if(strstr  (argv[2],"bmp") != NULL){
    decInfo->src_image_fname =argv[2];
  }else{
    return e_failure;
  }

  if(argv[3] != NULL){
    if(strstr (argv[4],".txt") != NULL ){
      decInfo->data_fname =argv[4];
    }else{
      printf("Invalid file format use default file format\n");
      decInfo->data_fname = "decode.txt";
    }
  }else{
    decInfo->data_fname = "decode.txt";
  }




  return e_success;
}