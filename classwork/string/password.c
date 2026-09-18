#include<stdio.h>
#include<string.h>
int main(){
	 char name[40];
	 printf("Enter the user name : ");
	 scanf("%[^\n]",name);
	  getchar();
	 char pass[10];
	 printf("Enter the user password : ");
	 scanf("%[^\n]",pass);
	  getchar();
	 
	 char user[40];
	 char ps[40];
	 int i=0;
	 do{
	 printf("Reenter the user name : ");	 
	 scanf("%[^\n]",user);
	 getchar();
	 printf("Enter the user password : ");
	 scanf("%[^\n]",ps);
	 getchar();
	 i++;
	 int valid =0;
	 if(i == 4){
	 	valid =0;
	 	printf("Your chance is over\n");
	 	return 0;
	 	break;
	 }
	 if((strcasecmp(name,user)==0) && (strcmp(pass,ps)==0)){
		valid =1;
	 	break;
	 }
	 else
	  printf("The chance is 3 %d\n",i);
	  printf("Enter valid user name or password \n");
	 }while(i <= 3);
	 
	 char str[20] = "string char ";
	 
	 scanf("%[^\n]",fill);
	
	 
	
	 
	 return 0;
}










