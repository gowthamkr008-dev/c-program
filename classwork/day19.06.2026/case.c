#include<stdio.h>
int main(){
	char option;
		printf("Enter the option: ");
	scanf("%c",&option);

	switch(option){
		case 'A'... 'Z':
			printf("UPPER CASE");
			break;
		case 'a' ... 'z':
			printf("lower case");
			break;
		case '0' ... '9':
			printf("Digits");
			break;
		default:
			printf("None");
	}
	return 0;
}
