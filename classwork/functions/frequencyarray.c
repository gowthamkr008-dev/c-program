#include<stdio.h>

int main(){

	int size;                    //size of array

	printf("Enter sizeof array");//prompt to the user
	scanf("%d",&size);           //read the value to the user

	printf("Enter the array element ");//prompt the user
	int arr[size];        //decleart the array
	int i,j;
	//read the array element to user
	for(i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}
	//above this declere and value get from user
	
	
	//find duplicate value
	int found,count =0;
	for(i =0;i<size;i++){
		found =0;               //before found duplicate to set as zero
		for(j =0;j < i;j++){//checking the value before present or not 
			if(arr[i] == arr[j]){ //if the both element true found 1 break the loop go to next loop
				                        //array value is  5 2 1 5 2 1 0 3 2 1
				                       // index value    0 1 2 3 4 5 6 7 8 9
		                              // i and j value is equal when compare both found 1            
				found =1;
				break;
			}
		}
		if(found == 0){//
			int count = 0;
			for(int k =i;k<size;k++){
				if(arr[i]== arr[k]){
					count++;
				}		
			}printf("\n The element %d presented in  %d times",arr[i],count);
		}
	}
	return 0;
}

















