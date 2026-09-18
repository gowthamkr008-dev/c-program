#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of 'n' : ");
	scanf("%d",&n);
	int day;
	printf("Choose First Day :\n" "1. Sunday\n""2. Monday\n" "3. Tuesday\n" "4. Wednesday\n" "5. Thursday\n" "6. Friday\n""7. Saturday\n"" Enter the option to set the first day : ");
	scanf("%d",&day);

	if(day>0 && day<8){
		if(n>0 && n<366){
		printf("the value b/w 1 to 7 and in b/w 0 to 365");
		}else{
		
		printf("the value is not b/w 0 to 365");
		}
	}else{
		printf("The value of not b/w 0 to 7");
	}
}

