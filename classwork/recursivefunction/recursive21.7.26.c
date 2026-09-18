#include<stdio.h>
#if 0
int main(){
	static int self_call =0;
	
	if(self_call++ !=99){
	printf("main called %d\n,%d\n",self_call,num);
	main();
	}
	else{
		printf("\n");
	}
	return 0;
}

#endif
//both up ad down program same stack frame created the 100 times
#if 0

void print(int self_call){
	if(self_call++ != 99){
	printf("main called %d\n",self_call);
	print(self_call);
	}
	else{
		printf("\n");
	}
}

int main(){
	int self_call =0;
	print(self_call);
	return 0;
	
	}

#endif

#if 0

void print(int self_call){
	if(self_call++ != 5){
	printf("main called %d\n",self_call);
	print(self_call);
	}
	else{
		printf("\n");
	}
	printf("main called %d\n",self_call);

}

int main(){
	int self_call =0;
	print(self_call);
	return 0;
	
	}
/*
main called 1
main called 2
main called 3
main called 4
main called 5

main called 6
main called 5
main called 4
main called 3
main called 2
main called 1



*/
#endif


#if 0

int power(int x,int y){
	if(y ==0)
	return 1;
	else{
	return x *power(x,--y);
	}
	}
/*
statement appear after the return will not be executed.
*/

int main(){
	int x,y ,ret;
	scanf("%d%d",&x,&y);
	ret = power(x,y);
	printf("%d ^ %d = %d \n",x,y,ret);
	return 0;
	}
#endif


#if 0

void print(int self_call){
	if(self_call++ != 5){
	printf("main called %d\n",self_call);
	return print(self_call);
	}
	else{
		printf("\n");
	}
	printf("main called %d\n",self_call);
/*
statement appear after the return will not be executed.
*/
}

int main(){
	int self_call =0;
	print(self_call);
	return 0;
	
	}
	
/*
main called 1
main called 2
main called 3
main called 4
main called 5

main called 6
	*/
#endif


#if 1
void display(int arr[],int size){
	/*
	static int i = 0;
	if(i<size) {
	printf("%d ",arr[i]);
	i++;
	display(arr,size);
	}
	
	*/
	
	/*
	if(size>0){
		display(arr,size-1);
		printf("%d ",arr[size-1] );
	}
	*/
	
	//printf reverse order
	///*
	if(size > 0){
		
		printf("%d ",arr[size-1] );
		display(arr,size-1);
	}
	
	/*
	6
1 2 3 4 5 6

1 2 3 4 5 6
	*/
	//*/
	/*
	if(size<=0){
		printf("\n");
	}else{
		display(arr,size-1);
		printf("%d ",arr[size-1]);
	}
	*/
	/*
	6
1 2 3 4 5 6

1 2 3 4 5 6
	*/
}


int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	display(arr,size);
}
#endif























