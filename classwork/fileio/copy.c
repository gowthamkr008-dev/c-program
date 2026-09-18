	#include<stdio.h>
	#include<string.h>
	#include<unistd.h>
#if 0
int main(){	
	
	FILE *fptr;
	char ch;
	
	fptr = fopen("new1.txt","r");
	if(fptr == NULL){
		perror("error");
		return -1;
	}
	
	fclose(fptr);
	return 0;
	}
	
	#endif
	
#if 0
int main(){
	FILE *fp;
	fp=fopen("new1.txt","w");
	if(fp == NULL){
		perror("Error");
		return -1;
	}
	fclose(fp);
	
	return 0;
}
//using the w in fopen it will be deleted all the old data inside the file


#endif

#if 0

int main(){
	FILE *fp;
	fp=fopen("new.txt","a");
	if(fp == NULL){
		perror("error");
		return -1;
	}
	fclose(fp);
	return 0;
}


#endif

#if 0

int main(){
	FILE *fp;
	fp=fopen("new.txt","r");
	if(fp == NULL){
		perror("error");
		return -1;
	}
	char ch;
	while(ch = fgetc(fp)){
		if(feof(fp)){
			break;
		}
		putc(ch,stdout);
		
		sleep(1);
		fflush(stdout);
	}
	
	fclose(fp);
	return 0;
}



#endif

#if 1
int main(){	
	FILE *fptr;
	FILE *fp;
	char ch;
	fptr =fopen("new.txt","r");
	fp = fopen("copy2.txt","w+");
	if(fptr == NULL){
		perror("Error");
		return -1;
	}	
	while((ch=fgetc(fptr))!= EOF){
		fputc(ch,fp);		
		
	}
	if(fp == NULL){
		perror("error");
		return -1;
	}
	fclose(fp);
	fp= fopen("copy2.txt","r");
	while(ch = fgetc(fp) != EOF){
		if(feof(fp)){
			break;
		}
		fputc(ch,stdout);
	}
	
	fclose(fptr);
	fclose(fp);	
		
	return 0;	
		
		
	}

#endif























