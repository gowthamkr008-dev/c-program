#include<stdio.h>
 #include <stdio_ext.h>
int searchinsert(int *arr,int size,int target){
  if(arr[size-1] < target){
    return size;
  }
  for(int i = 0;i<size;i++){
    if(target == arr[i]){
      return i;
    }
  }
  for(int i=0;i<size;i++){
    if(target > arr[i] && arr[i+1] >target){
      return i+1;
    }
  }

}


int main(){
  int size,target;
  printf("Enter size of array");
  scanf("%d",&size);
  __fpurge(stdin);
  int arr[size];
  printf("Enter the array elements: ");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  
  }
    __fpurge(stdin);
  printf("Enter target: ");
  scanf("%d",&target);

  int ret = searchinsert(arr,size,target);
  printf("output: %d",ret);
}