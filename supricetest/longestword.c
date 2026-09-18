#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	int i=0,count=0,max=0;
	
	while(str[i] != '\0'){
		if(str[i] != ' '){
			count++;
		}
		if((str[i] == ' ') && count > max){
			max =count;
			count=0;
		}else if(str[i] == ' '){
			count =0;
		}
			i++;
	}
	if(count > max){
		max =count;
	}
	printf("longest word in the string %d",max);
	
	return 0;
}
