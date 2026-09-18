#if 0

#include<stdio.h>
int main(){
	int i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d %d\n",i,j);
		}
	}	
return 0;

}


#endif

#if 0

#include<stdio.h>
int main(){
	int i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(i==2)
				break;
			printf("%d %d\n",i,j);
		}
	}	
return 0;

}


#endif


#if 1

#include<stdio.h>
int main(){
	int i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d %d\n",i,j);
		}
		if(i==2)
			break;
	}	
return 0;

}


#endif


#if 0

#include<stdio.h>
int main(){
	int i,j;
	for(i = 0; i < 3; i++)
	{
		if(i==2)
			break;

		for(j = 0; j < 3; j++)
		{
			printf("%d %d\n",i,j);
		}
	}	
return 0;

}


#endif


