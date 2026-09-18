#include<stdio.h>
#include<string.h>


#if 0
int main(){
	char str[30];
	scanf("%[^\n]",str);
	printf("string : %s\n",str);
	int len =0;
	for(int i=0;i< 30;i++){
		if(str[i] == '\0'){
		   break;
		}else{
			len++;
		}
	}
	printf("Length of the string %d\n",len);
	return 0;
}
#endif

#if 0
int main(){
	char str1[30];
	scanf("%[^\n]",str1);
	getchar();
	char str2[30];
	scanf("%[^\n]",str2);
	int equal =0;
	int i=0;
	
	while(str1[i] != '\0'){
		if(str1[i] !=str2[i]){
		 equal =1;
		 break;
		}
		i++;
	}
	if(equal == 1){
		printf("not equal");
	}else{
	 	printf("equal");
	}
	

}

#endif



#if 0
//copy string 
int main(){
	char str1[30];
	scanf("%[^\n]",str1);
	char cpstr[30];
	int i = 0;
	while(str1[i] !='\0'){
	 	cpstr[i] = str1[i];
	 	i++;
	}
	i = 0;
	printf("%s",cpstr);
	return 0;
}
#endif


#if 0
int main(){
	char str1[60];
	scanf("%[^\n]",str1);
	
	int flag =0,left =0,right = strlen(str1)-1;
	
	while(left<right){
	 if(str1[left] == str1[right]){
	      flag = 1;  
	 }left++;
	      right--;
		
	}
	
	if(flag ==1){
		printf("the given string is palendrome");
	}else{
		printf("the given string is not a palendrome");
	}
	
	return 0;
	
}

#endif


#if 1
int main(){
	char str1[60];
	scanf("%[^\n] ",str1);
	//getchar();
	
	char str2[60];
	scanf("%[^\n]",str2);
	int i=0,flag=0;
	while(str1[i]!='\0'){
	  if(str1[i] == str2[i]){
	  		flag = 1;
	  }i++;
	}
	if(flag == 1){
		printf("the 2 strings are equal\n");
	}else{
	 printf("the given 2 string are not equal\n");
	}
	
}


#endif
















