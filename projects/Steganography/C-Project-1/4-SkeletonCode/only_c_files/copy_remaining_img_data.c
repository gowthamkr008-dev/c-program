#include<stdio.h>
#include <string.h>
#include "encode.h"
#include "common.h"
#include "types.h"


Status copy_remaining_img_data(FILE *fptr_src, FILE *fptr_dest){

  char ch;
  while(fread(&ch,1,1,fptr_src)){
    fwrite(&ch,1,1,fptr_dest);

  }
  return e_success;
}