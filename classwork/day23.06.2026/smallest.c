#include<stdio.h>
int main(){
	int num1,num2,num3;
	scanf("%d%d%d",&num1,&num2,&num3);
	//num1 is small
	if(num1<num2){
		if(num1<num3)
		{
			printf("num1 is smallest %d",num1);
		}
		else{
			printf("Num3 is smallest %d",num3);
		}
	}
	else if(num2<num1){
		if(num2<num3){
			printf("num2 is ismallest %d",num2);
	}
	else{
		printf("Num3 is smallest %d",num3);
	}
	}
	else{
		printf("num3 is smallest %d",num3);
	}
	return 0;
}

