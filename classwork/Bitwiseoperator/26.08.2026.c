#include<stdio.h>
#include<string.h>

#if 0
int main(){

int count;
unsigned char iter = 0xFF;
for (count = 0; iter != 0; iter >>= 1)
{
if (iter & 01)
{
count++;
}
}
printf("count is %d\n", count);


  return 0;
}
#endif

#if 0
int main(){
  int count;
  char iter = 0xab;
  for (count = 0; iter != 0; iter >>= 1)
  {
    if (iter & 01)
    {
      count++;
    }
  }
  printf("count is %d\n", count);
  return 0;
}

//lead to infinite loop
// becaause char has signed retained the msb bit 1 so i not obtain the 0 so infinate loop

#endif

#if 0
int main(){
  int count;
  unsigned char iter = 0xab;
  for (count = 0; iter != 0; iter >>= 1)
  {
    if (iter & 01)
    {
      count++;
    }
  }
  printf("count 1: %d\n", count);
  // want number of zero 
  printf("Zero 0: %d\n",8 -count);
  return 0;
}

#endif

#if 0
int main(){
  int x = 7, y = 8;
  x = 7 << 32;
  printf("x is %d\n", x);
  x = y << 32;
  printf("x is %d\n", x);
return 0;
}


#endif

#if 1
int main(){
    int num,i=0;
    scanf("%d",&num);
    char binary[120];

   do{
      binary[i] = num % 2 + '0';
      i++;
      num = num / 2;
    } while(num != 0);


    binary[i] = '\0';
    int left =0,right =strlen(binary)-1;
    char temp;
    while(left < right){
      temp = binary[left];
      binary[left] = binary[right];
      binary[right] = temp;
      left++;
      right--;
      
    }
    printf("%d",i);


}



#endif

#if 1



#endif

#if 1



#endif


