#include<stdio.h>

int main(){
  int num;
  printf("Enter number: ");
  scanf("%X",&num);

  int pos;
  scanf("%d",&pos);
  for(int i =8;i>=0;i--){
    printf("%d", (num >> i) & 1);
  }
  printf("\n");
  printf("%x  ",num1);
  //set
 int num1 = ((num)|(1 << pos) );
   for(int i =8;i>=0;i--){
    printf("%d", (num1 >> i) & 1);
  }


//clear
int num2 =  num = num & ~(1 << pos);
  printf("\n");
for(int i =8;i>=0;i--){
    printf("%d", (num2 >> i) & 1);
  }

  printf("\n");
printf("%x  ",num2);


    printf("position %d", (num >> pos) & 1);



}

// #include <stdio.h>
// struct MyStruct {
//     char c1;
//     int i;
//     char c2;
// };
// int main() {
//     printf("%lu", sizeof(struct MyStruct));
//     return 0;
// }