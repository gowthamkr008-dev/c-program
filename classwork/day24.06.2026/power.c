#if 1

#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the power value of x and y: ");
	scanf("%d%d",&x,&y);
	int result =1;
	for(int i=1; i<=y;i++){
		result *= x;
		printf("%d\n",result);
	}
	return 0;
}

#endif
