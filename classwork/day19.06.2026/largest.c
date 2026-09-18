#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter three number: ");
	scanf("  %d   %d   %d",&num1,&num2,&num3);

	if(num1>num2){
		if(num1>num3){
			printf("Largest is %d",num1);
		}else{
		printf("Largest is %d",num3);
		}
	}
	else if(num2>num1){
		if(num2>num3){
			printf("largest is %d",num2);
		}else{
			printf("Largest is %d",num3);
		}
	}
	return 0;
}
