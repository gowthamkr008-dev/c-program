#define _GNU_SOURCE 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
 
 #if 0
 
 int main(){
 	FILE *fptr;
	char ch;
	fptr = fopen("' ferrorclearerr.txt'","r");
	
	if(fptr == NULL){
		perror("Error");
		return -1;
	}
	printf("File offset %ld\n",ftell(fptr));
	
	while((ch = fgetc(fptr)) != EOF){
		fputc(ch,stdout);
	}
	
	printf("File offset %ld\n",ftell(fptr));//one way to find the sie of the file
	
	fclose(fptr);
	return 0;
	
 }
 
 #endif
 
 #if 1
 
 int main(){
 	FILE *fptr;
	char ch;
	fptr = fopen("new.txt","r");
	
	if(fptr == NULL){
		perror("Error");
		return -1;
	}
	printf("File offset %ld\n",ftell(fptr));
	
	while((ch = fgetc(fptr)) != EOF){
		//fputc(ftell(fptr),stdout);
		if(ch == 'c')
		printf("pos of :%c= %ld\n",ch,ftell(fptr));
	}
	
	printf("File offset %ld\n",ftell(fptr));//one way to find the sie of the file
	
	//fclose(fptr);
	return 0;
	
 }
 
 #endif
