#include<stdio.h>
void display_number(int num){
	if(num<=0) return ;
	else{
	printf("%d ",num);
	 display_number(num - 1);
	}

}
void display_num(int num){
	if(num<=0) return ;
	else{
	printf("%d ",num);
	display_num(num - 1);
	}

}
void binary(int num){
	if(num == 0) ;
	else {
	 binary(num / 2);
	printf("%d ",num % 2);
		
	}
}
int main(){
	int num ;
	printf("Enter the number");
	scanf("%d",&num);
	//display_number(100);
	printf("\n");
	display_num(1);
	printf("Print binary number : ");
	binary(num);
	printf("\n");
	printf("%d,%d ",num /2,num%2);
	return 0;
	
}
