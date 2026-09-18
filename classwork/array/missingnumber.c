//Write a C program to find and print the missing numbers in an unsorted array.
#include<stdio.h>
int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	int temp;
	printf("Before");
	for(int i=0;i<size;i++){
	printf("%d " ,arr[i]);
	}
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
		if(arr[j] >arr[j+1]){
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
	}
	printf("Before");
	for(int i=0;i<size;i++){
	printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}


