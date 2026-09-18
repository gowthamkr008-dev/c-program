#include<stdio.h>
int main(){
	int num1;
	int num2;
	int num3;

	printf("enter the 3 number : \n");

	scanf("%d %d %d" ,&num1 ,&num2,&num3);
	float average;
	average =(num1+num2+num3)/3.0;   //if all int the o/p is the int change the explicite
	printf("average %f\n",average);
	return 0;
}
		

