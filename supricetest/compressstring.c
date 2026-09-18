#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
	char comp[30];
	
	printf("Enter the string to comperss");
	scanf("%[^\n]",str);
	char ch = str[0];
	int i=0,j=0,count=0;
	while(str[i]!='\0'){
		
		if(ch == str[i]){
		count++;
		}
		if(count > 0 && str[i]!= str[i+1]){
			comp[j++] = str[i];
			comp[j]=count+48q;
			j++;
			count=0;
		}		
		i++;
		ch =str[i];
	}
	comp[j] = '\0';
	
	printf("%s",comp);
	
	return 0;
	}
	
	
	
