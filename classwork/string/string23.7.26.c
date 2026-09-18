#include<stdio.h>
#include<string.h>
#if 0
int main(){
	char *str1 = "hello";
	char *str2 = "hello";
	
	if(str1 == str2){
		printf("the sharable segment\n");
	} 
	else{
		printf("this is not sharable segment");
	}
	return 0;
}

//the sharable segment

#endif

#if 0
int main(){
	char str1[] = "hello";
	char str2[] = "hello";
	
	if(str1 == str2){
		printf("the sharable segment\n");
	} 
	else{
		printf("this is not sharable segment\n");
	}
	return 0;
}

#endif

#if 0
int main(){
	char *str ="gowtham";
	int ret;
	ret = strlen(str);
	printf("Len : %d\n",ret);
	return 0;
}
#endif


#if 0
void print(const char *str){
	while(*str){
		putchar(*str++);
	}
}

int main(){
	char *str ="hello worlds";
	print(str);
	return 0;
}


#endif


#if 0
void print( char *str){
	str[2] ='t';	
}
int main(){
	char *str ="hello worlds";
	print(str);
	return 0;
}

//it leads to segmentation fult
//the cahracter string get to the code segment 
//it will be red only
//it will not modifable
//able to modify lead to rut time error
#endif



#if 0
void print(const char *str){
	while(*str){
		putchar(*str++);
	}
}

int main(){
	char *str ="hello world";
	print(str +3);
	return 0;
}
//base address of the str and add the number
//1000+3
//1003 give it to the functions
//lo world
#endif





































