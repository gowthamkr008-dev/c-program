#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter the array elements: ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	//abouve program get the element from the user
	
	
	//below find themin and max
	int min = arr[0],max = arr[0];
	for(int j= 1 ;j<size;j++){
			if(arr[j] > max){
				max = arr[j];
			}
			if(arr[j] < min){
			min = arr[j];	
		}
	}
	
	//find the missing value of given array
	
	printf("Max %d \n min %d\n",max,min);
	int i,j,found,print =0;
	for( i = min;i < max;i++){
		for(j = 0;j < size;j++){
			if(arr[j] == i+1){
			    found =0;
				break;
			}else{
				found =1;
			}
		}if(found == 1){
		printf("missing number %d\n",i+1);
		found =0;
		print =1;
		}
	}if(print ==0){
		printf("No missing number is found\n");
	}	
	return 0;
}
