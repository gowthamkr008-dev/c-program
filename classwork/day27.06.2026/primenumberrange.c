/*prime Numbers in Range
Input: 10, 30 → Output: 11 13 17 19 23 29
Hint: Rendu loop. Outer loop range ku, inner loop prime check ku.

*/

#include<stdio.h>
int main(){
	int num1 ,num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	int prime =1;

	for(int i = num1; i < num2; i++){
		if(i ==2 || i ==3){
		prime = 1;
		}
		else if( i % 2 == 0 || i % 3 ==0)
		prime = 0;
		
		if(prime ==1)
		printf("%d ",i);

		prime = 1;
	}
}

