#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("/home/gowtham/cprogram/classwork/fileio/copy.txt","r");
	
	if(fptr == NULL){
		perror("Error");
		return -1;
	}
	
	printf("File opened");
	fclose(fptr);
	return 0;
	
}
//here 2 output generated 
// 1 is when only the file is present return the address 
//2 when file is not present return null
// accessing the null lead to compiler error
// use to validation  
