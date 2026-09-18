#include<stdio.h>
int main(){
	int num1;
        int num2;
	
	printf("enter the 2 number : \n");
	
	scanf("%d ",&num1 );
	scanf("%d", &num2);

        
	printf("num1: %d,num2: %d \n",num1 ,num2);
	
	int temp;
	temp =num1;
	num1 =num2;
	num2 =temp;

        printf("num1: %d ,num2: %d\n",num1,num2);
	 return 0;
}


