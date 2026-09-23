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
    puts("capacity checked✅");
  }else{
    puts("invalid capacity❌");
    return e_failure;
  }


  return e_success;
}
