#include<stdio.h>
#include<string.h>

#if 0
int main(){
	int i=0;
	printf("i %d\n",i	);
	return 0;
}
#endif

#if 0
int *foo(){
	int i = 10;
	int *j = &i;
	return j;//return the address of the variable
}
int main(){
	int *i;
	i = foo();
	printf("i %d\n",*i	);
	return 0;
}
#endif

#if 0
char *ch(){
 char ch[] = "hello world";
 return ch;
}
int main(){
	char *i;
	i = ch();
	printf("i %s\n",i);
	return 0;
}


#endif


#if 0
int main(){
	int i=0;
	{
		int j=10;
		printf("%d",i);
	}printf("%d",j);//j is undecleare
	return 0;
}
*/
gowtham@GowthamKR:~/cprogram/classwork/string$ gcc stroagecalsses.c
stroagecalsses.c: In function ‘main’:
stroagecalsses.c:48:22: error: ‘j’ undeclared (first use in this function)
   48 |         }printf("%d",j);
      |                      ^
stroagecalsses.c:48:22: note: each undeclared identifier is reported only once for each function it appears in
gowtham@GowthamKR:~/cprogram/classwork/string$

*/

#endif

#if 0
int main(){
	int j=0;
	{
		int j=10;
		printf("%d\n",j);//whatever the nerest decleration it will access
	}//after this block delet j inside definations this block delet j goes back to the j=0
	
	printf("%d",j);
	return 0;
}

#endif

#if 0
int main(){
	int j=0;
	int j=10; //redefination error
	{
	printf("%d\n",j);
	}printf("%d\n",j);
	return 0;
	}


#endif

#if 0
/*
stroagecalsses.c: In function ‘main’:
stroagecalsses.c:95:9: error: address of register variable ‘i’ requested
   95 |         scanf("%d",&i);
      |         ^~~~~
*/
int main(){
	register int i;
	scanf("%d",i);
	printf("%d",i);
	return 0;
}
#endif
#if 0
int main(){
	register int i =10;
	register int *p =&i;
	printf("%d",*p);
	return 0;
}

//register variable has no address because it store in the cpu register
#endif
#if 0
int main(){
	int i =10;
	register int *p =&i;
	printf("%d",*p);
	return 0;
}

//register variable can stored in the cpu register
#endif

#if 0
int *foo(){
	static int i = 10;
	int *j = &i;
	return j;//return the address of the variable
}
int main(){
	int *i;
	i = foo();
	printf("i %d\n",*i	);
	return 0;
}
#endif



#if 0
char *ch(){
 static char ch[] = "hello world";
 return ch;
}
int main(){
	char *i;
	i = ch();
	printf("i %s\n",i);
	return 0;
}


#endif


#if 0
//static show the updated value
int bookticket(){
	static int ticket =0;
	ticket++;
	return ticket;
}
int main(){
	int count;
	count = bookticket();
	count = bookticket();
	count = bookticket();
	count = bookticket();
	printf("%d",count);
	return 0;
}
#endif


#if 0
int foo(){
	static int i=10;
	return i;
	//for static variable during the decleration element is not constant
}

int main(){
	static int i = foo();
	printf("x : %d\n",i);
	return 0;
}

#endif 


#if 0
int *foo(){
	int i = 10;
	static int *j = &i;//compiler error
	return j;
	//for static address during the decleration element is not constant
}

int main(){
	int *i;
	i = foo();
	printf("x : %d\n",*i);
	return 0;
}

#endif

#if 0

//global variable 
int x;
int foo(){
	printf("x %d\n",x);
	return x++;
}
int main(){
	foo();
	printf("x %d",x);
	return 0;
}
/*
x 0
x 1

*/
#endif



#if 0

//auto variable 
//compile error they are use only for the local variable
auto int x;
int foo(){
	printf("x %d\n",x);
	return x++;
}
int main(){
	foo();
	printf("x %d",x);
	return 0;
}
/*
gowtham@GowthamKR:~/cprogram/classwork/string$ gcc stroagecalsses.c
stroagecalsses.c:236:10: error: file-scope declaration of ‘x’ specifies ‘auto’
  236 | auto int x;
*/
#endif

#if 0
register int x;
int foo(){
	printf("x %d\n",x);
	return x++;
}
int main(){
	foo();
	printf("x %d",x);
	return 0;
}

/*
stroagecalsses.c:254:14: error: register name not specified for ‘x’
  254 | register int x;
*/
#endif


#if 0
//for the global variable defination only one time
int x=10;
//decleration can any number of time
//but the defination only one time
int x;
int foo(){
	printf("x %d\n",x);
	return x++;
}
int main(){
	foo();
	printf("x %d",x);
	return 0;
}

/*
stroagecalsses.c:254:14: error: register name not specified for ‘x’
  254 | register int x;
*/
#endif
