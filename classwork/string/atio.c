#include<stdio.h>
int main(){
 char str[30];
 int digit =0;
 scanf("%[^\n]",str);
 char first =0;
 if((str[0] >= '0' && str[0] <='9' )|| str[0] == '+' ||str[0] == '-'){//check the first char is either num or sign
 if(str[0] == '-'){
 	first = str[0];
 }
 	if(str[1] == '+' || str[1] == '-'){
 		printf("0");
 		return 0;
 	}else{
 	 int i = 0,val=0;
 	
 		while(str[i] != '\0'){
 		if(str[i] >= 65 && str[i] <=122){
 			break;
 		}
 		 val = str[i] - '0';
 		  if(val >= 0 && val <=9){
 		  	digit = (digit * 10) + val;
 		  } 		  
 		i++;
 		}
 		if(first == '-'){
 		 digit = -digit;
 		}
 		if(digit == 0||digit ==-1){
 		printf("0");
 		}else{
 		printf("%d",digit);
 		}
 	}
 
 }else{
 	printf("0");
 }return 0;
}
