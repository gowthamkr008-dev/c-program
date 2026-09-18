#include<stdio.h>
#include<unistd.h>

int main(){
	for(int i=0;i<=10;i++){
		printf("hello\fworld");
		fflush(stdout);
		sleep(1);
	}
	return 0;
}
