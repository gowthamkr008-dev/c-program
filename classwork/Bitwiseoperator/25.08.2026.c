#include<stdio.h>

#if 1
//bitwise operators
int main(){
  
  int a = 0x23 ,b = 0xab;
  printf("%x\n",a&b);//23
  printf("%x\n",a|b);//ab
  printf("%x\n",a^b);//88


  printf("%d\n",14<< 2);//56
  printf("%d\n",56 >> 2);//14
  printf("%d\n",-56 >>2);//-14
  printf("%d\n",39 >>2);//9
  printf("%d\n",-39 >> 2);//-10

  return 0;
}

/*
23
ab
88
56
14
-14
9
-10
*/
#endif