#include<stdio.h>
#include<string.h>
#if 0
//with use of the local variable 

void my_strcpy(char *dest,const char *str){
	int i=0;
	while(str[i] != '\0'){
	 dest[i] = str[i];
	 i++;
	}
	dest[i]='\0';
	
}


int main(){
	char str[30],dest[30];
	printf("Enter teh String : ");
	scanf("%[^\n]", str);
	 my_strcpy(dest , str);
	 printf("dest String : %s\n",dest);
	 return 0;
}



#endif


#if 0
//without i value using pointer
void my_strcpy(char *dest,const char *str){
	//int i=0;
	while( *str!= '\0'){
	 *dest = *str;
	 dest++;
	 str++;
	}
	*dest='\0';
	
}


int main(){
	char str[30],dest[30];
	printf("Enter teh String : ");
	scanf("%[^\n]", str);
	 my_strcpy(dest , str);
	 printf("dest String : %s\n",dest);
	 return 0;
}
#endif


#if 0
//increment the the same line to copy the data
//without extra increment do it in the during assigning
void my_strcpy(char *dest,const char *str){
	//int i=0;
	while( *str!= '\0'){
	 *dest++ = *str++;
	
	}
	*dest='\0';
	
}


int main(){
	char str[30],dest[30];
	printf("Enter teh String : ");
	scanf("%[^\n]", str);
	 my_strcpy(dest , str);
	 printf("dest String : %s\n",dest);
	 return 0;
}
#endif

#if 0
void my_strcpy(char *dest,const char *str){
	//int i=0;
	while( *dest++ = *str++);
}


int main(){
	char str[30],dest[30];
	printf("Enter teh String : ");
	scanf("%[^\n]", str);
	 my_strcpy(dest , str);
	 printf("dest String : %s\n",dest);
	 return 0;
}

#endif



#if 0
//merge the 2 string use own code without library function
void my_strcat(char *dest,const char *str){
	dest =dest + strlen(dest);
	while( *dest++ = *str++);
}
int main(){
	char str[30],dest[50];
	printf("Enter the src string "); 
	scanf("%[^\n]", str);
	printf("Enter the dest string "); 
	scanf(" %[^\n]", dest);
	my_strcat(dest , str);
	printf("dest String : %s\n",dest);
	return 0;
	
}


#endif


#if 0
//compare string 
int  my_strcmp(const char *str2 ,const char *str1){
		int i=0;
		while(str1[i] == '\0' || str2[i] == '\0'){
			if(str1[i] != str2[i]){
				return str1[i] - str2[i];
			}
			i++;
		}if(str1[i] == '\0' && str2[i]== '\0')
				return 0;
		return str1[i] -str2[i];
}
#endif
#if 0
//reducing line
int  my_strcmp(const char *str2 ,const char *str1){
		int i=0;
		while(str1[i] && str2[i] && str1[i] ==str2[i]){
		i++;
		}
		return str1[i] -str2[i];
}
#endif
#if 1
//using pointer
int  my_strcmp(const char *str2 ,const char *str1){
		
		while(*str1 && str2 && str1 ==str2){
			str1++;
			str2++;
		}
		return *str1 - *str2;
}
#endif
#if 1
int main(){
	char str1[30],str2[50];
	printf("Enter the string 1 "); 
	scanf("%[^\n]", str1);
	printf("Enter the string 2 "); 
	scanf(" %[^\n]", str2);
	int flag;
	flag =	my_strcmp(str2 , str1);
	if(flag == 0){
		printf("String is same %d",flag);
	}else{
	 	printf("String is different %d",flag);
	}
	return 0;
	
}




#endif


#if 0
void my_strrev(char *str){
	char temp;
	int first =0,last = strlen(str)-1;
	while(first < last){
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		first++;
		last--;
	}
}
#endif

#if 0

//using pointer
void my_strrev(char *str){
	char temp;
	char *ptr = str+strlen(str)-1;
	//int first =0,last = strlen(str)-1;
	while(str < ptr){
		temp = *str;
		*str = *ptr;
		*ptr = temp;
		str++;
		ptr--;
	}
}
#endif


#if 0
void my_strrev(char *str,int first,int last){
	char temp;
	//char *ptr = str+strlen(str)-1;
	//int first =0,last = strlen(str)-1;
	if(first < last){
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		my_strrev(str,first+1,last-1);
		//my_strrev(str,first+1,last-1);  using this stack over flow
	}
}

#endif
#if 0
void my_strrev(char *str,int first,int last){
	char temp;
	//char *ptr = str+strlen(str)-1;
	//int first =0,last = strlen(str)-1;
	if(first < last){
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		my_strrev(str,++first,--last);
	}
}
#endif
#if 0

void my_strrev(char *str,char *ptr){
	char temp;
	//char *ptr = ;
	//int first =0,last = strlen(str)-1;
	if(str < ptr){
		temp = *str;
		*str = *ptr;
		*ptr = temp;
		my_strrev(str+1 ,ptr-1);
}
}
#endif

#if 0



int main(){
	char str[30],str2[50];
	printf("Enter the string 1 "); 
	scanf("%[^\n]", str);
	//printf("Enter the string 2 "); 
	//scanf(" %[^\n]", str2);
	//int flag;
   	//my_strrev(str);
	my_strrev(str ,str+strlen(str)-1);
	printf("string :  %s",str);

	return 0;
	
}


#endif


#if 1


#endif


