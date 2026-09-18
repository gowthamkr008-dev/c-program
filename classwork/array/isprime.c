//WAP to print N prime numbers.

#include<stdio.h>
int main(){
	int limit;
	scanf("%d",&limit);
	
	int prime=1;//set the flag
	if(limit >0){
	for(int i=2;i<=limit; i++){
		prime = 1 ;
		for(int j=2;j<=i/2;j++){
		if(i % j == 0){
		prime =0;
		break;
		}
	}
	if(prime ==1){
	printf("%d ",i);
}
}
}
return 0;
}
