#include<stdio.h>
//
//bubble short
int bubbleshort(int *arr,int *size){
	int i,j,temp;
	for(i=0;i<*size-1;i++){
		for(j =0;j<*size-1-i;j++){
			if(arr[j] > arr[j+1]){	
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
}
}
 
 
// rotate array
//left rotation
int leftrotate(int *arr,int size){
	int i,temp;
	temp = arr[0];
	
	for(i = 0;i<size-1;i++){
	arr[i] = arr[i+1];
	
	}
	arr[size-1] = temp;
}
//right rotation
int rightrotate(int *arr,int size){
	int i,temp;
	temp = arr[size -1];
	for(i = size-1;i >= 0;i--){
	arr[i] = arr[i -1];
	}
arr[0] = temp;
}


// print arrar
void print(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("%d ",*(arr +i));
	}
	printf("\n");
}

//reversearray
/*
when the first is greater then last that time get out of the loop
f  < l
0    5
1    4
2    3 
3    2 // condition false get of loop 
4    1
5    0
*/  
int reversearray(int *arr,int size){
	int first = 0;
	int last = size-1;
	int temp;
	while(first < last){          
	    temp = arr[first];
	    arr[first] = arr[last];
	    arr[last] = temp;
	    first++;
	    last--;
	}
}

int isprime(int num){
	if(num <= 1)  return 0;
	if(num == 2) return 1;
	if(num % 2 == 0) return 0;
	for(int i = 3;i <= num / 2;i += 2){
		if(num % i == 0){
			return 0;
		}
	}return 1;
}


int main(){
	/*
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	*/
	//int num;
	//scanf("%d",&num);
	printf("\n before %d",num);
	//print(arr,size);
	//bubbleshort(arr,&size);
	//leftrotate(arr,size);
	//rightrotate(arr,size);
	//reversearray(arr,size);
	//(isprime(num)
	//print(arr,size);
	return 0;
	}









