#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	scanf("%[^\n]",str);
	char ch;
	int i=0,j=0,flag=0;;
	for(i=0;i<strlen(str);i++){
		for(j=0;j<strlen(str);j++){
			if(j != i && str[i] == str[j]){
			flag=0;
			break;				
			}else{
				flag=1;
				ch =str[i];
			}
		}
		if(flag) break;
	}
	if(flag){
		printf("founded string of first occurance %c",ch);
	}
	return 0;
}
