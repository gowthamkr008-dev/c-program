
#include <stdlib.h>
#include<stdio.h>
int* plusOne(int* arr, int size, int* returnsize) {
  int *res = malloc((size * 4 )+2 );
  int i=0,result =0;
  for(i = 0;i < size; i++){

    result = (result * 10) + arr[i];
  } 
  printf("%d\n",result);
  result +=1;
  printf("%d\n",result);

  int digit =0;
 static int j=0;
  while(result != 0){
    res[j++] = result % 10;
    printf("%d,",res[j-1]);
    result /= 10;
  }
  int left =0,right = j-1;
  
  int temp;
  while(left <right){
    temp = res[left];
    res[left] = res[right];
    res[right]= temp;
     right--;
     left++;
  }

     *returnsize  = j;
    printf("\n%ls\n",returnsize);
    return res;
  //  free(res); 
}


int main(){
  int size;
  scanf("%d",&size);
  int arr[size];
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  int returnsize;
  int *ptr;
 ptr =  plusOne(arr,size,&returnsize);

 for(int i=0;i<returnsize;i++){
  printf("%d ",ptr[i] );
 }



}