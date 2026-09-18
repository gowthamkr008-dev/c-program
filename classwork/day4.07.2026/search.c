//linear search 
//to compare the all element the array



#include<stdio.h>
int main(){
	int size;

	printf("Enter the size of array");
	scanf("%d",&size);

	int arr[size],i;  
	printf("Enter array element are");
        for(i =0;i<size;i++){
                scanf("%d,",&arr[i]);
        }


	printf("Enter the search element: ");

	int search;
	scanf("%d",&search);

	int find =1;
	for(i =0;i<size;i++){
	
		if(search == arr[i]){
	
		printf("Element found in index of %d",i);
		return 0;
		}
	}
        printf("\nElement not found");
	return 0;
}
