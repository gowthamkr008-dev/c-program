#include<stdio.h>
int main(){
	int a;
	int b;

	scanf("%d%d",&a,&b);

	int arr1[a];
	int arr2[b];

	int i;

	printf("Enter a array1 element : ");
	for(i = 0;i < a;i++){
		scanf("%d",&arr1[i]);
	}
	printf("\n");
       	printf("Enter a array2 element : ");
	for(i = 0; i< b; i++){
	       scanf("%d",&arr2[i]);
	}

	printf("\n");
	int equal = 1,j,c=b-1;
	for(i =0; i < a; i++){
		for(j = 0; j < b; j++){
			if(arr1[i] == arr2[j]){
			 equal = 1;
			 break;	 
			}else if(j == b-1){
                             equal = 0;
				break;
                        }else{
				equal =0;
			}
		}
		if(equal ==0){
			if(j == b-1){
				break;
			}
		}
	}
	if(equal == 1){
		printf("the given 2 array are equal");
	}else{
		  printf("the given 2 array are not equal");
	}

	return 0;

}
