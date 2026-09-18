#include<stdio.h>
int main(){

	int num,prime =1;
	scanf("%d",&num);
	if(num ==0){
	printf("The given number is not prime");
	}else {
	
		if(num == 1|| num ==2){
		
			prime =1;
		
		}
	}
		for(int i = 3; i <=num ;i++){
			if(num % i == 0){
				prime = 0;
				break;
			}else
				prime =1;
	}
		if(prime == 1)
		printf("the given number is prime\n");
		else
		printf("The given number is not a prime\n");	
	return 0;

}
