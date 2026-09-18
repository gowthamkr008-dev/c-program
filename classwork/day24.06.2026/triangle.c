#include<stdio.h>

#if 0
int main(){
	int i,j;
	for(i=0; i<5; i++)
	{
		for(j=0;j<5;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
/*
 
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
#endif


#if 0 
int main(){
	int i,j;
	for(i=0; i <= 5; i++)
	{
		for(j=0;j <= 5;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
#endif




#if 0 
int main(){
	int i,j;
	for(i=0; i<5; i++)
	{
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
/*
*
* *
* * *
* * * *

*/
#endif



#if 0
int main(){
	int i,j;
	for(i = 0; i < 5; i++)
	{
		for(j = 5;j > i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

/*
 
* * * * *
* * * *
* * *
* *
*

 */
#endif



#if 0
int main(){
	int i,j;
	for(i = 5; i >= 1; i--)
	{
		for(j = 1; j <= i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

/*
 
* * * * *
* * * *
* * *
* *
*

 */
#endif





#if 0
int main(){
	int i,j;
	for(i = 0; i < 5; i++)
	{
		for(j = 1;j <5 - i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

/*
 
* * * * *
* * * *
* * *
* *
*

 */
#endif





#if 1
int main(){
        int n,i,j,k;
	scanf("%d",&n);
        for(i = 0; i < n; i++)
        {
		for(k = 1; k <= n - i;k++){
			printf(" ");
		
		}
                for(j = 1;j <= i;j++)
                {
                        printf("* ");
                }
                printf("\n");
        }
        return 0;
}

/*

* * * * *
* * * *
* * *
* *
*

 */
#endif



