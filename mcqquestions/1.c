#include<stdio.h>
int main(){
int arr[] ={10,20,30,40,50};
int *ptr =arr;
printf("%d",*(ptr+2));
return 0;
}
