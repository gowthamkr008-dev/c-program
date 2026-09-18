#include<stdio.h>

#if 0
//factorial number
int factorial(int num){
	if(num <= 1){
		return 1;
	}else{
		/*1*/return num *factorial(num -1);
	}
}
int main(){
	int ret;
	ret = factorial(3);
	printf("factorial number of 3 is : %d\n",ret);
	return 0;
}
//1 return num *factorial(num -1);
//factorial number of 3 is : 6
//1 return num *factorial(num);
//Segmentation fault (core dumped)
#endif


#if 0
//sum of n natural number 
int sum(int num){
	if(num <= 1){
		return 1;
	}else{
		/*1*/return num + sum(num -1);
	}
}
int main(){
	int ret ,num;
	scanf("%d",&num);
	ret = sum(num);
	printf("sum of  : %d\n",ret);
	return 0;
}
#endif



#if 0
//x^y 
int powerof(int x,int y){
	if(y <=0){
		return 1;
	}else{
		/*1*/return x * powerof(x,y-1);
	}
}
int main(){
	int ret ,num1,num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	ret = powerof(num1,num2);
	printf("sum of : %d\n",ret);
	return 0;%d%d
}
/*

2
8
sum of : 256
*/

#endif



#if 1
//sum of digit
int sum_of(int num){
	if(num == 0){
		return 0;
	}else{
		return num % 10 + sum_of(num / 10);
	}
}
int main(){
	int ret ,num1,num2;
	scanf("%d",&num1);
	//scanf("%d",&num2);
	ret = sum_of(num1);
	printf("sum of : %d\n",ret);
	return 0;
}
/*

2
8
sum of : 256
*/

#endif



