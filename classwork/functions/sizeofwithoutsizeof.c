#include<stdio.h>
int main(){
	int arr[2];
	int *ptr1;
	ptr1 = &arr[0];
	int *ptr2;
	ptr2 = &arr[1];
	
	printf("%ld\n",*ptr1);
	printf("%ld\n",*ptr2);
	printf("size of the integer %ld\n" ,(char *)ptr2 - (char *)ptr1 );
	return 0;

}
