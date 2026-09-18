#include<stdio.h>
#include<string.h>
#include<ctype.h>



extern struct addressbook book;



int valid_name(char *name){
	int i=0,valid =0;
	while(name[i] !='\0'){
			if(isalnum(name[i]) || name[i] == '.' ||name[i] == ' ' ){
					valid =1;
			}else{
					valid =0;
					break;
				}
			i++;
		}
		if(valid ==1){
			return 1;
		}else{
			return 0;
		}
}//end of name validation






