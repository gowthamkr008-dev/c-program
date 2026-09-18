#include<stdio.h>


int main(){
	int num;
	scanf("%d",&num);

	if(num>0){

		int copy = num ;
		int result ,d = 1,add = 0;
		 
	do{
	  result = num % 10;//get last one digit
	  for(int i= result; i>1;i--){
		  d= i-1;
		  result = result * d;
	  }
	  add += result;


	 num = num / 10;//remove last digit
	}while(num > 0 );	
	

	if(copy == add){
	
		printf("You entered number is strong");
	}else{
	
		printf("You entered number is not strong");
	}
	}else{
	
		printf("Enter the positive integer only");
	}
	return 0;
}
