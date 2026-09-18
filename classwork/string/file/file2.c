#include<stdio.h>
#if 0
extern int num;
int fun1(){
	printf("fun1 : %d\n",num);
	return 0;
}

#endif

#if 1
extern int num;

static int fun2(){
	printf("static %d\n",num);
	return 0;
} 
int fun1(){
	fun2();	
}

/*
/usr/bin/ld: /tmp/ccXX14df.o: in function `main':
file1.c:(.text+0x31): undefined reference to `fun2'
collect2: error: ld returned 1 exit status
*/
#endif



















#if 0
static int  num;
extern int num;

int fun1(){
	printf("fun1 : %d\n",num);
	return 0;
}

#endif


#if 0
//it lead to compiler error
extern int num;//external linkage
static int  num;//internal linkage
int fun1(){
	printf("fun1 : %d\n",num);
	return 0;
}
/*
file2.c:27:13: error: static declaration of ‘num’ follows non-static declaration
   27 | static int  num;
      |             ^~~
file2.c:26:12: note: previous declaration of ‘num’ with type ‘int’
   26 | extern int num;
      |            ^~~
*/
#endif

#if 0
extern char num;
int fun1(){
	printf("char %c\n",num);
	return 0;
}
#endif

