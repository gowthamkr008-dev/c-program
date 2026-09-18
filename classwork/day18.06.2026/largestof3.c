#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Enter three number: ");
	scanf("%d %d %d" ,&num1,&num2,&num3);
	if(num1>num2 && num1>num2){
		printf("largest is %d",num1);
	}else if(num2>num1 && num2>num3){
		printf("largest is %d",num2);
	}else{
		printf("largest is %d",num3);
	}
//	printf("%d %d %d",num1, num2, num3);
	return 0;
}
