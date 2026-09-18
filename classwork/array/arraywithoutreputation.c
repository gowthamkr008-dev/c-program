//Print array without repetition

#include<stdio.h>
int main(){
	int size;
	
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nbefore");
	for(int i=0;i<size;i++){
	printf("%d,",arr[i]);
	}
	printf("\n");
	int val = 0,times=0,i,j,print=0;
	for( i = 0;i < size;i++){
		times=0;
		for(j = 0;j < size;j++){
		if(i == j)
			continue;
		if(arr[i] == arr[j]){//num is equal
			print = 1;
			val = arr[i];
			times++;
			break;
			}
		}if(print == 1)
			printf("the value %d present in %d times\n",val,times );
		for(int k =j;k > 0;k--){
			if(arr[i] == arr[k]){
			print = 0;
			break;
			}else{
				print = 1;
			}
		}
	}
	
	return 0;
}
