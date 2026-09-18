#include<stdio.h>
int main(){
	char str[50];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	int i=0,count =0,max=0;
	for(i=0;i<strlen(str);i++){
		for(j=0;j<strlen(str);j++){
			if(str[i] != str[j]){
				count++
			}
		}
	}
	printf("count of longest substring is %d",max);
	
	return 0;	
}
