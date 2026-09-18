#include<stdio.h>
#include<string.h>
int main(){
	char str[150];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	getchar();
	
	int i=0,j=0,k=0;
	char temp;
	printf("before the remove duplicate: %s\n",str);
	while(str[i] != '\0'){
	   j=0;
		while(str[j] !='\0'){
			if(str[i] == str[j] && i !=j){
				k = j;
				while(str[k] !='\0'){
					str[k]=str[k+1];
					k++;
				}
			}
			
			j++;
		}
		i++;
	}
	
	printf("after the remove duplicate: %s\n",str);
	return 0;
}
