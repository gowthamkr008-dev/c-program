#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	getchar;
	long long int result =num;
	int d = 1;

	if(num >=0){
	for(int i = num; i > 1; i--){
	
		d = i - 1;
		result = result * d;
	}
	printf("the given factorial number is %lld",result);
	}
	else 
		printf("Enter a positive integer");
	return 0;
}

