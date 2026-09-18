#include<stdio.h>
#include<ctype.h>
#include<unistd.h>
#if 0
int main(){
	int ch;
	for(; (ch = getchar()) != EOF;){
		putchar(toupper(ch));
	}
	puts("EOF received");
	return 0;
}


#endif
//print not more than one space 
#if 0
int main(){
	int ch;
	for(; (ch = getchar()) != '\n';){
		putchar(toupper(ch));
		
	}
	puts(" ");
	return 0;
}


#endif
#if 0
int main(){
	char ch;
	for(; (ch = getc(stdin)) != "EOF";){
		putc(toupper(ch),stdout);
		
	}
	puts(" ");
	return 0;
}


#endif


#if 0
int main(){
	while(1){
		putc('A',stdout);
		sleep(1);
		
	}return 0;
}

#endif


#if 1
int main(){
	char ch;
	for(; ch = getchar() != "EOF"){
	     putchar(toupper);
	}
	puts("EOF receive")
}



