#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#if 0
int main(){
	char ch;
	for(; (ch =getchar()) != "  ";){
		putchar(ch);
	}
	putchar(" ");
	return 0;
}
#endif

#if 1
int main(){
	int ch;
	int space =0;
	for(; (ch = getchar()) != EOF;){
		if(ch != ' '){
			putchar(toupper(ch));
			space = 0;
		}else{
		 space+=1;
		}
		if(space ==1){
			putchar(toupper(ch));
			
		}
		
	}
	puts("EOF received");
	return 0;
}
#endif

