#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter num1 ");
	scanf(" %d", &num1);
	getchar;
 printf("Enter num2 ");
       	scanf(" %d", &num2);
	getchar;
 printf("Enter num3 ");
       	scanf(" %d", &num3);
//num1 =10 num2 20 num30

if(num1>0 && num2>0 && num3>0){
	if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)){
          //10 	>20	10<30(false)	|| 10<20     10>30  flase
	  printf("num1");
	  }
	else if((num2>num1 && num2<num3) ||(num2<num1 && num2>num3))
		  {
			  printf("num2"); 
			}
	else
	{
	  	printf("num3");
		}
}else{
 if((num1 < num2 && num1 > num3) || (num1 > num2 && num1 < num3)){
          //10  >20     10<30(false)    || 10<20     10>30  flase
          printf("num1");
          }
        else if((num2<num1 && num2>num3) ||(num2>num1 && num2<num3))
                  {
                          printf("num2");
                        }
        else
        {
                printf("num3");
                }

}
return 0;
}
		
