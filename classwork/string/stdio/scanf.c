#include<stdio.h>
#if 0
int main(){
	int num1;
	int ret;
	char ch;
	float num2;
	char str[20];
	ret = scanf("%d %c %f %s", &num1, &ch, &num2, str);
	printf("%d %c %f %s",num1,ch,num2,str);
	printf("return : %d",ret);
	return 0;
}
/*
123
a
12.123
gowtham
123 a 12.123000 gowthamreturn : 4
*/
#endif

#if 0
int main(){
	int h ,m,s;
	scanf("%d%*c%d%*c%d",&h,&m,&s);
	printf("%d:%d:%d",h, m, s);
	
	return 0;
	
}

#endif

#if 0
read only char
int main(){
	char name[30];
	scanf("%[a-z A-Z]",name);
	printf("Name : %s\n",name);
	
	return 0;
}
/*
./a.out
not taking any i/p from user
1234asd
Name :

./a.out
taking proper i/p
asdf12
Name : asdf

*/
#endif


#if 0
//read only digits
int main(){
	char id[30];
	scanf("%[0-9]",id);
	printf("Name : %s\n",id);
	
	return 0;
}

/*
accepted
123asd
Name : 123

not accepted

asd123
Name :
*/
#endif

#if 0

int main(){
	int num =100,ret;
	printf("The enter a number [is 100 now] : ");
	ret = scanf("%d",&num);
	printf("Ret : %d\n",ret);
	if(ret !=1){
		printf("Invalid input %d\n",num);
	}else {
		printf("modify value %d\n",num);
	}
	return 0;
}
/*
The enter a number [is 100 now]
asdfg
Ret : 0
Invalid input 100


The enter a number [is 100 now]
123
Ret : 1
modify value 123
*/


#endif

#if 1



#endif

#if 1



#endif

#if 1



#endif

#if 1



#endif

#if 1



#endif

#if 1



#endif

#if 1



#endif

#if 1



#endif
















