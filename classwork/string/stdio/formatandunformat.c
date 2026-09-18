#include<stdio.h>
#include<string.h>
#include<ctype.h>
#if 0
int main(){
	int ch;
	for(;(ch = getc(stdin)) != EOF;){
		putc(toupper(ch),stdout);
	}
	puts("Eof received");
	return 0;
}
#endif

#if 0
//use of fgets
int main(){
	char str[20];
	puts("enters string");
	fgets(str,10,stdin);
	fputs(str,stdout);
	return 0;
	}

#endif


#if 0
//printf expere the string literal 
//printf use to give the o/ is only const char
int main(){
	const char ch[20] = "gowtham";
	printf(ch);
	return 0;
}

#endif


#if 0
int main(){
	const char ch[20] = "gowtham";
	printf(ch);
	return 0;
}


#endif


#if 1

#endif


#if 1

#endif
