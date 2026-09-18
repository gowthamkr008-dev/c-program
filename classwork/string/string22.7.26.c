#include<stdio.h>


#if 1
//string manipulations

int main(){
	char str1[6] =  "Hello";
	char str2[6];
	
	// str2 = " hello";  compile error
	
	char *str3 = "HELLO";
	char *str4;
	str4 ="world";
	
	str1[0] ='h';
	
	//str3[0] = 'w';
	
	
	printf("%s\n",str1);
	printf("%s\n",str3);
}




#endif



#if 0
int main(){
	char arr[5] = {'h','e','l','l','o'};
	printf("%s\n",arr);
	
	char str1[6] = {'h','e','l','l','o','\0'};
	printf("%s\n",str1);
	
	char str2[] = { 'h','e','l','l','o','\0'};
	printf("%s\n",str2);
	
	//char str3[6][2] = {"h","e","l","l","o"};
	//printf("%s\n",str3);
	
	char str4[6]= {"h""e""l""l""o"};
	printf("%s\n",str4);
	
	char str5[6] = {"HELLO"};
	printf("%s\n",str5);
	
	char str6[6]="hello";
	printf("%s\n",str6);
	
	char str7[] = "hello";
	printf("%s\n",str7);
	
	char *str = "HELLO";
	printf("%s\n",str);
	
	return 0;
	
	
}
/*
hello
hello
hello
hello
HELLO
hello
hello
HELLO
*/
#endif

#if 0
int main(){
	char arrof1[5] = {'h','e','l','l','o'};
	char arrof2[] = "HELLO";
	
	printf("%zu\n",sizeof(arrof1));..//5
	printf("%zu\n",sizeof(arrof2)); //6
	
	char *str ="HELLO";
	printf("%zu\n",sizeof(str));//8 pointer size
	return 0;
}
/*
5 
6 
8
*/



#endif

#if 0

int main(){
	if (sizeof ("HELLO" "WORLD") == sizeof("HELLO") + sizeof("WORLD")){
			//	11							6		+	6	=12
			//11      ==     12 false
		
		
		printf("if block run\n");
		
	}else{
		printf("Else block\n");
	}
	printf("%zu\n",sizeof("HELLO""WORLD")); // 11
	printf("%zu\n",sizeof("HELLO")+sizeof("WORLD"));// 12
	return 0;
}
/*
Else block
11
12
*/


#endif



































