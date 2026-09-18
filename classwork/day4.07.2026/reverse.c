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

	printf("array element are before reversed: ");
	for(i =0;i<size;i++){
		printf("%d,",arr[i]);
	}

	printf("\n");
	
	int first =0,last =size-1;

	while(first <last){
		temp =arr[first];
		arr[first] = arr[last];
		arr[last] = temp;
		first++;
		last--;
	}     

	printf("array element are reversed: ");
        for(i =0;i<size;i++){
                printf("%d,",arr[i]);
        }

        printf("\n");
}
