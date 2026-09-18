#define _GNU_SOURCE 
#include<stdio.h>


#if 0
int main(){
	FILE*fp,*fc;
	fp = fopen("a.out","r");
	fc = fopen("my.out","w");
	if(fp == NULL|| fc == NULL){
		perror("error");
		return -1;
	}
	
	char ch;
	while(fread(&ch,sizeof(ch),1,fp) > 0){
		fwrite(&ch,sizeof(ch),1,fc);
	}
	
	printf("copied\n");
	
	printf("%ld\n",ftell(fp));
	printf("%ld\n",ftell(fc));
	fcloseall();
	return 0;
	
	
}


#endif


#if 1
struct data{
	 int num1;
    char oper;
    int num2;
    char str[10];
    float num3;
};
int main(){
	struct data d1 = {2, '+', 1, "is", 1.1};
	struct data d2;
	FILE *fptr;
	if ((fptr = fopen("text.txt", "w+")) == NULL){   
	fprintf(stderr, "Can't open input file text.txt!\n");
	return 1;
	}
	fwrite(&d1, sizeof(d1), 1, fptr);
	rewind(fptr);
	fread(&d2, sizeof(d2), 1, fptr);
	printf("%d %c %d %s %f\n", d2.num1, d2.oper, d2.num2, d2.str, d2.num3);
 
	fclose(fptr);
	return 0;
	
}


#endif
