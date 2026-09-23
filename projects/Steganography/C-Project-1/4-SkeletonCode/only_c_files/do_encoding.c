#include <stdio.h>
#include "encode.h"
#include "types.h"

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

  /*
  src_image_fname
  secret_fname
  extn_secret_file
  image_capacity
  size_secret_file
  */
  

  /*
  printf("\n\n%s\n",encInfo->src_image_fname);
  printf("%s\n",encInfo->secret_fname);
  printf("%s\n",encInfo->extn_secret_file);
  printf("image size %d\n",encInfo->image_capacity);
  printf("data size %ld\n\n",encInfo->size_secret_file);

*/

  return e_success;
}
