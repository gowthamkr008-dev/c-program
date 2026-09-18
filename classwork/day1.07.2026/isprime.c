#include<stdio.h>

#if 1
int main(){
	int num,prime = 1;
	scanf("%d",&num);

	if(num <= 1){
		prime = 1;
	}else{
	for(int i= 2; i < num; i++){
		if(num % i == 0){
				prime = 0;
				break;
			}
		
	}
	}
	if(prime == 1)
		printf("the given number is prime");
	else
		printf("The given number is not a prime");
return 0;
}

#endif
