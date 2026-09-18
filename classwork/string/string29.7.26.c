#include<stdio.h>
#if 0
int x=10; //defination
int x;  //tentative defination
int foo(){
	printf("%d\n",x);
	return 0;
}int main(){
	foo();
	return 0;
}

#endif

#if 0
int x=10;    
int x;       //tentative defination
extern int x;
extern int x =20;
static int x=20;
static int x;

#endif

#if 0
int i;//tentative defination
int i;//tentative defination
int i;//tentative defination
int i;//tentative defination
//tentative defination all are deleted then last decleration only present 
int i;
int foo(){
	printf("Foo() i %d\n",i);
	return 0;
}
int main(){
	foo();
	return 0;
}

#endif

#if 0
//26ex
static int x = 10;

int foo(){
	printf("foo() i : %d\n",x);
	return 0;
}
int main(){
	foo();
	return 0;
}

#endif
#if 0
//27
static int x = 10;// store in DS internal linkage
int x; //store in DS external linkage outside the side also
//it lead to 
//can't decleare two different linkages in same variable

int foo(){
	printf("foo() i : %d\n",x);
	return 0;
}
int main(){
	foo();
	return 0;
}
#endif
#if 1
//28

#endif

#if 1
//29


#endif


#if 1

#endif

#if 1

#endif

#if 1

#endif
#if 1

#endif
#if 1

#endif

