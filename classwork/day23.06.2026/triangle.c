#include<stdio.h>
int main(){
	int max;
	printf("Enter the maximum line: ");
	scanf("%d",&max);

	int a=1;
	for(int i=1; i <= max;i++){
		for(int j=1;j<=i;j++){
			printf("*");
			a++;
		}
		printf("\n");
	}
	return 0;
}
