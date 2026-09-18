#include<stdio.h>
#include<stdarg.h>

void my_printf(const char *fmt, ...){
  int x;
  float y;
  char *ch;
  va_list ap;
  va_start(ap,fmt);
  while(*fmt){
    if(*fmt == '%'){
       fmt++;
      if(*fmt == 'd'){
        x = va_arg(ap,int);
         fprintf(stdout,"%d",x);
      }else if(*fmt == 'f'){
          y = va_arg(ap,double);
         fprintf(stdout,"%f",y);
      }else if(*fmt == 's'){
        ch =va_arg(ap,char*);
        fprintf(stdout,"%s",ch);
      }
    }else{
      putchar(*fmt);
    }
    fmt++;
  }
  va_end(ap);


}
int main(){
  int num1=123;
  int n1 =1,n2=2,n3 =5;
  double f1 =1.43,f2 = 5.3,f3 = 65.23;
  char str[] = "gowtham";
 my_printf("hello world\n");
 my_printf("num : %d\n",num1);
 my_printf("n1 : %d,n2 : %d,n3:%d",n1,n2,n3);

 my_printf("n1 : %f,n2 : %f,n3:%f\n",f1,f2,f3);
 my_printf("string %s\n",str);
}