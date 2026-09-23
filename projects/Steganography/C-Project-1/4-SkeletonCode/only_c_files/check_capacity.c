#include<stdio.h>
#include <string.h>
#include "encode.h"
#include "common.h"
#include "types.h"

typedef unsigned int  uint;

Status check_capacity(EncodeInfo *encInfo){

  //size of magic string
  /* find the size of maghic string*/
 int mgsize = strlen( MAGIC_STRING) * 8; 
  printf("Size of magic string : %d\n",mgsize);

  /* find secrete file extension */
  /* always 32 because it is integer 32 bit to fetech 8 byte of data */
  /* sefs = secrate file extension size */
  int sfes = 32;
  char *secfile = strstr(encInfo->secret_fname,".");
  /* sfe = secrate file extension */
  int sfe = strlen(secfile)*8;
  printf("%d %d \n",sfes,sfe);
  
  
  /* find size of secrete data*/
  fseek(encInfo->fptr_secret,0,SEEK_END);
  /* byte for file size always  */
  /* sds = secrate data size */
  int sds = 32; 

  /* secrete data */
   uint sd = ftell(encInfo->fptr_secret) * 8;
  printf("sec file data : %d\n",sd);

  fseek(encInfo->fptr_secret,0,SEEK_SET);


  uint secfilesize = mgsize + sfes + sfe + sds +sd;

    printf("Total size: %d\n",secfilesize);

    fseek(encInfo->fptr_src_image,0,SEEK_END);
    /* find the file bmp size of and subtract 54 byte of data because it headre file can't change */
    long unsigned int bmpfilesize  = ftell(encInfo->fptr_src_image) - 54;

    printf("%ld\n",bmpfilesize);

    if(bmpfilesize > secfilesize){
      puts("enough memory is present");
    }else{
      puts("Not enough memory to store data");
      return e_failure;
    }

  








  return e_success;
}

/*
seprate extension

  char srt[] = "file.txt";

  char *ext;
  ext = strstr(srt,".");
  stelen(ext) //find exten file size
  printf("%s",ext);

*/