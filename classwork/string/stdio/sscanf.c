#include<stdio.h>

#if 0

int main(){
	int age;
	char arr1[20];
	char arr2[20];
	sscanf("I am 30 years old","%s %s %d",arr1,arr2,&age);
	sscanf("I  am 30 years old","%*s %*s %d",&age);
	printf("ok you are %d years old\n",age);
	printf("Arr1 %s\narr2 %s\n",arr1,arr2);
	return 0;
}

/*
ok you are 30 years old
Arr1 I
arr2 am
*/
#endif

#if 1

int main(){
	int age;
	char arr1[20];
	char arr2[20];
	sscanf("hi I am 30 years old","%s %s %d",arr1,arr2,&age);
	printf("ok you are %d years old\n",age);
	printf("Arr1 %s\narr2 %s\n",arr1,arr2);
	return 0;
}
/*
ok you are 0 years old
Arr1 hi
arr2 I
*/
#endif
