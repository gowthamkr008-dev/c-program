#define _GNU_SOURCE 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
 
#if 0
int main(){	
	FILE *fptr;
	FILE *fp;
	char ch;
	fptr =fopen("new.txt","r");
	//fp = fopen("copy2.txt","w+");
	if(fptr == NULL){
		perror("Error");
		return -1;
	}	
	/*
	while((ch=fgetc(fptr))!= EOF){
		fputc(ch,fp);		
		
	}
	if(fp == NULL){
		perror("error");
		return -1;
	}
	fclose(fp);
	fp= fopen("copy2.txt","r");
	*/
	while(ch = fgetc(fptr) != EOF){
		fputc(ch,stdout);
	}
	
	fclose(fptr);
	fclose(fp);	
		
	return 0;	
		
		
	}

#endif

#if 1

int main(){	
	FILE *fp,*fc;
	fp= fopen("ferrorclearerr.c","r");
	fc=fopen("' ferrorclearerr.txt'","w");
	if(fp == NULL|| fc == NULL){
		perror("ERROR");
		return -1;
	}
	char ch;
	while((ch = fgetc(fp)) != EOF){
		fputc(ch,fc);
	}
	printf("Copied \n");
 //	fclose(fp);
	//fclose(fc);
	
	fcloseall();
	return 0;

}

#endif	

#if 1





#endif
































