#include<stdio.h>


int reversebit(int num){
int val =0,res =0;
  for(int i=0;i<32;i++){
    printf("%d ",num& (1<<i) );
    val = (num >>i)& (1);
    res =(res*2)+val;
  }
  return res;
}
int main(){
  int num =43261596;
  printf("before %d\n",num);
  num = reversebit(num);

  printf("after %d\n",num);
}