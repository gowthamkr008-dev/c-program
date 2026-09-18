#include<stdio.h>
//remove duplicate more then appears in 2 times

int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
	int count=0;
	for(int j = 0;j < size;j++){
			if(arr[i] == arr[j]){
			   count++;
			 if(count > 2) {
			  for(int a =j-1;a < size;a++){
			    arr[a] = arr[a+1];
			   }
			   j--;
			  size--;
			  count =0;
			  }
			}	
			}
	}
	for(int m = 0;m < size;m++){
		printf("%d ",arr[m]);
	}
	return 0;
}

