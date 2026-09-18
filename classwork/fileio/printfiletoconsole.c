#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("cprogram/classwork/fileio/copy.txt","r");
	if(fp == NULL){
		perror();
		return -1;
	}
	char ch;
	
	while(ch = fgetc(fp)){
		if(feof(fp)){
			break;
		}
		fputc(ch,stdout);
	}
	
	return 0;
}
