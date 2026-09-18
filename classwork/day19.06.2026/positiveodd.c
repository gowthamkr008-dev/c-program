#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	if(num==0){
		printf("The number is zero");
	
	}else{
	if(num>0){

		if(num%2==0){

		printf("The number %d is poitive and even",num);
	} else {
		printf("The number %d is negative and odd",num);
	}
	}else{
		if(num%2==0){
		printf("the number %d is negative and even",num);
	}
		else{
		printf("The number %d is negative and odd",num);
		}
	}
	}
	return 0;
}
