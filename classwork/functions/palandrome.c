#include<stdio.h>
int isvalid(int num){

	if(num>100 && num <100000){
		return 1;
	}else
		return 0;
}


int ispalandrome(int num){

	int copy = num;
	int result = 0;
	int i=0;	
	do{
	 result= num % 10;
	 num = num / 10;
	i =  (i * 10) + result;
	}while(num > 0);

	if( copy == i){
		return 1;
	}else{
		return 0;
	}
}


int main(){
	int num;
	scanf("%d",&num);
	getchar;
	if( isvalid(num) == 1){
		if(ispalandrome(num) == 1){
			printf("The given number is palandrome");
		}else{
			printf("The given number is not palandrome");
		}

	}
	else{
		printf("Not valid");
	}
	return 0;
}
