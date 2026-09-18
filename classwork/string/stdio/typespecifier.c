#include<stdio.h>
#include<string.h>
int main(){
	int num =166;
	printf("unsigned integer hexadecimal : %hx\n",0xffffffff);
	printf("long int hexa %llx \n", 0xFFFFFFFFFFFFFFFFFFFFFFFl);
	printf("long long int hexa : %llX\n", 0xFFFFFFFFFFFFFFFFull);
	printf("long double : %lf\n",1.23456789);
	
	return 0;
	}
	/*
	unsigned integer hexadecimal : ffff
long int hexa ffffffffffffffff
long long int hexa : FFFFFFFFFFFFFFFF
long double : 1.234568
	*/
