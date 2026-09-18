 #define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void help();
int valid_file(char * fname);
void edit_content(char *tag,char *content,char *fname);
int num_reverse(int * num);        //✅
void view_content(char *fname);
void print_line(int num);   //✅