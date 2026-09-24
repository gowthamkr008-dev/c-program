#include<stdio.h>
#include <string.h>
#include "encode.h"
#include "common.h"
#include "types.h"


Status copy_bmp_header(FILE *fptr_src_image, FILE *fptr_dest_image){

rewind(fptr_src_image);
char data[54];
fread(data,54,sizeof(char),fptr_src_image);


fwrite(data,54,sizeof(char),fptr_dest_image);

printf("Copied succesfully✅ \n");
  return e_success;
}