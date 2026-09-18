#include<stdio.h>
int main(){
	File *fptr;
	fptr = fopen("/home/gowtham/cprogram/classwork/fileio/copy.txt","r");
	if(fptr == NULL){
		perror("ERROR");
		return -1;
	}
	printf("opened file");
	fclose(fptr);
	
	return 0;
}
