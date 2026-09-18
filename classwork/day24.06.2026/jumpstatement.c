#if 0


#include<stdio.h>
int main(){
	int iter;
	for(iter = 0; iter < 10; iter++)
			{
				if(iter == 5){
					break;
				}
				printf("%d\n",iter);
			}
			printf("Outside: %d\n",iter);
			return 0;
}

//break use to exit the loop or terminating loop

#endif	

#if 0


#include<stdio.h>
int main(){
	int iter;
	for(iter = 0; iter < 10; iter++)
			{
				if(iter == 5){
					continue;
				}
				printf("%d\n",iter);
			}
			printf("Outside: %d\n",iter);
			return 0;
}


//continue with the loop and skip the iteration
#endif


#if 0
//use go to 

#include<stdio.h>
int main(){

	goto l1;
	printf("Hello World\n");
l1:
	printf("Gowtham\n");

			return 0;
}

//printf only gowtham

#endif


#if 0
//use go to 

#include<stdio.h>
int main(){

	printf("Hello World\n");
l1:
	printf("Gowtham\n");
	goto l1;

			return 0;
}

//run infinite times without loop

#endif	
