#include<stdio.h>

int main(){

  char data[8]= {0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x05};
  char ndata[8];
  char ch ='#';
int i=0;
printf("data bit ");
for(i =0;i<8;i++){
  printf("%d ",data[i]);

}
printf("\n");

printf("char bit ");

for(i =7;i >= 0;i--){
  printf("%d ", (ch >> i)&1 );
}

printf("\n");
//clear bit

int j,clear,l=0;
printf("new bits ");
for( j =0;j<8;j++){
  //printf("clear %x",data[j] & ~(1));
  clear= data[j] & ~(1);
  
//  printf(" get  %x  ", ( (ch >> l) & 1 )) ;

  ndata[j] = clear | ((ch>>l)&1);
  printf("%x ",ndata[j]);
 
l++;
}













printf("\n\nEncoding \n");
printf("given bit ");
for(i= 0;i<8;i++){
  printf("%x ",ndata[i]);
}

printf("\n");
printf("final bit : ");

for(i =0;i<8;i++)
    printf("%x ",ndata[i]); 

printf("\n\n");

printf("decoding : \n");
//get data
l =0;
printf("Extracted bits:  ");
char g = 0;
int num =0,digit;
for(i =8;i>=0;i--){
  //get bir
 printf("%d ",ndata[i]&1);
 digit = ndata[i]&1;
 g = (g *2)+digit;
}

printf("\nchar %c\n ",g);
  return 0;
}
