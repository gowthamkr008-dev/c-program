//Rotate array N times by right based on +ve entry from user

//n =2
// i/p 1,2,3,4,5
// o/p 4,5,1,2,3


#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of the array");
	scanf("%d",&size);


        int k;
        printf("Enter how many time rotate the array ");
        scanf("%d",&k);
	getchar;

	int arr[size];
	printf("Enter the array element");
	for(int i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	for(int i =1;i <= k;i++){
		int temp = arr[size-1];
		for(int j = size - 1 ;j >= 0;j--){
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}

	printf("After rotate the array ");
	for(int i=0;i<size;i++){
	 	printf("%d ",arr[i]);
	}
	return 0;
}
			
