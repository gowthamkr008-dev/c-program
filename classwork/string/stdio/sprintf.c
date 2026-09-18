#include<stdio.h>

#if 0

int main(){
	int num1 = 123;
	char ch = 'A';
	float num2  = 12.345;
	char str[] = "sprintf()test";
	char str2[100];
	printf("before store: %s\n",str2);
	sprintf(str2,"%d %c %f %s\n",num1,ch,num2,str);
	printf("after store: %s",str2);
	return 0;
}
#endif
