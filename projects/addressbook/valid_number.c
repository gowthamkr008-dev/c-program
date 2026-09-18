#include<stdio.h>
#include<string.h>
#include<ctype.h>


//struct contact;
extern struct addressbook book;


int valid_number(char *number){
	int i=0,valid = 0;
	 while(number[i] != '\0'){//verify is digit or not and proper 10 digit num
		if(isdigit(number[i])  ){
			valid = 1;
		}else{
			valid = 0;
			break;
		}
		i++;
	if(valid == 1 && i == 10){
		valid = 1;
		}else{
		   valid =0;
		}
	}
if(valid == 1){
	return 1;
}else{
	return 0;
	}
} //end of valid number
