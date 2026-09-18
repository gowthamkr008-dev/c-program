#include<stdio.h>
#include<string.h>
int main(){
	char str[40];
	printf("Enter the string ");
	scanf("%[^\n]",str);
	
	int flag = 0,left =0,right = strlen(str)-1;
	while(left < right){
		if(str[left] != str[right]){
			flag = 1;
			break;
		}
		left++;
		right--;
	}
	if(flag){
		printf("The given string is not a palandrome\n");
	}else{
		printf("The given string is a palandrome\n");
	}
	
	
	
	
	return 0;
}
