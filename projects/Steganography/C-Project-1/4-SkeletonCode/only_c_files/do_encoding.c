#include <stdio.h>
#include <string.h>
#include "encode.h"
#include "types.h"
#include "common.h"

Status do_encoding(EncodeInfo *encInfo){
  /* copy first 54 byte*/

  /* open file*/
  //Status open_files(EncodeInfo *encInfo);
  printf("\n");
  puts("capacity check");
  if(check_capacity(encInfo) == e_success){
    puts("capacity checked✅\n");
  }else{
    puts("invalid capacity❌\n");
    return e_failure;
  }


/*                     source file                secrete file*/
printf("orgimage name %s\nsecret msg image %s\n",encInfo->src_image_fname,encInfo->secret_fname);
  if(copy_bmp_header(encInfo->fptr_src_image,encInfo->fptr_stego_image)  == e_success){
}else{
  puts("Copied failed\n");
  return e_failure;
}

/*encode magic string */
char magic_string[5];
strcpy(magic_string,MAGIC_STRING);
if(encode_magic_string(magic_string, encInfo) == e_success){
 puts("Magic sting encoded✅");
}else{
  puts("Failed encoded magic string❌");
}

long int data = strlen(encInfo->extn_secret_file);
    printf("data %ld\n",data);
if(encode_secret_file_size(data, encInfo)== e_success){
    puts ("encoded") ;
}



// if(copy_remaining_img_data(encInfo->fptr_src_image,encInfo->fptr_stego_image) == e_success ){
//   printf("Reamining data copied\n");
// }else{
//   printf("Error in remaining data copy\n");
//   return e_failure;
// }
 
  

  return e_success;
}


  /*
  printf("\n\n%s\n",encInfo->src_image_fname);
  printf("%s\n",encInfo->secret_fname);
  printf("%s\n",encInfo->extn_secret_file);
  printf("image size %d\n",encInfo->image_capacity);
  printf("data size %ld\n\n",encInfo->size_secret_file);

*/
