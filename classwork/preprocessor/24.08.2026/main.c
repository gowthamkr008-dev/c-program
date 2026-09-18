#include <stdio.h>

#if 0
#define SWAP(a, b ,type) \
{                    \
  type temp = a;          \
  a = b;             \
  b = temp;          \
}\

int main(){
 int i1 = 1.6543, i2= 9.123445;
  printf("Before: %d %d\n", i1, i2);
  SWAP(i1, i2,int);//use block to delet the temp variable
  printf("After: %d %d\n", i1, i2);


  float n1 = 1.6543, n2= 9.123445;
  printf("Before: %f %f\n", n1, n2);
  SWAP(n1, n2,float);//use block to delet the temp variable
  printf("After: %f %f\n", n1, n2);

char c1 = 'a' ,c2 = 'b';
printf("Before: %c %c\n", c1, c2);  
SWAP(c1, c2,char);
 printf("After : %c %c\n", c1, c2);


double d1 = 10.1598742369 ,d2 = 20.98745632;
printf("Before: %lf %lf\n", d1, d2);  
SWAP(d1, d2,char);
 printf("After : %lf %lf\n", d1, d2);

  return 0;
}

#endif



#if 1

#endif

#if 1

#endif

#if 1


#endif

