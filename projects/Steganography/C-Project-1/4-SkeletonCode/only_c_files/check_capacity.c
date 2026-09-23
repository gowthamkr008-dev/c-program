#include<stdio.h>
#include <string.h>
#include "encode.h"
#include "common.h"
#include "types.h"

typedef unsigned int  uint;

Status check_capacity(EncodeInfo *encInfo){




  /* bmp file image capacity */
    encInfo->image_capacity = get_image_size_for_bmp(encInfo->fptr_src_image);



    
  int mg = strlen(MAGIC_STRING) ;

  char *ext = strrchr(encInfo->secret_fname,'.');
  strcpy(encInfo->extn_secret_file,ext);
  int size_of_ext = sizeof(int);
  int ext_char = strlen(  encInfo->extn_secret_file);

  int size_of_data =sizeof(int);



  encInfo->size_secret_file   = get_file_size(encInfo->fptr_secret,encInfo);

  uint total_sec_size =( mg + size_of_ext + ext_char +size_of_data +encInfo->size_secret_file ) * 8;
  printf("total size %d\nimage size %d\n",total_sec_size,encInfo->image_capacity);

  if(encInfo->size_secret_file  <= 0){
    printf("not present any secret data\n");
    return e_failure;
  }

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