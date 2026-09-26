#include<stdio.h>
#include"types.h"
#include"decode.h"

Status decode_file_extern(char * file_extern,DecodeInfo * DecInfo,int size_extern){

  

  char ext[size_extern];
  for(int i = 0;i<size_extern;i++){
  fread(DecInfo->image_data,8,sizeof(char),DecInfo->fptr_src_image);
  if( decode_byte_to_lsb(&ext[i],DecInfo->image_data)== e_success){
    printf("%c ",ext[i]);
  }

}

printf("\n\nextension%s\n",ext);




  return e_success;
}