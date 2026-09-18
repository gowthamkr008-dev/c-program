#include<stdio.h>
//union 


#if 0

union Test{
  char option;
  int id;
  double height;
};
int main(){

  union Test temp;
  temp.height =7.2;
  printf("%lf\n\n",temp.height); 
  
  
  temp.id =0x1234;
  printf("%d\n",temp.id); 
  printf("%lf\n\n",temp.height);
  
  temp.option ='1';
  printf("%c\n",temp.option); 
    printf("%d\n",temp.id); 
  printf("%lf\n\n",temp.height);
/*
7.200000     

4660
7.199997

1
4657         //take ne byte to char 
7.199997    //take 4 byte to int and char

*/
  return 0;

}
#endif


#if 0
typedef union  test{
  char option;
  int id;
  double height;
}UDT;

int main(){
  UDT temp;
  printf("%zu\n",sizeof(UDT));
}


#endif

#if 0

union FloatBits
{
float degree;
struct
{
unsigned m : 23;
unsigned e : 8;
unsigned s : 1;
} elements;
};
int main()
{
union FloatBits fb = {3.2};
printf("degree: %f\n", fb.degree);
printf("Sign: %X\n", fb.elements.s);
printf("Exponent: %X\n", fb.elements.e);
printf("Mantissa: %X\n\n", fb.elements.m);
fb.elements.s =1;
printf("degree: %f\n", fb.degree);
printf("Sign: %X\n", fb.elements.s);
printf("Exponent: %X\n", fb.elements.e);
printf("Mantissa: %X\n\n", fb.elements.m);

fb.elements.e =40;
printf("degree: %f\n", fb.degree);
printf("Sign: %X\n", fb.elements.s);
printf("Exponent: %X\n", fb.elements.e);
printf("Mantissa: %X\n\n", fb.elements.m);
return 0;

}
#endif


#if 0
//find our system little or big endian
union Endian
{
  unsigned int vlaue;
  unsigned char byte[4];
};
int main()
{
  union Endian e = {0x12345678};
  e.byte[0] == 0x78 ? puts("Little") : puts("Big\n");
  return 0;
}

#endif

#if 0
//union also padding happen it is rarly
union Endian
{
  unsigned int vlaue;
  unsigned char byte[5];
};
int main()
{
  union Endian e = {0x12345678};
 printf("%zu\n",sizeof(e));
  // e.byte[0] == 0x78 ? puts("Little") : puts("Big\n");
  return 0;
}


#endif

#if 0

struct Endian
{
  unsigned int vlaue;
  unsigned char byte[5];
};
int main()
{
  struct Endian e = {0x12345678};
 printf("%zu\n",sizeof(e));
  // e.byte[0] == 0x78 ? puts("Little") : puts("Big\n");
  return 0;
}



#endif

#if 1

union FloatBits
{
float degree;
struct
{
unsigned m : 23;
unsigned e : 8;
unsigned s : 1;
};
};
int main()
{
union FloatBits fb = {3.2};
printf("degree: %f\n", fb.degree);
printf("Sign: %X\n", fb.s);
printf("Exponent: %X\n", fb.e);
printf("Mantissa: %X\n\n", fb.m);
fb.s =1;
printf("degree: %f\n", fb.degree);
printf("Sign: %X\n", fb.s);
printf("Exponent: %X\n", fb.e);
printf("Mantissa: %X\n\n", fb.m);

fb.e =40;
printf("degree: %f\n", fb.degree);
printf("Sign: %X\n", fb.s);
printf("Exponent: %X\n", fb.e);
printf("Mantissa: %X\n\n", fb.m);
return 0;

}

#endif

#if 1

#endif


#if 1

#endif

#if 1

#endif

#if 1

#endif

#if 1

#endif