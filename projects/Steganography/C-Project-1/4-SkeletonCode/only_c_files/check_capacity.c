#include<stdio.h>
#include <string.h>
#include "encode.h"
#include "common.h"
#include "types.h"

typedef unsigned int  uint;

Status check_capacity(EncodeInfo *encInfo){




  /* bmp file image capacity */
    encInfo->image_capacity = get_image_size_for_bmp(encInfo->fptr_src_image);



    
  int mg = strlen(MAGIC_STRING) * 8 ;

  char *ext = strrchr(encInfo->secret_fname,'.');
  strcpy(encInfo->extn_secret_file,ext);
  int size_of_ext = 32;
  int ext_char = strlen(  encInfo->extn_secret_file) * 8 ;

  int size_of_data = 32;



  encInfo->size_secret_file   = get_file_size(encInfo->fptr_secret,encInfo) * 8;

  uint total_sec_size = mg + size_of_ext + ext_char +size_of_data +encInfo->size_secret_file;
  printf("total size %d\nimage size %d\n",total_sec_size,encInfo->image_capacity);



  /*
  
    char *src_image_fname; //✅
    FILE *fptr_src_image;//✅
    uint image_capacity;
    uint bits_per_pixel;//✅
    char image_data[MAX_IMAGE_BUF_SIZE];//✅

    char *secret_fname;//✅
    FILE *fptr_secret;//✅
    char extn_secret_file[MAX_FILE_SUFFIX];
    char secret_data[MAX_SECRET_BUF_SIZE];  
    long size_secret_file;

  */

   printf("\n\n%s\n",encInfo->src_image_fname);
  printf("%s\n",encInfo->secret_fname);
    printf("%s\n",encInfo->extn_secret_file);
      printf("%s\n",encInfo->secret_data);

      printf("image size %d\n",encInfo->image_capacity);
      printf("data size %ld\n",encInfo->size_secret_file);

  if(encInfo->image_capacity > total_sec_size){
    puts("Enough capacity available✅\n");
  }else{
    return e_failure;
  }



  return e_success;


  




}
//   /*number of magic string*/
//   int magicstr = strlen(MAGIC_STRING) * 8; /*  require 16 byte*/

//   char *ext = strrchr(encInfo->secret_fname,'.');

//   /* length of ectension*/
//   int sec_fil_ext = 32 ;  /* require 32 byte*/

//   /* char in extension*/
//   int num_of_char_ext = strlen(encInfo->secret_fname) * 8; /* require 32 byte */

//   fseek(encInfo->fptr_secret,0,SEEK_END);

//   int num_of_char_in_file = 32; /* require 32 byte*/

//   /* number of char in secrate file */
//   int sec_data = ftell(encInfo->fptr_secret) * 8 ; /* 25 char 200 byte of data */

//   /* check any data is present or not */
//   if(sec_data < 1){
//     printf("No data present in secret file\n");
//     return e_failure;
//   }
//   rewind(encInfo->fptr_secret);

  
//   int sec_fil_tot_size = magicstr + sec_fil_ext + num_of_char_ext + num_of_char_in_file + sec_data;

//   printf("require size %d\n",sec_fil_tot_size);
//   encInfo->image_capacity = get_image_size_for_bmp(encInfo->fptr_src_image);

 
//   printf("size of image file %d\n",encInfo->image_capacity);

//   if(sec_fil_tot_size < encInfo->image_capacity){
//     puts("enough capacity availabe ✅");
//   }else{
//     return e_failure;
//   }
  
//   return e_success;
// }