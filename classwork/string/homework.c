#include<stdio.h>
#include<string.h>
int compare(char *str1,char *str2,int n){
	int flag =1;
	int i=0;
  while(i < n ){
		if(str1[i] != str2[i]){
			flag =0;
			break;
		}
		i++;
	}return flag;
}

void  merge(char *str1,char *str2){
	int size1 =strlen(str1);
	int size2 =strlen(str2);
	int i=0;
	while(i < size2){
		str1[size1] = str2[i];
		size1++;
		i++;
	}
}

int main(){
	char str1[50];
	printf("Enter the string 1 ");
	scanf("%[^\n]",str1);
	getchar();
	char str2[50];
	printf("Enter the string 2 ");
	scanf("%[^\n]",str2);
		getchar();
	/*	
	printf("Enter the n character ");
	
	int i= 0,n;
	scanf("%d\n",&n);
	*/
	
	printf("Befor : %s\n",str1);
	merge(str1,str2);
	printf("After : %s\n",str1);
	/*if(compare(str1,str2,n)){
		printf("The given string is equal");
	}else{
		printf("The given string are not equal");
	}
	
	*/
	return 0;
}
