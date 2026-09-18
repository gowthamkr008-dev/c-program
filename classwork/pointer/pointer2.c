#include<stdio.h>
#if 0

int main(){
	int number;
	int *ptr;
	ptr = &number;


	//scanf("%d",&*ptr);
	scanf("%d",ptr);
	printf("%d\n",number);


	return 0;
}

//ptr = &number
#endif


#if 1


int main(){
	int *ip;
	char *cp;
	float *fp;
	double *dp;
	
	
	printf(" Size of ip : %zu\n",sizeof(ip));
	printf(" Size of cp : %zu\n",sizeof(cp));
	printf(" Size of fp : %zu\n",sizeof(fp));
	printf(" Size of dp : %zu\n",sizeof(dp));


	printf(" Size of *ip : %zu\n",sizeof(*ip));
	printf(" Size of *cp : %zu\n",sizeof(*cp));
	printf(" Size of *fp : %zu\n",sizeof(*fp));
	printf(" Size of *dp : %zu\n",sizeof(*dp));
	


	return 0;
}
/*
 Size of ip : 8
 Size of cp : 8
 Size of fp : 8
 Size of dp : 8
 Size of *ip : 4
 Size of *cp : 1
 Size of *fp : 4
 Size of *dp : 8
 */
 
 

#endif











