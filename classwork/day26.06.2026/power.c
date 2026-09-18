#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the value of x and y");
	scanf("%d%d",&x,&y);
	int result=1;

	for(int i=1;i<y;i++){

		printf("%d ",result);
		result *= x;
	}
	return 0;
}
