// #include<stdio.h>
// int main(){
// 	FILE *fp,*cp;
// 	fp = fopen("/home/gowtham/cprogram/projects/mp3_tag_reader/backup.mp3","r");
// 	cp = fopen("Sample.mp3","w");
// 	if(fp == NULL|| cp == NULL){
// 		perror("Error");
// 		return -1;
// 	}
	
// 	char ch;
// 	while((ch = fgetc(fp) != EOF)){
// 		fputc(ch,cp);
// 	}
// 	printf("Copied\n");
	
// 	/*
// 	//use 2 file instead of one fcloseall();
// 	fclose(fp);
// 	fclose(cp);
// 	*/
	
// 	//close all file at the same time
// 	fclose(fp);
// 	fclose(cp);
	
// 	return 0;
	
// 	//copy the one txt file into another file 
	
// }


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src = fopen("/home/gowtham/cprogram/projects/mp3_tag_reader/backup.mp3", "r");
    if (!src) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dest = fopen("Sample.mp3", "w");
    if (!dest) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    long count = 0;

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
        count++;
    }

    fclose(src);
    fclose(dest);

    printf("Copied %ld\n", count);
    return 0;
}