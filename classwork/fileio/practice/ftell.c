#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("/home/gowtham/cprogram/classwork/fileio/main.txt","r");
	if(fp == NULL){
		perror("Err");
		return -1;
	}
	char ch;
	printf("Before printing all char %ld\n",ftell(fp));
	while(ch = fgetc(fp)){
		if(feof(fp)){
			break;
		}
		fputc(ch,stdout);
	}
	
	printf("After printing all char %ld\n",ftell(fp));
	
	/*
	ftell has using the tell where file indicator indecat
	it tell where file indicator in which index pointout 
	*/
	
	
	fclose(fp);
	
	return 0;
}
