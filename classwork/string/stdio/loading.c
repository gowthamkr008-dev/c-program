
#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
	int i;
	printf("\e[?25l");
	for(i = 0;i<=100;i++){
		printf("\rloading[%*c]%d%%",i,'-',i);
		fflush(stdout);
		sleep(1);
	}
	printf("\e[?25h");
	printf("\nLoading completed\n");
	return 0;
}
 
