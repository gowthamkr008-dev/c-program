
#if 0
/*
 Oru number vaangi, athoda digits ah kooti sollu.
 */
int main(){
	signed long int num;
	scanf("%ld",&num);
	long int result = 0;
	long int copy = num;
	if(num<0){
		num = -num;
		copy = num;
	}
	do{
		num = num % 10;
		result += num;
	       	copy = copy	/ 10;
		num = copy;
	}while(num>0);

	printf("%ld",result);
return 0;
}


#endif

#if 1
#include<stdio.h>
int main(){
	int num;
	
	scanf("%d",&num);

	getchar;
	
	int result = 0;
	int copy = num;
	int org = num;//1456
	do{
		num = num % 10;    //l1 = 6
		copy = copy / 10;//l1 1
			   result = (result*10)+num;
			   num = copy;
	}while(org>0);

	if(org == result)
		printf("The given number is palandrome");
	else
		printf("The given number is not a palandrome");
	return 0;
}
#endif

