#include <stdio.h>
#include "encode.h"
#include "types.h"

Status do_encoding(EncodeInfo *encInfo){
  /* copy first 54 byte*/

  /* open file*/
  //Status open_files(EncodeInfo *encInfo);
  if(open_files(encInfo) == e_success){
    puts("open File Success✅");
  }else{
    puts("Fail to open file❌");
    return e_failure;
  }

  if(check_capacity(encInfo) == e_success){
    puts("capacity checked✅\n");
  }else{
    puts("invalid capacity❌\n");
    return e_failure;
  }


  
  printf("\n\n%s\n",encInfo->src_image_fname);
  printf("%s\n",encInfo->secret_fname);
  printf("%s\n",encInfo->extn_secret_file);
  printf("image size %d\n",encInfo->image_capacity);
  printf("data size %ld\n\n",encInfo->size_secret_file);


  return e_success;
}
