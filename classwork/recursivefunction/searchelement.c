#include<stdio.h>
int find_element(int arr[],int size,int search){
	if(size <= 0){
		return -1;
	}
	if(arr[size-1] == search) { 
		return size - 1;
	}
	return find_element(arr,size - 1,search);
	
}

void reverse_arr(int arr[],int size,int left,int right){
	int temp;
	if(left > right){
		return ;
	}else{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		reverse_arr(arr,size,left+1,right-1);
	}
}



int main(){
	int size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	int arr[size];
	for(int i = 0;i < size;i++)
	scanf("%d",&arr[i]);
	
	//int search ;
	//scanf("%d",&search);
	//int ret ;
	//ret = find_element(arr,size,search);
	
	printf("before reversing ");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
		
	int left =0,right=size-1;
	reverse_arr(arr,size,left,right);

	printf("\nAfter reversing ");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);


}
