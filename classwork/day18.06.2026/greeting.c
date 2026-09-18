#include<stdio.h>
int main(){

	int  hour;
	printf("Enter the hour(0-23): ");
	scanf("%d",&hour);
	if(hour>=24){
		printf("Invalid hour!");
	}else if(hour>=5&& hour<=11){
		printf("good morning!");
	}else if(hour>=12&& hour<=15){
		printf("Good afternoon!");
	}
	else if(hour>=16&&hour<=21){
		printf("good evening! ");
	}
	else if(hour==22|| hour==23 || hour>=0 &&  hour<=4){
		printf("Good night!");
	}
//	else{
//		printf("invalid hour!");
//	}

return 0;
}
