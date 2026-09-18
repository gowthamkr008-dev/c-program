#include<stdio.h>

int isvalid(int num){
	return num > 1 ? 1 : 0;
}

int main(){
	int num ;
	printf("Enter a number");
	scanf("%d",&num);
	if(isvalid(num)){
		int prime =1,i,j;

		for( j =2;j<num;j++){
		for(i =2;i< j;i++){
		   num % i ==0 ? prime = 0 : prime;
		   break;

		}
		prime == 1 ? printf("%d ",j): printf(" ");
		}
	}else{
		printf("Invalid number");
	}
return 0;
}
