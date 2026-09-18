#if 0

#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
        int v=1;
	int i;

	if(n>=0){
		printf("1  ");
		for(i = 1; i < n; i++){
			v *= 2;
			printf("%d ",v);
		}
	}else {
		printf("Enter valid input");
	}
	return 0;
}


#endif

#if 1

#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of Exponential value: ");
	scanf("%d",&n);
        int m;
	 printf("Enter the value of Base value: ");
        scanf("%d",&m);
	int v =1;
	int i;

	if(n>=0){
		printf("1  ");
		for(i = 1; i < n+1; i++){
			v *= m;
		printf("%d ",v);
		}
	}else {
		printf("Enter valid input");
	}
	return 0;
}


#endif
