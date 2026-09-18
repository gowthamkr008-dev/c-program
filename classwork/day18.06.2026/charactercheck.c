#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);


	if(ch>='A' && ch<='Z'){
		printf("A is upper case ");
	}
	else if(ch>='0'&& ch<='9' ){
		printf("a is a number");
	}else{
		printf("this is not alphabet or digit");
	}
	return 0;
}
