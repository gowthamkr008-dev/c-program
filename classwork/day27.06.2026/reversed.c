#include<stdio.h>
int main(){
    int num,result =1 ,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    getchar;
  if(num >= 0){
         i = num ;
	printf("Reversed number :");
        do{
            result = i% 10;
            printf("%d",result);
	    i = i / 10;

            } while(i > 0);
  }
  else{
	  printf("please enter a positive integer");
  }
  return 0;
}
