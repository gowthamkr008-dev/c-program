#include<stdio.h>
int main(){
	int start,ratio,num;
	printf("Enter the First number : ");
	scanf("%d",&start);
	printf("Enter the common difference / ratio :");
	scanf("%d",&ratio);
	printf("Enter the number of terms : ");
	scanf("%d",&num);

	if(num > 0){
		
		//for AP
		
		int sum = start;
		printf("AP = ");
		for(int i = 1; i <= num; i++) {
		
			printf("%d,", sum);
			sum += ratio;
				
		}
printf("\n");
		//for GP
		int mul = start;
		printf("GP = ");
		for(int i = 1; i<= num; i++){
		
			printf("%d, ",mul);
			mul *= ratio;
		}
printf("\n");
		sum = start;
		float div = 0;
                printf("HP = ");
                for(int i = 1; i <= num; i++) {

                       
               	div = 1.0 / sum;	 
	       	printf("%f ",div);       
		sum += ratio;
		


                }

    




	}else{
		printf("The given number not zeor");
	}
}

