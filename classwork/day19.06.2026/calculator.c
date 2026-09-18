#include<stdio.h>
int main(){
	int num1,num2;
	char operator;
        printf("Enter 2 number:\n ");
	scanf("%d %d",&num1,&num2);
	 getchar;

	printf("select operator + - * / %:\n ");
         getchar;
	scanf(" %c", &operator);

	switch (operator)
	{
		case '+':
			int sum = num1+num2;
			printf("Addition:%d ",sum);
			break;
		case '-':
			int sub=num1-num2;
			printf("subtraction:%d",sub);
			break;
		case '*':
			int mul = num1*num2;
			printf("multiplication:%d",mul);
			break;
		case '/':
			int div =num1/num2;
			printf("division:%d",div);
			break;
		case '%':
			int mod =num1%num2;
			printf("Modulus of: %d",mod);
			break;
		default:
			printf("invalid operator");
	}
	return 0;
}


