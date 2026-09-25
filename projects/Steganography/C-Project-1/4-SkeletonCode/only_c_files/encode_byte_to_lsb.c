#include<stdio.h>
#include<string.h>
#include"types.h"
#include "encode.h"

Status encode_byte_to_lsb(char data, char *image_buffer){
 int i,j;
 printf("Bin data : ");
 for(i = 7;i >= 0;i--){
  printf("%d ",(data>>i) &1);
 }
 printf("\n");

 for(i = 0;i <8 ;i++){
  for(j = 7;j >= 0 ;j--){
    printf("%d ",(image_buffer[i]>>j) &1 );
  }
  printf("img data %x \n",image_buffer[i]);
 }
printf("\n\n");

int clear,get;
j = 7;
for(i =0;i<8;i++){
  /* clear bit*/
  clear = image_buffer[i] & ~(1);
  // printf("%x ",clear);

  /* get bit*/
  get = (data>>j)&1;
  j--;
  // printf("%d ",get);

  /* set bit*/
  image_buffer[i] = clear|get;
}

  return e_success;
}
/*
printf("Decoding\n");
int res =0,digit;
for(i = 0;i<8;i++){
  digit = image_buffer[i] & 1;
  res = (res * 2) + digit;
}

printf("char %c\n",res);

printf("\n\n");
*/




  //   int l =0;
 
//   int clear,get,set;

//   for(int i=0;i <8;i++){
//      printf("%x ",image_buffer[i]);
//   }
//   printf("\n\n");
//   for(int j =0;j<8;j++){
//     // printf("%x ",image_buffer[j]);
//   for(int i =7;i>=0;i--){
//     printf("%d ",(image_buffer[j]>>i) &1);
//   }
//   printf("data %x \n",image_buffer[j]);
//   }

//   printf("\n");
//   for(int i = 0 ;i  <8;i++){
//     // printf("%x ",(image_buffer[i]  & ~(1) ) );

//     clear = image_buffer[l] & ~(1);
//     // printf("%d ",(data>>i) & 1);

//     get = (data >> i) & 1;
//     image_buffer[l] = clear |get;
//     // printf("%x ",image_buffer[l]);
//     l++;
//   }
//   printf("\n\n");


//   int  res = 0;

//   int digit ,j =0;
//   for(int i = 7;i>= 0;i--){
//     digit = (image_buffer[i] & 1);
//     printf("%d ",digit);
//     res += (res * 2) + digit;
//   }
// printf("char %c\n",res);

//   return e_success;
// }