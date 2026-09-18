#include<stdio.h>
int main(){
	int size;

	printf("Enter a size of array");
	scanf("%d",&size);

	int arr[size];

	int i,temp;
	printf("Enter the array element");
	for(i =0; i< size ;i++){
		scanf("%d",&arr[i]);
	}

	printf("array element are");
	for(i =0;i<size;i++){
		printf("%d,",arr[i]);
	}

	printf("\n");

	for(i =0;i<size-1;i++){
		for(int j=0;j<size -1-i;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] =temp;
			}
		}
	}
        printf("array element areafter short");
        for(i =0;i<size;i++){
                printf("%d,",arr[i]);
        }
	printf("\n");
	return 0;
}
