#if 0

#include<stdio.h>
int main(){
	int option;
	printf("Enter the option: ");
	scanf("%d",&option);

	switch (option){
		case 10:
			printf("You Enter the number is 10\n");
			break;
		case 20:
			printf("You Entered the nukber is 20\n");
			break;
		default:
			printf("Try again\n");
	}
	return 0;
}

#endif

#if 0
#include<stdio.h>
int main(){
	int option;
	printf("Enter the option: ");
	scanf("%d",&option);

	switch (option){
		case 10:
			printf("You Enter the number is 10\n");

		case 20:
			printf("You Entered the nukber is 20\n");

		default:
			printf("Try again\n");
	}
	return 0;
}


#endif

#if 0
#include<stdio.h>
int main(){
	int option;
	printf("Enter the option: ");
	scanf("%d",&option);

	switch (option){
		case 10 ... 20:
			printf("You Enter the number in between 10-20\n");
			break;

		case 21 ... 30:
			printf("You Entered the number in between 21-30\n");
			break;

		default:
			printf("Try again\n");
	}
	return 0;
}


#endif

#if 1
#include<stdio.h>
int main(){
	char option;
	printf("Enter the option: ");
	scanf("%c",&option);

	switch (option){
		case'A':
			printf("You Enter A\n");
			break;
		case'B':
                        printf("You Enter B\n");
                        break;
		case '@':
			printf("You Entered @\n");
			break;

		default:
			printf("Try again\n");
	}
	return 0;
}


#endif

