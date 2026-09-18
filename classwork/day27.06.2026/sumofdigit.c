#include<stdio.h>
int main(){
	int num,res,sum;
	scanf("%d",&num);
	res = 0;
	sum = 0;
	do{
	res = num % 10;
	sum = sum + res;
	num = num / 10;

	}while(num > 0);
	printf("sum of digits %d",sum);
	return 0;
}


		/*
		 * Sum of Digits
Input: 567 → Output: 5+6+7 = 18
*/
