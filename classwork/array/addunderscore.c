#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements in array : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

        printf("before remove : ");
        for(int i=0;i<size;i++){
                printf("%d ",arr[i]);
        }

	int remove;
	printf("Enter the element want remove in the array : ");
	scanf("%d",&remove);


	for(int i=0;i<size;i++){
		if(remove == arr[i]){
			arr[i] = _int;
		}
	}

	printf("after remove : ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	return 0;

}

