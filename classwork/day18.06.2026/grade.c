#include<stdio.h>

int main(){
	int num;
	printf("Enter the score: ");
	scanf("%d",&num);
	if(num>=90&&num<=100){
	       	printf("your greade is A\n");
	} else if(num>=80&&num<=89){
                printf("your greade is B\n");
        }else if(num>=70&&num<=79){
                printf("your greade is c\n");
        }else if(num>=60&&num<=69){
                printf("your greade is D\n");
        }else if(num<=60){
                printf("your grade is F\n") ;
        }else if(num>100){
		printf("your score is invalid\n");

	}
	
	return 0;
}

