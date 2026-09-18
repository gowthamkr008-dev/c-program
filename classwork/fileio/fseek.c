#include<stdio.h>
#include<string.h>
#include<unistd.h>

#if 0

int main(){
	int num1,num2;
	float num3;
	char str[10],oper,ch;
	FILE *fp;
	fp = fopen("fseek.c","w");
	if(fp == NULL){
		fprintf(stderr,"can't open input file text.txt!\n");
		return 1;
	}
	
	fprintf(fp,"%d %c %d %s %f\n",2,'+',1,"is",1.1);
	
	fseek(fp,0l,SEEK_SET);
	
	fscanf(fp,"%d %c %d %s %f",&num1,&oper,&num2,str,&num3);
	
	printf("%d %c %d %s %f\n",num1,oper,num2,str,num3);
	
	fclose(fp);
	
	return 0;
}

#endif



#if 1

int main(){
	int num1,num2;
	float num3;
	char str[10],oper,ch;
	FILE *fp;
	fp = fopen("a.out","r");
	if(fp == NULL){
		fprintf(stderr,"can't open input file text.txt!\n");
		return 1;
	}
	
	printf("File ofset : %ld\n",ftell(fp));
	fseek(fp,0l,SEEK_END);
	printf("File size : %ld\n",ftell(fp));
	fclose(fp);
	
	
	return 0;
	}


#endif






































