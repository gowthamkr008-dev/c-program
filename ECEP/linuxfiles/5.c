#include<stdio.h>
int main(){
	int i=10;
	goto lable2;
	while(i){
		switch(i-1){
			case 1:
	lable2:
			printf("%d\n",i);
		}
	}

}
