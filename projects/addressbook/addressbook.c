#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdio_ext.h>


struct contact{
		char name[30];
		char phone[12];
		char email[30];
	};
struct addressbook{
	struct contact c[100];
	int contactcount; 
};

int  valid_number(char *);
void print();
int valid_mail(char *mail);
int valid_name(char *name);
void lower(char *str);
void load_data(struct addressbook *book);	
void create(struct addressbook * book);
void search(struct addressbook * book);
void edit(struct addressbook * book);
void delete_contact(struct addressbook * book);
void list(struct addressbook * book);
void save_data(struct addressbook * book);

int main(){
    int choice,flag = 1,valid =0;
    char ch,c;
    struct addressbook book;
    book.contactcount = 0;
    
    // Print menu ONCE at the start
   
    
    do{
    	if(flag ==1){
    		 printf("Select your requirements by given below:\n1.Create\n2.Search\n3.Edit\n4.Delete\n5.List\n6.Save\n7.load\n8.Exit\n");
    		 printf("Enter the choice you need: ");
    		 flag =0;
    	}
        
        scanf("%d",&choice);
        while ((c = getchar()) != '\n' && c != EOF);
        
        printf("\n");
        
        if(choice >= 1 && choice <= 8){
            switch(choice){
                case 1:
                    printf("Create a contact\n");
                    if(book.contactcount < 100){
                    	create(&book);	
                    }else{
                    	printf("Your contact is full No memory available\n");	
                    }
                    
                    break;
                case 2:
                    printf("\n");
                    printf("Search a contact\n");
                    search(&book);
                    break;
                case 3:
                    printf("\n");
                    printf("Edit a contact:\n");
                    edit(&book);
                    break;
                case 4:
                    printf("\n");
                    printf("Delete a contact\n");
                    delete_contact(&book);
                    break;
                case 5:
                    printf("\n");
                    printf("List the contact\n");
                    list(&book);
                    break;
                case 6:
                    printf("\n");
                    printf("Confirm save any data is in file it all overwrite\n1.Y = confirm save\n2.N = Not Save\nenter [Y/N]:");
                    do{
                    	valid = 0;
                    	scanf("%c",&ch);
                    while ((c = getchar()) != '\n' && c != EOF);
                    	if(ch == 'Y'|| ch == 'y'){
                    	 save_data(&book);
                    		printf("Save a contact!\n");
                    		valid =1;
                    	}else if(ch == 'n'||ch == 'N'){
                    		printf("Not save contact\n");
                    		valid = 1;
                    	}else{
                    		printf("Enter [Y/N]:");
                    		valid =0;
                    	}
                    }while(valid != 1);
                    
                   printf("\n");
                    break;
                case 7:
                    printf("\n");
                    printf("Load data:\n");
                    load_data(&book);
                    break;
                case 8:
                  //  printf("%35s%s","","Exit \n");
                    return 0;
            }
            choice = 0;
            flag = 1;
        }else{
            printf("Enter valid choice: ");
            flag = 0;
        }
    }while(choice != 8);
    
    return 0;	
}

//create contact		
void create(struct addressbook * book){

			//read name 
			int valid =0,j = 0;
			printf("Enter the name	: ");	
			char tempname[30],tempphone[12],tempmail[30],phone[12],c;
		do{
			valid = 0;
			scanf("%29s",tempname);//book->c[book->contactcount].name
			while ((c = getchar()) != '\n' && c != EOF);
			valid = valid_name(tempname);//validate name
			if(valid == 0){
			printf("Enter valid name(only alphabets/numbes/./space): ");
			}
		}while(valid != 1);// scan the name
			//read mobile number
			printf("Enter the Phonenumber: ");
		do{
			scanf("%11s",tempphone);
			while ((c = getchar()) != '\n' && c != EOF);
			valid = valid_number(tempphone);
			if( valid == 1){
			
			for(j = 0;j < book->contactcount;j++){
				//strcpy(phone,book->c[j].phone);
				if((strcmp(book->c[j].phone,tempphone)) == 0){
					valid = 2;
					break;
					}
				}
			}

		if(valid == 2){
			printf("This number already exists. Please enter an alternate number: ");
			}else if(valid == 0){
				printf("Enter the valid Phonenumber: ");
			}
		}while(valid != 1);//scan the number to save
			
			
			
			
			
			// read mail id
			
		printf("Enter the Emailid: ");
		do{
			scanf("%29s",tempmail);
		while ((c = getchar()) != '\n' && c != EOF);
			valid = valid_mail(tempmail);//validate the mail id			
			if(valid == 1){
			char email[30];
			for(int j = 0;j < book->contactcount;j++){
				strcpy(email,book->c[j].email);
			if((strcmp(tempmail,email)) == 0){
				valid = 2;
				break;
				}
			}
		}
		
		if(valid == 2){
			printf("This Email Already Present Before Enter Alternate Email: ");
			}else if(valid == 0){
				printf("Enter valid mail : ");
				}
		}while(valid != 1);//end or read mail
		
			char ch;
			printf("\n");
			printf("Confirm to contact Save or Cancel :[Y/N] ");			
		do{
			scanf("%c",&ch);
			while ((c = getchar()) != '\n' && c != EOF);
			if(ch == 'Y' || ch == 'y'){
				strcpy(book->c[book->contactcount].phone,tempphone);
				strcpy(book->c[book->contactcount].name,tempname);
				strcpy(book->c[book->contactcount].email,tempmail);
				printf("Contact Saved Succesfully\n\n");
				book->contactcount++;	
				valid = 1;
				break;
			}else if(ch == 'N'||ch =='n'){
				valid = 1;
				printf("\n");
				printf("Contact cancle\n\n");	
				break;	
			}else{
				printf("Enter [Y/N]: ");
				valid = 0;
			}
		}while(valid != 1); //contact saved or cancled		
			

printf("\n");

}//contact created
		
//list the contacts	
void list(struct addressbook * book){
	int i=0;
			print();
			printf("%23s%s\n"," " ,"INFORMATION OF CONTACT LIST");
			print();
			printf("%-5s  %-22s %-22s %-33s\n","S.no"," Name","Phone number","Email");
			print();
			for(i = 0;i < book->contactcount; i++){
				printf("%-5d  %-20s  %-20s  %-30s\n",i+1,book->c[i].name  , book->c[i].phone,	book->c[i].email);
			}//end of printing contact
			print();
}//contact printed






//search contact
void search(struct addressbook * book){
		
		char name[30],phone[12], mail[30], tempphone[12], tempname[20], tempmail[30],c;
		
		printf("Select your search requirements by given below:\n1.Name\n2.phone\n3.email\n4.Exit\nEnter your choice: ");
		int choice = 0,isvalid = 0,present = 0,valid = 0,i = 0,j = 0;
		do{
			scanf("%d",&choice);
	while ((c = getchar()) != '\n' && c != EOF);
			if(choice >= 1 && choice <= 4){
			isvalid = 1;
			i = 0,valid = 0,j = 0;
		switch(choice){
			case 1:
				printf("Enter to search the name: ");
				do{
					scanf("%29s",name);
					valid = valid_name(name); 
					if(valid == 0){
						printf("Enter valid name(only alphabets/numbes/./space): ");
		 			}
				}while(valid != 1);//end of scan name to search
					
				
				printf("\n");	
				print();
				printf("%20s%s\n"," " ,"SEARCH OF CONTACT INFO\n");	
				print();	
				printf("%-20s	%-20s	%-33s\n","Name" ,"Phone number", "Email\n");
				print();
				present = 0;	
				for( j = 0;j < book->contactcount;j++){
					strcpy(tempname,book->c[j].name);
					lower(tempname);
					lower(name);		
				if((strstr(tempname,name))){
						present = 1;
						printf("%-20s  %-20s	%-30s\n",book->c[j].name , book->c[j].phone,book->c[j].email);
						}
				}
				if(present == 0){
					printf("No Name found the contact list\n");
				}	
				print();
				printf("\n");			
					break;//case 1 end to search name
				case 2:
					printf("Enter the Phone number to search: ");
				do{
					scanf("%11s",phone);
				while ((c = getchar()) != '\n' && c != EOF);
					valid = valid_number(phone);//validate the phonumber
					if(valid == 0){
					printf("Enter the valid Phonenumber(only numbers): ");
					}
				}while(valid != 1);//end of scan phonenumber
					
					//print number
				printf("\n");	
				print();
				printf("%20s%s\n"," " ,"SEARCH OF CONTACT INFO\n");
				print();
				printf("%-20s	%-20s	%-30s\n","Name" ,"Phone number", "Email\n");
				print();
				present = 0;
				for( j = 0;j < book->contactcount;j++){
						if((strcmp(book->c[j].phone,phone)) == 0){
							present = 1;
							printf("%-20s	%-20s	%-30s\n",book->c[j].name , book->c[j].phone,book->c[j].email);
							break;
						}
				}
				if(present == 0){
					printf("No Number found the contact list\n");
				}	
				print();	
				printf("\n");
					break;//case 2 end to search by number
				case 3:
					printf("Enter Your search mail: ");
					 i = 0,valid = 0;
				do{
					scanf("%29s",mail);
				while ((c = getchar()) != '\n' && c != EOF);
					valid = valid_mail(mail);
					if(valid == 0){
					printf("Enter valid mail : ");
					}
				}while(valid != 1);//end of scan mail
						
						print();
						printf("%20s%s\n"," " ,"SEARCH OF CONTACT INFO\n");
						print();
						printf("%-20s	%-20s	%-33s\n","Name" ,"Phone number", "Email\n");
						print();
						present = 0;
						for(i = 0;i < book->contactcount; i++){
							strcpy(tempmail,book->c[i].email);							
							if(strcmp(tempmail,mail) == 0){
								printf("%-20s	%-20s	%-30s\n",book->c[i].name  , book->c[i].phone,	book->c[i].email);
								present = 1;
								break;
							}
						}
						if(present == 0){
							printf("No Mail	 found the contact list\n");
						}
						print();						
					break;//case 3 end of search by mail
				case 4:
					printf("Exit the search\n");
					printf("\n");
					break;//case 4 exit the search
				}//end of switch case
				
				}else{
					printf("Enter valid choice: ");
					isvalid = 0;
				}
		}while(isvalid !=1);//end of search
		
}//end of search functions


void delete_contact(struct addressbook * book){
	int choice = 0,isvalid = 0,present = 0,valid = 0,i = 0,j = 0;
	char del[30],name[30],tempphone[12],tempmail[30],ch,c;
	
	printf("Select a requirements by given below to delete to search :\n1.Name\n2.phone\n3.email\n4.Exit\nEnter your choice: ");
	do{
		scanf("%d",&choice);
		while ((c = getchar()) != '\n' && c != EOF);
		if(choice >=1 && choice <= 4){
			isvalid = 1;
			switch(choice){//s1
				case 1:
				printf("Enter the name you want to delete: ");
				do{
					valid = 0;
					scanf("%29s",name);
				while ((c = getchar()) != '\n' && c != EOF);
					valid = valid_name(name);
					if(valid == 0){
					printf("Enter valid name(only alphabets/numbes/./space): ");
					}
				}while(valid !=1);
			char tempname[20];	
			for(i = 0;i < book->contactcount;i++){//find contact present only one or multiple
						strcpy(tempname,book->c[i].name);
						lower(tempname);
						lower(name);
					if(strstr(tempname,name) ){			
								j = i;
								present++;
						}
				}
		if(present == 0){
					printf("No name present in contact list\n");
					printf("\n");
				}	
		if(present == 1){
					print();
					printf("%-20s%-20s%-30s\n",book->c[j].name,book->c[j].phone,book->c[j].email);
					print();
					printf("Confirm deletion [Y/N]: ");
					do{
						scanf("%c",&ch);
					while ((c = getchar()) != '\n' && c != EOF);
						if(ch == 'y' || ch == 'Y'){
							valid = 1;
							}else if(ch == 'n' || ch == 'N'){
								printf("contact can't delete\n");
								valid = 1;
							}else{
								printf("Enter [Y/N]:");
								valid = 0;
							}
					}while(valid != 1);
						if(ch == 'y'|| ch == 'Y'){
							for(i = j;i < book->contactcount-1;i++){
								strcpy(book->c[i].name ,book->c[i+1].name);
								strcpy( book->c[i].phone , book->c[i+1].phone);
								strcpy( book->c[i].email , book->c[i+1].email);
							}
							printf("Deleted succesfully\n");
						book->contactcount--;
					}
							
					}//delet contact if only present by one
			if(present > 1){
						print();	
						printf("%20s%s\n"," " ,"MULTIPLE CONTACT PRESENT\n");
						print();
						printf("%5s %-20s  %-20s  %-33s\n","Index","Name" ,"Phone number", "Email\n");
						print();
						present = 0;	
				for(i = 0;i < book->contactcount;i++){
						strcpy(tempname,book->c[i].name);
						lower(tempname);
						lower(name);
						if(strstr(tempname,name) ){
							printf("%5d %-20s  %-20s  %-33s\n",i,book->c[i].name  , book->c[i].phone,	book->c[i].email);
							present++;	
						}
				}
				print();
					int ind,flag = 0;
					printf("You need to delete only one number or all\nA = All contact in a name\nO = One perticular\nEnter[A/O]: ");
					do{	
						scanf("%c",&ch);
					while ((c = getchar()) != '\n' && c != EOF);
						if(ch == 'a'||ch == 'A'){
							flag = 2;
							valid = 1;
						}else if(ch == 'o'||ch == 'O'){
								flag = 1;
								valid = 1;
						}else{
							printf("Enter valid choice[A/O]:");
							flag = 0;
							valid = 0;
						}
					}while(valid != 1);
					if(flag == 1){
						printf("Enter the Index number:");
						do{
							valid = 0;
							scanf("%d",&ind);
							while ((c = getchar()) != '\n' && c != EOF);
							if(ind < book->contactcount && ind >= 0){
								valid = 1;
							}else{
								printf("Enter present num: ");
								valid = 0;
							}
							}while(valid != 1);
							print();
							printf("%-20s	%-20s	%-30s\n",book->c[ind].name  , book->c[ind].phone,	book->c[ind].email);
							print();
							printf("This contact you want to delete\nY = Yes\nN = No\nEnter to delete[Y/N]: ");
						
						do{
							scanf("%c",&ch);
						while ((c = getchar()) != '\n' && c != EOF);
							if(ch == 'y' || ch == 'Y'){
								valid = 1;
							}else if(ch == 'n' || ch == 'N'){
								printf("Contact Not deleted\n");
								valid = 1;
							}else{
								printf("Enter [Y/N]:");
								valid = 0;
							}
						}while(valid != 1);
				if(ch == 'y'|| ch == 'Y'){
							for(i = ind;i < book->contactcount-1;i++){
								strcpy(book->c[i].name ,book->c[i+1].name);
								strcpy( book->c[i].phone , book->c[i+1].phone);
								strcpy( book->c[i].email , book->c[i+1].email);
						}
						printf("Deleted succesfully \n");
						  book->contactcount--;
						}	
				}else if(flag == 2){
					printf("confirm Delete All Contact [Y/N]:");
				do{
						scanf("%c",&ch);
				while ((c = getchar()) != '\n' && c != EOF);
						if(ch == 'y' || ch == 'Y'){
							valid = 1;
						}else if(ch == 'n' || ch == 'N'){
							printf("Contact Not deleted\n");
							valid = 1;
						}else{
							printf("Enter [Y/N]:");
							valid = 0;	
					}
				}while(valid != 1);
			if(ch == 'y' || ch == 'Y'){
				for(j = 0;j < book->contactcount;j++){
							strcpy(tempname,book->c[j].name);
							lower(tempname);
							lower(name);
					if(strstr(tempname,name) ){
							for(i = j;i < book->contactcount-1;i++){
								strcpy(book->c[i].name ,book->c[i+1].name);
								strcpy( book->c[i].phone , book->c[i+1].phone);
								strcpy( book->c[i].email , book->c[i+1].email);
							}
							book->contactcount--;
							j--;
						}
				}	
				printf("Deleted succesfully \n");
				}
			}else if(ch == 'N' || ch == 'n'){
						printf("Contact Not deleted\n");
					}
				}//end of multi present
				printf("\n");
				break;//end of delet by using name 
					
									
					case 2:
						printf("Enter a Number want to delete: ");
						do{
							valid = 0;
							scanf("%11s",del);
						while ((c = getchar()) != '\n' && c != EOF);
							valid = valid_number(del);
							if(valid == 0){
								printf("Enter valid Number: ");
							}
					}while(valid !=1);
					
					//print number
				printf("\n");	
				print();
				present =0;
				for( j = 0;j < book->contactcount;j++){
						if(strcmp(book->c[j].phone,del) == 0){
							present = 1;
							printf("%-20s	%-20s	%-30s\n",book->c[j].name , book->c[j].phone,book->c[j].email);
							i = j;
							break;
					}
				}
				if(present == 0){
					printf("No Number found the contact list\n");
				}	
				print();	
				printf("\n");
				if(present == 1){
				printf("Confirm Delete Contact [Y/N]:");
							do{
							scanf("%c",&ch);
						while ((c = getchar()) != '\n' && c != EOF);
							if(ch == 'y' || ch == 'Y'){
								valid = 1;
							}else if(ch == 'n' || ch == 'N'){
								
								valid = 1;
							}else{
								printf("Enter [Y/N]:");
				 				valid = 0;
							}
						}while(valid != 1);
						if(ch == 'y'||ch =='Y'){
							for(j = i;j < book->contactcount-1;j++){
									strcpy(book->c[j].name ,book->c[j+1].name);
									strcpy( book->c[j].phone , book->c[j+1].phone);
									strcpy( book->c[j].email , book->c[j+1].email);
								}
								printf("Deleted succesfully \n");
							  book->contactcount--;
							}else if (ch == 'N' || ch =='n'){
							printf("Contact Not deleted\n");							
							}
							
							}
							printf("\n");
					break;//delete by number
			case 3:
			
				printf("Enter a mail want to delete: ");
						do{
							valid = 0;
							scanf("%29s",del);
						while ((c = getchar()) != '\n' && c != EOF);
							valid = valid_mail(del);
							if(valid == 0){
								printf("Enter valid Mail: ");
							}
					}while(valid !=1);
					
					//print number
				printf("\n");	
				print();
				present =0;
				for( j = 0;j < book->contactcount;j++){
						if((strcmp(book->c[j].email,del)) == 0){
							present = 1;
							printf("%-20s	%-20s	%-30s\n",book->c[j].name , book->c[j].phone,book->c[j].email);
							i = j;
							break;
					}
				}
				if(present == 0){
					printf("No mail found the contact list\n");
				}	
				print();	
				printf("\n");
				if(present == 1){
				printf("Confirm Delete Contact [Y/N]:");
							do{
							scanf("%c",&ch);
							while ((c = getchar()) != '\n' && c != EOF);
							if(ch == 'y' || ch == 'Y'){
								valid = 1;
							}else if(ch == 'n' || ch == 'N'){
								
								valid = 1;
							}else{
								printf("Enter [Y/N]:");
				 				valid = 0;
							}
						}while(valid != 1);
							
							
							if(ch == 'y'||ch =='Y'){
							
							for(j = i;j < book->contactcount -1;j++){
									strcpy(book->c[j].name ,book->c[j+1].name);
									strcpy( book->c[j].phone , book->c[j+1].phone);
									strcpy( book->c[j].email , book->c[j+1].email);
								}
								printf("Deleted succesfully \n");
							  book->contactcount--;
							}else if (ch == 'N' || ch =='n'){
							printf("Contact Not deleted\n");							
							}
							
							}
							printf("\n");
			
			break;//delet by email
			
						}
					}else{
			printf("Enter valid choice: ");
			isvalid = 0;
			
		
		}
	}while(isvalid != 1);
	
	
	
	
}





void edit(struct addressbook * book){
	printf("Enter your requirement to edit the contact by using\n1.name\n2.number\n3.email\n4.exit\nenter a choice:");
	int choice,isvalid=0,valid = 0,present = 0,i = 0,j = 0;
	char mail[30],newmail[30],number[12],newnumber[12],ch,c;
	
	do{
		scanf("%d",&choice);
		while ((c = getchar()) != '\n' && c != EOF);
		if(choice >= 1 && choice <=4){
			isvalid = 1;
			switch(choice){
				case 1:
				
				break;//edit name
				case 2:
					printf("Enter a Number want to edit: ");
					do{
						scanf("%12s",number);
					while ((c = getchar()) != '\n' && c != EOF);
						valid= valid_number(number);
						if(valid == 0){
							printf("Enter valid Phone number: ");
						}	
					}while(valid != 1);//end of scan of number
					printf("\n");	
				print();
				present =0;
				for( j = 0;j < book->contactcount;j++){
					if((strcmp(book->c[j].phone,number)) == 0){
							present = 1;
						printf("%-20s	%-20s	%-30s\n",book->c[j].name , book->c[j].phone,book->c[j].email);
						i = j;
							break;
					}
				}
				print();
				printf("\n");
				if(present == 1){
					valid = 0;
					printf("Confirm you want ot edit[Y/N]: ");
					do{
						scanf("%c",&ch);
						if(ch == 'y' || ch == 'Y'){
							valid =1;
						}else if(ch == 'n'|| ch == 'N'){
							printf("Cancle editing\n");
							return;
						}
					}while(valid != 1);
					if(ch == 'y'|| ch =='Y'){
						printf("Enter new Number: ");
						do{	
							valid = 0;
							scanf("%29s",newnumber);
						while ((c = getchar()) != '\n' && c != EOF);
							valid = valid_number(newnumber);
							if(valid == 0){
								printf("Enter valid number: ");
							}
							if(valid == 1){
							present = 0;
								for( j = 0;j < book->contactcount;j++){
									
									if((strcmp(book->c[j].phone,newnumber)) == 0 && (strcmp(book->c[j].phone,number)) != 0){
									present = 1;
									break;
									}
								}
								if(present == 1){
									printf("This phonenumber is already present enter alternate number: ");
									valid = 0;
								}	
							}
						}while(valid != 1);//scan mail
						
							
						strcpy(book->c[i].phone,newnumber);
						
						printf("Edited Succesfully!\n");
						printf("\n");	
						
					}//end of edditing new number	
				}
				else{
					printf("No email found in contactlist\n");
					print();
					return ;
				}	
					
				
				
				
					printf("\n");
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				break;//edit number
				case 3:
					printf("Enter a email want to edit: ");
					do{
						scanf("%29s",mail);
				while ((c = getchar()) != '\n' && c != EOF);
						valid= valid_mail(mail);
						if(valid == 0){
							printf("Enter valid mail: ");
						}	
					}while(valid != 1);//end of scan of mail
					printf("\n");	
				print();
				present =0;
				for( j = 0;j < book->contactcount;j++){
						if((strcmp(book->c[j].email,mail)) == 0){
							present = 1;
						printf("%-20s	%-20s	%-30s\n",book->c[j].name , book->c[j].phone,book->c[j].email);
						i = j;
							break;
					}
				}
				print();
				printf("\n");
				if(present == 1){
					valid = 0;
					printf("Confirm you want ot edit[Y/N]: ");
					do{
						scanf("%c",&ch);
						if(ch == 'y' || ch == 'Y'){
							valid =1;
						}else if(ch == 'n'|| ch == 'N'){
							printf("Cancle editing\n");
							return;
						}
					}while(valid != 1);
					if(ch == 'y'|| ch =='Y'){
						printf("Enter new mail: ");
						do{	
							valid = 0;
							scanf("%29s",newmail);
						while ((c = getchar()) != '\n' && c != EOF);
							valid = valid_mail(newmail);
							if(valid == 0){
								printf("Enter valid mail: ");
							}
							if(valid == 1){
							    present = 0;
								for( j = 0;j < book->contactcount;j++){
								if((strcmp(book->c[j].email,newmail)) == 0){
								
								present = 1;
								print();
								printf("%-20s	%-20s	%-30s\n",book->c[j].name , book->c[j].phone,book->c[j].email);
									print();
								i = j;
							   break;
							}
								}
								if(present == 1){
									printf("This email is already present enter alternate mail: ");
									valid = 0;
								}	
								}
						}while(valid != 1);//scan mail
						
							
						strcpy(book->c[i].email,newmail);
						
						printf("Edited Succesfully!\n");
						printf("\n");	
						
					}//end of edditing new mail
				}
				else{
					printf("No email found in contactlist\n");
					print();
					return ;
				}	
					
				
				
				
					printf("\n");
					break;//edit  email
				
				case 4:
					printf("\n");
					return;
				
			}//end of edit switch
		}//end of chooseinedit requirement
		else{
			printf("Enter valid choice: ");
			isvalid = 0;
		}
		
	}while(isvalid != 1);
	
	
	
	
	
}//edit the contact


















































void save_data(struct addressbook *book){
	FILE *fp;
	fp = fopen("contact.txt","w");
	fprintf(fp ,"%d\n",book->contactcount);
	for(int i=0;i<book->contactcount;i++){
		fprintf(fp,"%s,%s,%s\n",book->c[i].name  , book->c[i].phone,	book->c[i].email);
	}
	printf("Save succesfully!\n");
	fclose(fp);
}//save data to txt file


void load_data(struct addressbook *book){
	FILE *fp;
	fp = fopen("contact.txt","r");
	if(fp == NULL){
		printf("File not present\n\n");
		return ;	
	}	
	fscanf(fp ,"%d\n",&book->contactcount);
	for(int i=0;i<book->contactcount;i++){
		fscanf(fp,"%[^,],%[^,],%[^\n]\n",book->c[i].name  , book->c[i].phone,	book->c[i].email);
	}
	printf("loaded succesfully!\n\n");
			fclose(fp);
}//load the data to file to program


