#include<stdio.h>

#if 0
//when i decleare the global or static stored in the data segment
//when i enter the without static or globali store to the complie time memory allocation	 
int main(){
	int arr[30] ={1,2,3,4,5} ;//runt ime memory allocations
	return 0;
}
//d insilised data segment
//b uninitialized data segment

//D insilised global data segment
//B uninitialized global data segment

#endif


#if 1
int main(){
	register int x=20;
	x =30;
	x=40;
	x=50;
	return 0;
}

#endif
