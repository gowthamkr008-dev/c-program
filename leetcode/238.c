#include<stdio.h>
int main(){
	int size;
	scanf("%d",&size);
	int arr[size] ;
	int narr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int mul=1,i,j;
	for(i=0;i<size;i++){
		for( j=0;j<size;j++){
		if(i != j){
			mul *=arr[j];
		}
		}
			narr[i] =mul;
			mul=1;
		}
		for(int i=0;i<size;i++){
		printf("%d ",narr[i]);
	}
	}
