#include<stdio.h>
#include<string.h>
int main(){	
	char str[50];
	scanf("%[^\n]",str);
	char sub[50];
	getchar();
	
	scanf("%[^\n]",sub);
	getchar();
	
	printf("compared string %s\n",strstr(str,sub));
	int i=0,j=0,flag=0,val;
	char *ptr;
	while(str[i]!='\0'){
		if(str[i] == sub[j]){
		flag=1;
		j++;
		}else{
			flag =0;
			j=0;
		}
		if(flag==1 && sub[j] =='\0'){
			val = i-j+1;
			ptr = &str[val];
			break;
		}
		i++;
	}
	if(flag){
		printf("Founded string %s\n",ptr);
	}else{
		printf("not Founded string ");
	}
	
	
	
	
	
	
		
	}
