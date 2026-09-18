#include<stdio.h>
#include<string.h>
int main(){
	char str[40];
	scanf("%[^\n]",str);
	int i = 0;
	getchar();
	printf("%s\n",str);
	while(str[i] != '\0'){
		if(str[i] == ' '){
		 if(str[i+1] == ' '){
		   int j = i;
		   while(str[j] !='\0'){
		   	str[j] = str[j+1];
		   	j++;
		   }
		   i--;
		 }
		}
		i++;
	}
	printf("%s\n",str);
	return 0;
}
