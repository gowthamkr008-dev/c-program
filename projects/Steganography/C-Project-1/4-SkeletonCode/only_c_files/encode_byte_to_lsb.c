#include<stdio.h>
#include<string.h>
#include"types.h"
#include "encode.h"

Status encode_byte_to_lsb(char data, char *image_buffer){
  int l =0;
 
 
  int clear,get,set;
  for(int i = 7 ;i  >= 0;i--){
    // printf("%x ",(image_buffer[l]  & ~(1) ) );

    clear = image_buffer[l] & ~(1);
    // printf("%d ",(data>>i) & 1);

    get = (data >>l) & 1;
    image_buffer[l] = clear |get;
    // printf("%x ",image_buffer[l]);
    l++;
  }
  printf("\n");

  return e_success;
}