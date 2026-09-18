#include<stdio.h>
int main(){
    int size;
    
    printf("Enter array size: ");
    scanf("%d",&size);
    
    int arr[size];
    
    int i;
    printf("Enter array elements: ");
    for(i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Element before reversing: ");
    for(int j =0; j<size; j++){
        
        printf("%d ",arr[j]);
    }
    
    int first = 0;
    int last=size-1;
     int temp;
    printf("\n");
    
    while(first<last){
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last++;
    }
    printf("\n");
     printf("Element after reversing: ");
    for(int k=0;k<size;k++){
        printf("%d ",arr[k]);
    }
    
}
