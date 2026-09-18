#include<stdio.h>
int main(){
	int grade;
	printf("Enter a score: ");
	scanf("%d",&grade);
	switch (grade)
	{
		case 91 ... 100:
			printf("A-grade");
			break;
		case 81 ... 90:
			printf("B-Grade");
			break;
		case 71 ... 80:
			printf("C-grade");
			break;
		case 61 ... 70:
			printf("d-grade");
			break;
		default:
			printf("none");
	}return 0;
}

