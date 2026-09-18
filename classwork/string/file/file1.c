#include<stdio.h>
#include<unistd.h>//delay there in the library
int num;
int fun1();
int fun2();
#if 1
int main(){
	while(1){
	num++;
	fun1();
	sleep(1);
	//fun2();
	}
	return 0;
}

#if 0
int main(){
	while(1){
		num++;
		fun1();
		sleep(1);
		fun2();
		sleep(1);
		//printf("   main :%d\n",num);
		
	}
	return 0;
}
#endif

/*
/usr/bin/ld: /tmp/ccwgSuIr.o: in function `main':
file1.c:(.text+0x31): undefined reference to `fun2'
collect2: error: ld returned 1 exit status
*/
#endif
