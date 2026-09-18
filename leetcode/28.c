#include<stdio.h>
#include<string.h>
int main(){
	char string[20];
	char sub[10];
	
	printf("Enter the main string: ");
	
	scanf("%[^\n]",string);
	printf("Enter the sub string: ");
	getchar();
	scanf("%[^\n]",sub);
	int j=0,i=0,flag,ret;
	while(string[i] !='\0'){
		if(string[i] == sub[j]){
		 flag=1;
			j++;	
		}
		else{
			j=0;
			flag=0;
		}
		if (sub[j] == '\0'){
			ret = i-j+1;
			break;
		}
		i++;
	}
	
	if(flag){
	  printf("substring found %d",ret);
	}else{
		printf("substring not found -1");
	}
		return 0;
}
