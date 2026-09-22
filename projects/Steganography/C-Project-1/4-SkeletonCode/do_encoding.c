#include <stdio.h>
#include "encode.h"
#include "types.h"

Status do_encoding(EncodeInfo *encInfo){
  /* copy first 54 byte*/


  char header[54];
  fread(header,53,1,encInfo->fptr_src_image);
  fwrite(header,53,1,encInfo->fptr_stego_image);

  return e_success;
}
