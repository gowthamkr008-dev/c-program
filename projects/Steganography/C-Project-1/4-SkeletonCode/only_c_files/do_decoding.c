#include<stdio.h>
#include<string.h>
#include"types.h"
#include"common.h"
#include "decode.h"


Status do_decoding(DecodeInfo *decInfo){
  fseek(decInfo->fptr_src_image,54,SEEK_CUR);
  // printf("file pointer %ld\n ",ftell(decInfo->fptr_src_image));

  /*decode magic string*/
  char magicstring[4];
  if(decode_magic_string(magicstring,decInfo)== e_success){
    if(strcmp(magicstring,MAGIC_STRING) == 0){
      printf("Secrat data present\n");
    }else{
      printf("No secret data data present\n");
      return e_failure;
    }
  }else{
    printf("Fail to decode\n");
    return e_failure;
  }

  /* decode size of extension */
  int ext_size;
  if(decode_size_to_ext (&ext_size,decInfo) == e_success){
    printf("size of extension %d\n",ext_size);
    char ext[ext_size];
    printf("ectract file extension\n");
    if(decode_file_extern(ext,decInfo,ext_size)==e_success ){
      printf("%s\n",ext);
    }
  }else{
    printf("Fail to decode\n");
    return e_failure;
  }


  int size_data;
  if(decode_size_to_ext (&size_data,decInfo)== e_success){
    printf("decoded size : %d\n",size_data);
    char data[size_data];
  }else{
    return e_failure;
  }


  return e_success;
}


/*
read and validate

open __FILE_

decode maghic string
/*
create a two function

do decodeint

take 32 byte from file fetch lsb from a int




*/

/*
do decode char
           file pointer,number of time to read
decodechar(fileptrstego,2);

take 8 byte of data from bmp
fetch lsb and frame a char
return string

*/

/*
if {string is "#*" continue}
else {stop the program not a present any secrate data}

decode size of sec file extension{
  function call 
  int exfile = dodecode()
  
  return integer
}

decode secrate file from extension{
  call decode char(stegofilepointer ,exfile)
}

decode secrate file secrate data{
  call decodeint()  
  
  reutrn int 
}


compare secrate.txt and decode.txt








*/