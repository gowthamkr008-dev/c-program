#include<stdio.h>
int main(){
	int age;
	printf("Age = ");
	scanf("%d",&age);
	if(age>=0 && age<5){
	        printf("Children under 5 year old get in free!\n");
		printf("Ticket price:Rs.0.00\n");
	}
	else if(age>=5&&age<=12) {
	printf("ticket price: Rs.50.00\n");
	}else if(age>12 && age<65){
	printf("Ticket price: Rs.100.00\n");
	}else if(age>65){
	printf("Ticket price: Rs.80.00\n");
	}
	return 0;
}
