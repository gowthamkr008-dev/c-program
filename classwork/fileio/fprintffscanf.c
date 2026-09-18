#define _GNU_SOURCE 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#if 1
int main(){	
	FILE *fptr;
	char ch;
	fptr = fopen("scan.c","w+");
	
	if(fptr == NULL){
		perror("Error");
		return -1;
	}
	
	int num1,num2;
	float num3;
	char str[10],oper;
	
	fprintf(fptr, "%d %c %d %s %f\n" ,2,'+',1,"is",1.1);
	
	//fclose(fptr);
	//fptr = fopen("scan.c","r");
	
	
	//rewind(fptr);//file indicator get back to the  begining of the file
	
	//wherever we want the position set 
	//fseek(fptr,0l,SEEK_SET);//go to perticularposition use fseek
	
	fscanf(fptr,"%d %c %d %s %f",&num1,&oper,&num2,str,&num3);
	
	printf("%d %c %d %s %f\n",num1,oper,num2,str,num3);
	
	fclose(fptr);
	return 0;

}

#endif
