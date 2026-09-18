#include<stdio.h>
#if 0


int main(){
	int x=5;
	int *p =5;
	return 0;
}


/*
 pointer1.c: In function ‘main’:
pointer1.c:7:17: warning: initialization of ‘int *’ from ‘int’ makes pointer from integer without a cast [-Wint-conversion]
    7 |         int *p =5;
      |              
 */

#endif



#if 0

//size of pointer is the system size is 32 bits the o/p will all the  4 byte
//the system is 64 bits the o/p is 8 byte
int main(){
        int *ip;
        char *p;
	float *fp;
	double *dp;


	printf("Size of ip : %zu\n",sizeof(ip));
	  printf("Size of p : %zu\n",sizeof(p));
	    printf("Size of fp : %zu\n",sizeof(fp));
	      printf("Size of dp : %zu\n",sizeof(dp));

        return 0;
}


/*
 

   Size of ip : 8
Size of p : 8
Size of fp : 8
Size of dp : 8
 */

#endif



#if 0
//size of the all pointer datatype

int main(){
       

        printf("int * : %zu\n",sizeof( int *));
        printf("char * : %zu\n",sizeof(char *));
        printf("float * : %zu\n",sizeof(float *));
        printf("double * : %zu\n",sizeof(double *));
	printf("void * : %zu\n",sizeof( void *));
	printf("FILE * : %zu\n",sizeof( FILE *));
	printf("short int * : %zu\n",sizeof(short int * ));
	printf("long int * : %zu\n",sizeof(long int * ));
	printf("lont double  * : %zu\n",sizeof(long double * ));
	printf("long long * : %zu\n",sizeof(long long *));
		     


       return 0;
}


/*
int * : 8
char * : 8
float * : 8
double * : 8
void * : 8
FILE * : 8
short int * : 8
long int * : 8
lont double  * : 8
long long * : 8
 */

#endif




#if 0
//

int main(){


	int x;
	int *ptr;

	x= 5;
	ptr =&x;

	printf("address of the number %p\n",&x); // %p fi a format specifier for the pointer
	printf("ptr contains  %p\n",ptr);



       return 0;
}


/*
 address of the number 0x7fff4f0207ac
ptr contains  0x7fff4f0207ac
 */

#endif





#if 0
//

int main(){


        int x;
        int *ptr;

        x= 10;
        ptr =&x;

        printf("address of the number %d\n",x); // %p fi a format specifier for the pointer
        printf(" *ptr contains  %d\n",*ptr);



       return 0;
}

/*
 address of the number 10
 *ptr contains  10
 */
#endif




#if 1
//

int main(){


        int x = 10;
        int *ptr;

        ptr = &x;
        //*ptr = 100;

        printf("number contain %d\n",x);
        printf(" *ptr contains  %d\n",*ptr);

	*ptr = 100;//indirectly modify a variable help of pointer

	  printf("number contain %d\n",x);
        printf(" *ptr contains  %d\n",*ptr);


       return 0;
}

/*
 address of the number 10
 *ptr contains  10
 */
