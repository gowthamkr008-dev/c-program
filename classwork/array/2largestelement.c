#include <stdio.h>

int sec_largest(int arr[], int size){
   int max1,max2;
   if(arr[0] > arr[1]){
       max1 = arr[0];
       max2 = arr[1];
      
   }else{
       max2 = arr[0];
       max1 = arr[1];
   }
    for(int i=0;i<size;i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i] > max2 && arr[i] < max1){
            max2 = arr[i];
        }
    }
    
    return max2;
}

int main()
{
    int size, ret;
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    //Read elements into the array
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}
