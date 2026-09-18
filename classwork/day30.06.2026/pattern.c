#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);

	if(num>0){
	
		for(int i = num;i >= 1;i--){
			for(int j = 1;j <= i;j++){
				printf("%d ",j);
			}
		printf("\n");
	}
	}
	return 0;
}
