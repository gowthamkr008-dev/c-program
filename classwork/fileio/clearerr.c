#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("/home/gowtham/cprogram/classwork/fileio/main.txt","w");
	if(fp == NULL){
		perror("Error");
		return -1;
	}
	char ch;
	
	ch = fgetc(fp);//the file is opened for write operation only 
	//but here access read the character 
	//ferror is initally set as zero
	////then access to other than write flag goes to 1
	
	
	if(ferror(fp)){//here one is true then print error occur
		printf("Error occur\n");		
	}
	
	//reset the ferror
	// use this
	
	clearerr(fp);
	if(ferror(fp)){
		printf("Error occur\n");
	}
	
	return 0;
}
