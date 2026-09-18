#include<stdio.h>
#include<string.h>
#include<ctype.h>


extern struct addressbook book;


void lower(char *str){
	int i=0,val =0;
	while(str[i] != '\0'){
		if(str[i] >= 'A' && str[i] <='Z'){
		val = 	str[i] -'A';
		str[i] = 'a' + val;
		}
		i++;
	}
}



