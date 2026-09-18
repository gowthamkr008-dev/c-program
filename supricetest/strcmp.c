#include<stdio.h>
#include<string.h>
int main(){
	char string[40];
	printf("Enter the string1 : ");
	scanf("%[^\n]",string);
	getchar();
	char sub[40];
	printf("Enter the string2: ");
	scanf("%[^\n]",sub);
	
	printf("%d",strcmp(string,sub));
	int val=0;
	int i=0,flag=0;
	while(string[i] != '\0'){
		if(string[i] != sub[i]){
			val =string[i] - sub[i];
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("the given two string is equal");
	}else{
		printf("The given two string is not equal %d",val);
	}
	
	
	
	return 0;
	
}
