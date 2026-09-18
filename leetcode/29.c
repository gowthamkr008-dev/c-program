#include<string.h>
#include<stdio.h>
int main(){
  int dividend,divisor,valid =0 ,first ,result =0;
  first = dividend;
  char ch = '+';
  scanf("%d %d",&dividend,&divisor);
  if(dividend < 0 && divisor <=0){
      dividend = -dividend;
      divisor = -divisor;
  }else if (dividend < 0){
     ch ='-';
      dividend = -dividend;
  }else if(divisor <=0){
    ch ='-';
    divisor = -divisor;
  }

  do{
    first += divisor;
    if(first >= dividend){
      first =0;
        valid =1;
    }else{
      result ++;
      valid =0;
    }

  }while(valid !=1);
if(ch == '-'){
    result = -result;
}
printf("%d",result);
  return 0;
}