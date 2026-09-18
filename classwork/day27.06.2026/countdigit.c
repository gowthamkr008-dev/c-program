#include<stdio.h>
/*
Input: 90876 → Output: 5 digits
Hint: Evlo thadava /10 panna 0 varuthu nu count pannu.

*/


int main(){
        int num;
	int result,count;

	scanf("%d",&num);

	result = 1;
	count = 0;
	do{
		result = num % 10;
		count += 1;
		num = num / 10;
	}
	while(num != 0);
	printf("number of count %d",count);
	return 0;
}
