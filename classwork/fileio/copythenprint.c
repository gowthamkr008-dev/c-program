#define _GNU_SOURCE 
#include<stdio.h>
   
int main(){
	FILE *fp,*pp;
	fp = fopen("/home/gowtham/cprogram/classwork/fileio/main.txt","r");
	pp = fopen("/home/gowtham/cprogram/classwork/fileio/printfile.txt","w+");
	
	if(fp == NULL|| pp == NULL){
		perror("Err");
		return -1;
	}
	char ch;
	while(ch = fgetc(fp) ){
	if(feof(fp)){
			break;
		}
		fputc(ch,pp);
	}
	printf("copied\n");
	
	rewind(pp);
		while(ch = fgetc(pp) ){
		if(feof(pp)){
			break;
		}
	
		fputc(ch,stdout);
	} 
	printf("Printed");
	
	//fcloseall();
	fcloseall();
	return 0;
	
}

/*
copy and print 
*/
