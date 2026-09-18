#include<stdio.h>
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);

	if(num>=0){
	
		int add = 0;
		for(int i=1; i<=num;i++){
		
			if(num % i ==0){
				add += i;
				if(add == num || add / 2 == num){
					printf("Yes,entered number is perfect");
				break;
				}else if(num==i){
				printf("No,Entered number is not perfect");
				}

		}
	}
	}
	else{
		printf("Invalid input Enter only positive number only");
	}

	return 0;
}
