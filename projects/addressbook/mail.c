#include<stdio.h>
#include<string.h>
#include<ctype.h>

extern struct addressbook book;

int valid_mail(char *mail){
		int i = 0;
		int valid = 0;
		if(mail[0] == '@' || mail[0] == '.'){
			return 0;
		}
		
		valid =0;
		while(mail[i] != '\0'){
			if(islower(mail[i]) ||isdigit(mail[i]) || mail[i] == '@'  || mail[i] == '.' ) {
				valid =1;								
			}else{
				return 0;
			}
			i++;
		}// mail verify upto is only lower case present,digit,.			
		if(valid == 1){
		i = 0,valid =0;
		while(mail[i] != '\0'){
			if((mail[i] == '.'&& mail[i+1] == '.')||(mail[i] == '.'&& mail[i+1] =='@')){
				return 0;
			}
			if(mail[i] == '@'&& mail[i+1] != '.'){
			//printf("valid %c\n",mail[i]);
			valid =1;
			}
			i++;	
		}
						
		}//find @ and .				
		if(valid ==1){
			char *ptr = strstr(mail ,".com");
			if(ptr != NULL){
				char temp[20];
				strcpy(temp,ptr);
			if(strcmp(temp,".com") == 0){
				valid = 1;
				}else{
				valid = 0;
			  }		
			}else{
				valid = 0;
			}
		}
			if(valid ==1){
				return 1;
			}else{
				return 0;
			}
}//end of mail validation


