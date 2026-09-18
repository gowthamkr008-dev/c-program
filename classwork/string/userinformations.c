#include<stdio.h>
#include<string.h>

int main(){
	char name[500];
	char age[50];
	char id[50];
	unsigned long int num;
	unsigned long int number[10];	
	
	
	printf("Enter your informations \n");
	printf("Enter the name : ");
	scanf("%[^\n]",name);
	getchar();
	printf("Enter the age : ");
	scanf("%[^\n]",age);
	getchar();
	printf("Enter the ID : ");
	scanf("%[^\n]",id);
	getchar();
	printf("Enter the number : ");
	scanf("%lu",&num);
	getchar();
	int i=0;
			//	9487685074            9487685074
	if(num > 999999999 && num  < 10000000000){
	     number[i] = num;
	     i++;	     
	}
	printf("name : %s\nage : %s\nid : %s\nnumber : %lu\n",name,age,id,number[0]);
	return 0;
	}
