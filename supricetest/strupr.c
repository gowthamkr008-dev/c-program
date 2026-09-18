#include<stdio.h>
int main(){
	char str[50];
	scanf("%[^\n]",str);
	int i=0,val;
	printf("before case convertion : %s",str);
	while(str[i]!='\0'){
		val = str[i] -'a';
		str[i] = 'A' + val;
		i++;
	}
	printf("after case convertion : %s",str);
	
}
