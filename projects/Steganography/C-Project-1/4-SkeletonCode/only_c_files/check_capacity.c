#include<stdio.h>
#include <string.h>
#include "encode.h"
#include "common.h"
#include "types.h"

typedef unsigned int  uint;

Status check_capacity(EncodeInfo *encInfo){
  
  /*number of magic string*/
  int magicstr = strlen(MAGIC_STRING) * 8; /*  require 16 byte*/

  char *ext = strrchr(encInfo->secret_fname,'.');

  /* length of ectension*/
  int sec_fil_ext = 32 ;  /* require 32 byte*/

  /* char in extension*/
  int num_of_char_ext = strlen(encInfo->secret_fname) * 8; /* require 32 byte */

  fseek(encInfo->fptr_secret,0,SEEK_END);

  int num_of_char_in_file = 32; /* require 32 byte*/

  /* number of char in secrate file */
  int sec_data = ftell(encInfo->fptr_secret) * 8 ; /* 25 char 200 byte of data */

  rewind(encInfo->fptr_secret);
  
  int sec_fil_tot_size = magicstr + sec_fil_ext + num_of_char_ext + num_of_char_in_file + sec_data;

  printf("require size %d\n",sec_fil_tot_size);

  fseek(encInfo->fptr_src_image,0,SEEK_END);

  uint bmp_file_size = ftell(encInfo->fptr_src_image);

  printf("size of image file %d\n",bmp_file_size);

  if(sec_fil_tot_size < bmp_file_size){
    puts("enough capacity availabe ✅");
  }else{
    return e_failure;
  }
  
  return e_success;
}