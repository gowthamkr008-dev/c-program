#include<stdio.h>
int main(){
	printf("%3.1d\n",1);
	printf("%3.2d\n",1);
	printf("%3.3d\n",1);
	
	printf("%0.3f\n",1.0);
	
	printf("%12.8s\n","hello world");
	printf("%#x,%#X\n",0xa,0xA);
	printf("%#o\n",8);
	
	
	printf("%-3d , %-3d",-100,-100);
	

	return 0;
}

/*
  1
 01
001
1.000
    hello wo
0xa,0XA
010
-100 , -100

*/
