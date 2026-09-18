#include<stdio.h>
int main(){


  int a = 123468;
  float b = 10.2145;
  double d = 10.2698745;
  char ch = 'c';
  char str[10] = "gowtham";
  int x =10;

  int *ptr;
  ptr = &x;

  printf("int :%d\n",a);
  printf("float :%f\n",b);
  printf("double :%lf\n",d);
  printf("char :%c\n",ch);
  printf("str :%s\n",str);
  printf("pointer int :%d\n",*ptr);
  

 printf("return type of int  print%d \n", printf("int :%d\n",a));//print number of character printed
 printf("return type of float  print%d \n",  printf("float :%f\n",b));
 printf("return type of double  print%d \n",  printf("double :%lf\n",d));
 printf("return type of char  print%d \n",  printf("char :%c\n",ch));
 printf("return type of str  print%d \n", printf("str :%s\n",str));
 printf("return type of pointer  print%d \n",  printf("pointer int :%d\n",*ptr));

 // format specifier ca tell to printf as per this type you are going to print

 return 0;

}