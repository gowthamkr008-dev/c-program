// Find possible pairs from the array whose sum is given by the user. 


#include<stdio.h>

int main(){

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];

	int target;
	printf("\nEnter the array elements: ");

	for(int i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the target value : ");
	scanf("%d",&target);

	for(int i =0;i<size;i++){
		printf("The array %d = %d\n",i,arr[i]);
	}

	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i] + arr[j] == target){
				if(i == j)
					continue;
				printf("index of [%d ,%d]\n",i,j);
			}
		}
	}
	return 0;
}
