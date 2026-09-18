#include<stdio.h>
int main(){
	int size;

	scanf("%d",&size);

	int i=0,arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}



	printf("Before");
 for(i=0;i<size;i++){
                printf("%d ",arr[i]);
        }

	int temp,j;
	for(i =0;i<size-1;i++){
		for(j =0;j<size-1-i;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = temp;
			}
		}

	}
	 printf("Before");
	 for(i=0;i<size;i++){
                printf("%d ",arr[i]);
        }
	 return 0;
}


