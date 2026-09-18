#include<stdio.h>
#if 0
int main(){
  const int num = 100;
  int *iptr = &num;
 
  printf("Number is %d\n", *iptr);
 //num = 200; //can't change the value by variable
 *iptr = 200;//can change the value by using the pointer
  printf("Number is %d\n", num);


return 0;
}

#endif

#if 0

int main(){
 int num = 100;
   const int *iptr = &num;
 
  printf("Number is %d\n", *iptr);
 num = 200; //can change the value by using the variable
 //*iptr = 200;//can't change the value by using the address because address ic constant
   printf("Number is %d\n", num);


return 0;
}
#endif

#if 0
int main(){
    int *p1,*p2;
    #if 0
    p1 = p1 -10;
    p2 = p2 +20;
    p1-p2;

    #endif

    #if 1
    p1+p2;
    p1 /p2;
    p1 *p2;
    p1 *20;
    p2 /10;

/*
 45 |     p1+p2;
      |       ^
constptr.c:46:8: error: invalid operands to binary / (have ‘int *’ and ‘int *’)
   46 |     p1 /p2;
      |        ^
constptr.c:47:8: error: invalid operands to binary * (have ‘int *’ and ‘int *’)
   47 |     p1 *p2;
      |        ^
constptr.c:48:8: error: invalid operands to binary * (have ‘int *’ and ‘int’)
   48 |     p1 *20;
      |        ^
constptr.c:49:8: error: invalid operands to binary / (have ‘int *’ and ‘int’)
   49 |     p2 /10;
      |        

*/
    #endif
}
#endif

#if 0
int main()
{
  char array[sizeof(int) + 1];
  int *ptr1, *ptr2;
  ptr1 = &array[0];
  ptr2 = &array[1];
  scanf("%x %x", ptr1, ptr2);
  printf("%x %x", ptr1, ptr2);
  return 0;
}

/*
12345678
abcdefff
1553b2e3 1553b2e4
*/
#endif


#if 1
int main()
{
  char array[sizeof(int) + 1];
  int *ptr1, *ptr2;
  ptr1 = (int *)array[0];
  ptr2 = (int *)&array[1];
  scanf("%x %x", ptr1, ptr2);
  printf("%x %x", ptr1, ptr2);
  return 0;
}
#endif

#if 1

#endif