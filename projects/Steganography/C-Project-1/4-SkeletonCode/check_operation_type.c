#include<stdio.h>
#include <string.h>
#include "encode.h"
#include "types.h" // Contains user defined types

OperationType check_operation_type(char *argv[]){
  if(strcmp(argv[1],"-e") ==0){
    // printf("Do Encoding\n");
    return e_encode;
  }else if(strcmp(argv[1],"-d")==0){
    // printf("Do Decoding\n");
    return e_decode;
  }else{
    // printf("Enter valid arguments\n");
    return e_unsupported;
  }
}