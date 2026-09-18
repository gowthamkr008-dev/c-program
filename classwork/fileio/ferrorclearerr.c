#define _GNU_SOURCE 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#if 0
int main(){	
	FILE *fptr;
	char ch;
	fptr = fopen("file.txt","w");
	
	if(fptr == NULL){
		perror("Error");
		return -1;
	}
	
	ch = fgetc(fptr);
	if(ferror(fptr))
		fprintf(stderr,"Error in reading\n");
		
		
	if(ferror(fptr))
		fprintf(stderr,"Error in reading\n");
		
		fclose(fptr);
		
		return 0;	
	}
//Error in reading
//Error in reading
#endif

#if 1
int main(){	
	FILE *fptr;
	char ch;
	fptr = fopen("file.txt","w");
	
	if(fptr == NULL){
		perror("Error");
		return -1;
	}
	
	ch = fgetc(fptr);
	if(ferror(fptr))
		fprintf(stderr,"Error in reading\n");
		
	clearerr(fptr);//clear the error in the ferror 
		
	if(ferror(fptr))
		fprintf(stderr,"Error in reading\n");
		
		fclose(fptr);
		
		return 0;	
	}
//Error in reading
#endif
