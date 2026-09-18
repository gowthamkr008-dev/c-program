#if 0



#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);

	int num,lar =0;
	for(int i = 1; i <= n; i++){
		printf("Enter the value of num%d",i);

		scanf("%d",&num);
	if(num >lar){
		lar =num;
	}
	}
	printf("The largest number is %d",lar);
	return 0;
	}

#endif

#if 0
//given number is prime or not

#include<stdio.h>
int main(){
	int num, prime =1;
	scanf("%d",&num);
	if(num<=1)
		prime =0;
	else
		for(int i = 2;i <= num; i++){
			if (num % 2 == 0){
				prime =0;
				break;
			}
		}
	if(prime ==1)
		printf("The given number is prime");
	else
		printf("the given number is not a prime");

	return 0;
}

#endif



