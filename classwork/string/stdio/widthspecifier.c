#include<stdio.h>
int main(){
	printf("%3d\n",1);
	printf("%3d\n",10);
	printf("%3d\n",100);
	printf("%3d\n",1000);
	
	printf("%*d\n",1,1);
	printf("%*d\n",2,1);
	printf("%*d\n",3,1);
	
	
	printf("%10s","hello");
	
	return 0;
	
	
}

/*
  1
 10
100
1000
1
 1
  1
     hello


*/
