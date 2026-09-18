#include<stdio.h>
int main(){
	//declearing the variable
	int size1,size2;

	//enter the size of 2 arrays
	printf("Enter the size of the array1 : ");
	scanf("%d",&size1);
	printf("\nEnter the size of array2 : ");
	scanf("%d",&size2);
	int arr1[size1],arr2[size2],i;

	//entering the 2 array elements
	printf("Enter the array 1 element : ");
	for( i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	getchar;
	printf("Enter the array 2 element : ");
	for(i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}

	getchar;
	//merging the 2 sze of the array
	int merge = size1+size2,arr3[merge];
	
	
	//merging the 2 array using loop
	i =0;
	for(int j =0;j<size1;j++){
			arr3[i] = arr1[j];
			i++;
		}
	i=size1;
	for(int j=0;j<size2;j++){
			arr3[i] = arr2[j];
			i++;
	}


	 printf("before sortning array");
        for(i =0;i<merge;i++){
                printf("%d ",arr3[i]);
        }
	printf("\n");

	//sorted the array
	int temp,j;
	for(i=0;i<merge-1;i++){
		for( j=0;j < merge-1-i;j++){

		if(arr3[j]>arr3[j+1]){
			temp = arr3[j];
			arr3[j] =arr3[j+1];
			arr3[j+1] = temp;
		}
	}
	}
	printf("\n");

   	printf("After sortning array");
        for(i =0;i<merge;i++){
                printf("%d ",arr3[i]);
        }
	printf("\n");

//	int med1,med2;
//	float med;
//	if(merge % 2 ==0){
//		med1 = arr3[merge/2];
//		med2 = arr3[merge/2-1];
//		printf("median of the array : %g\n",(med1+med2) / 2.0);
//	}else{
	
	//	printf("median of the array : %d",arr3[merge /2]);
	//}



//return 0;
//}

int med1,med2;
float med;
if(merge % 2 == 0){
    med1 = arr3[merge/2];
    med2 = arr3[merge/2-1];
    med = (med1+med2) / 2.0;
    printf("%f",med);
}else{
    med = arr3[merge /2];
    printf("%f",med);
}
  return 0; 
} 
