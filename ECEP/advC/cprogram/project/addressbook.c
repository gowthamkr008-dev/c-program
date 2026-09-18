
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdio_ext.h>
 
struct contact {
	char name[30];
	char phone[12];
	char email[30];
};
 
struct addressbook {
	struct contact c[100];
	int contactcount;
};
 
int number_valid(char *);
void print();
int valid_mail(char *mail);
int valid_name(char *name);
void lower(char *str);
void load_data(struct addressbook *book);
void create(struct addressbook * book);
void search(struct addressbook * book);
void edit(struct addressbook * book) {
	return;
}
void delete(struct addressbook * book);
void list(struct addressbook * book);
void save_data(struct addressbook * book);
 
int main() {
	int choice, flag = 1;
	struct addressbook book;
	book.contactcount = 0;
 
	do {
		if(flag == 1) {
			printf("Select your requirements by given below:\n1.Create\n2.Search\n3.Edit\n4.Delete\n5.List\n6.Save\n7.load\n8.Exit\n");
			flag = 0;
		}
		printf("Enter the choice you need: ");
		scanf("%d", &choice);
		__fpurge(stdin);
		printf("\n");
 
		if(choice >= 1 && choice <= 8) {
			flag = 1;
			switch(choice) {
				case 1:
					printf("Create a contact\n");
					create(&book);
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
					delete(&book);
					break;
				case 5:
					printf("\n");
					printf("List the contact\n");
					list(&book);
					break;
				case 6:
					printf("\n");
					printf("Save a contact\n");
					save_data(&book);
					break;
				case 7:
					printf("\n");
					printf("Load data:\n");
					load_data(&book);
					break;
				case 8:
					printf("Exit \n");
					return 0;
			}
		} else {
			printf("Enter valid choice: ");
			flag = 0;
		}
	} while(choice != 8);
 
	return 0;
}
 
// Create contact
void create(struct addressbook * book) {
	int valid = 0, j = 0;
	printf("Enter the name: ");
	char tempname[30];
	char tempphone[12];
	char tempmail[30];
	char phone[12];
 
	do {
		valid = 0;
		scanf("%29s", tempname);
		__fpurge(stdin);
		valid = valid_name(tempname);
		if(valid == 0) {
			printf("Enter valid name(only alphabets/numbes/./space): ");
		}
	} while(valid != 1);
 
	// Read mobile number
	printf("Enter the Phonenumber: ");
	do {
		scanf("%11s", tempphone);
		__fpurge(stdin);
		valid = number_valid(tempphone);
		if(valid == 1) {
			for(j = 0; j < book->contactcount; j++) {
				if((strcmp(book->c[j].phone, tempphone)) == 0) {
					valid = 2;
					break;
				}
			}
		}
 
		if(valid == 2) {
			printf("This number already exists. Please enter an alternate number: ");
		} else if(valid == 0) {
			printf("Enter the valid Phonenumber: ");
		}
	} while(valid != 1);
 
	// Read mail id
	printf("Enter the Emailid: ");
	do {
		scanf("%29s", tempmail);
		__fpurge(stdin);
		valid = valid_mail(tempmail);
		if(valid == 1) {
			char email[30];
			for(int j = 0; j < book->contactcount; j++) {
				strcpy(email, book->c[j].email);
				if((strcmp(tempmail, email)) == 0) {
					valid = 2;
					break;
				}
			}
		}
 
		if(valid == 2) {
			printf("This Email Already Present Before Enter Alternate Email: ");
		} else if(valid == 0) {
			printf("Enter valid mail : ");
		}
	} while(valid != 1);
 
	char ch;
	printf("\n");
	printf("Confirm to contact Save or Cancel :[Y/N] ");
	do {
		scanf("%c", &ch);
		__fpurge(stdin);
		if(ch == 'Y' || ch == 'y') {
			strcpy(book->c[book->contactcount].phone, tempphone);
			strcpy(book->c[book->contactcount].name, tempname);
			strcpy(book->c[book->contactcount].email, tempmail);
			printf("Contact Saved Succesfully\n\n");
			book->contactcount++;
			valid = 1;
			break;
		} else if(ch == 'N' || ch == 'n') {
			valid = 1;
			printf("\n");
			printf("Contact cancle\n\n");
			break;
		} else {
			printf("Enter [Y/N]: ");
			valid = 0;
		}
	} while(valid != 1);
 
	printf("\n");
}
 
// List the contacts
void list(struct addressbook * book) {
	print();
	printf("%20s%s\n", " ", "INFO OF CONTACT LIST");
	print();
	printf("%-20s\t%-20s\t%-33s\n", "Name", "Phone number", "Email");
	print();
	for(int i = 0; i < book->contactcount; i++) {
		printf("%-20s  %-20s\t%-30s\n", book->c[i].name, book->c[i].phone, book->c[i].email);
	}
	print();
}
 
// Search contact
void search(struct addressbook * book) {
	char name[30];
	char phone[12];
	char mail[30];
	char tempphone[12];
	char tempname[20];
	char tempmail[30];
 
	printf("Select your search requirements by given below:\n1.Name\n2.phone\n3.email\n4.Exit\nEnter your choice: ");
	int choice = 0, isvalid = 0, present = 0, valid = 0, i = 0, j = 0;
 
	do {
		scanf("%d", &choice);
		__fpurge(stdin);
		if(choice >= 1 && choice <= 4) {
			isvalid = 1;
			i = 0;
			valid = 0;
			j = 0;
 
			switch(choice) {
				case 1:
					printf("Enter to search the name: ");
					do {
						scanf("%29s", name);
						valid = valid_name(name);
						if(valid == 0) {
							printf("Enter valid name(only alphabets/numbes/./space): ");
						}
					} while(valid != 1);
 
					printf("\n");
					print();
					printf("%20s%s\n", " ", "SEARCH OF CONTACT INFO\n");
					print();
					printf("%-20s\t%-20s\t%-33s\n", "Name", "Phone number", "Email\n");
					print();
					present = 0;
 
					for(j = 0; j < book->contactcount; j++) {
						strcpy(tempname, book->c[j].name);
						lower(tempname);
						lower(name);
						if((strstr(tempname, name))) {
							present = 1;
							printf("%-20s  %-20s\t%-30s\n", book->c[j].name, book->c[j].phone, book->c[j].email);
						}
					}
 
					if(present == 0) {
						printf("No Name found the contact list\n");
					}
					print();
					printf("\n");
					break;
 
				case 2:
					printf("Enter the Phone number to search: ");
					do {
						scanf("%11s", phone);
						__fpurge(stdin);
						valid = number_valid(phone);
						if(valid == 0) {
							printf("Enter the valid Phonenumber(only numbers): ");
						}
					} while(valid != 1);
 
					printf("\n");
					print();
					printf("%20s%s\n", " ", "SEARCH OF CONTACT INFO\n");
					print();
					printf("%-20s\t%-20s\t%-30s\n", "Name", "Phone number", "Email\n");
					print();
					present = 0;
 
					for(j = 0; j < book->contactcount; j++) {
						if((strcmp(book->c[j].phone, phone)) == 0) {
							present = 1;
							printf("%-20s\t%-20s\t%-30s\n", book->c[j].name, book->c[j].phone, book->c[j].email);
							break;
						}
					}
 
					if(present == 0) {
						printf("No Number found the contact list\n");
					}
					print();
					printf("\n");
					break;
 
				case 3:
					printf("Enter Your search mail: ");
					i = 0;
					valid = 0;
					do {
						scanf("%29s", mail);
						__fpurge(stdin);
						valid = valid_mail(mail);
						if(valid == 0) {
							printf("Enter valid mail : ");
						}
					} while(valid != 1);
 
					print();
					printf("%20s%s\n", " ", "SEARCH OF CONTACT INFO\n");
					print();
					printf("%-20s\t%-20s\t%-33s\n", "Name", "Phone number", "Email\n");
					print();
					present = 0;
 
					for(i = 0; i < book->contactcount; i++) {
						strcpy(tempmail, book->c[i].email);
						if(strcmp(tempmail, mail) == 0) {
							printf("%-20s\t%-20s\t%-30s\n", book->c[i].name, book->c[i].phone, book->c[i].email);
							present = 1;
							break;
						}
					}
 
					if(present == 0) {
						printf("No Mail found the contact list\n");
					}
					print();
					break;
 
				case 4:
					printf("Exit the search\n");
					break;
			}
		} else {
			printf("Enter valid choice: ");
			isvalid = 0;
		}
	} while(isvalid != 1);
}
 
// Delete contact
void delete(struct addressbook * book) {
	int choice = 0, isvalid = 0, present = 0, valid = 0, i = 0, j = 0;
	char del[15], name[30], tempphone[12], tempmail[30], ch;
 
	printf("Select a requirements by given below to delet to search :\n1.Name\n2.phone\n3.email\n4.Exit\nEnter your choice: ");
 
	do {
		scanf("%d", &choice);
		__fpurge(stdin);
 
		if(choice >= 1 && choice <= 4) {
			isvalid = 1;
 
			switch(choice) {
				case 1:
					printf("Enter the name you want to delete: ");
					do {
						valid = 0;
						scanf("%29s", name);
						__fpurge(stdin);
						valid = valid_name(name);
						if(valid == 0) {
							printf("Enter valid name(only alphabets/numbes/./space): ");
						}
					} while(valid != 1);
 
					char tempname[20];
					for(i = 0; i < book->contactcount; i++) {
						strcpy(tempname, book->c[i].name);
						lower(tempname);
						lower(name);
						if(strstr(tempname, name)) {
							j = i;
							present++;
						}
					}
 
					if(present == 0) {
						printf("No name present in contact list\n");
					}
 
					if(present == 1) {
						print();
						printf("%-20s%-20s%-30s\n", book->c[j].name, book->c[j].phone, book->c[j].email);
						print();
						printf("Confirm deletion [Y/N]: ");
 
						do {
							scanf("%c", &ch);
							__fpurge(stdin);
							if(ch == 'y' || ch == 'Y') {
								valid = 1;
							} else if(ch == 'n' || ch == 'N') {
								printf("contact can't delet\n");
								valid = 1;
							} else {
								printf("Enter [Y/N]:");
								valid = 0;
							}
						} while(valid != 1);
 
						if(ch == 'y' || ch == 'Y') {
							for(i = j; i < book->contactcount - 1; i++) {
								strcpy(book->c[i].name, book->c[i+1].name);
								strcpy(book->c[i].phone, book->c[i+1].phone);
								strcpy(book->c[i].email, book->c[i+1].email);
							}
							printf("Deleted succesfully\n");
							book->contactcount--;
						}
					}
 
					if(present > 1) {
						print();
						printf("%20s%s\n", " ", "MULTIPLE CONTACT PRESENT\n");
						print();
						printf("%s %-20s  %-20s  %-33s\n", "Present", "Name", "Phone number", "Email\n");
						print();
						present = 0;
 
						for(i = 0; i < book->contactcount; i++) {
							strcpy(tempname, book->c[i].name);
							lower(tempname);
							lower(name);
							if(strstr(tempname, name)) {
								printf("%d %-20s  %-20s  %-33s\n", i, book->c[i].name, book->c[i].phone, book->c[i].email);
								present++;
							}
						}
 
						print();
						int ind, flag = 0;
						printf("You need to delet only one number or all\nA = All contact in a name\nO = One perticular\nEnter[A/O]: ");
 
						do {
							scanf("%c", &ch);
							__fpurge(stdin);
							if(ch == 'a' || ch == 'A') {
								flag = 2;
								valid = 1;
							} else if(ch == 'o' || ch == 'O') {
								flag = 1;
								valid = 1;
							} else {
								printf("Enter valid choice[A/O]:");
								flag = 0;
								valid = 0;
							}
						} while(valid != 1);
 
						if(flag == 1) {
							printf("Enter the present number:");
							do {
								valid = 0;
								scanf("%d", &ind);
								__fpurge(stdin);
								if(ind < book->contactcount && isdigit(ind) == 0) {
									valid = 1;
								} else {
									printf("Enter present num: ");
									valid = 0;
								}
							} while(valid != 1);
 
							print();
							printf("%-20s\t%-20s\t%-30s\n", book->c[ind].name, book->c[ind].phone, book->c[ind].email);
							print();
							printf("This contact you want to delet\nY = Yes\nN = No\nEnter to delet[Y/N]: ");
 
							do {
								scanf("%c", &ch);
								__fpurge(stdin);
								if(ch == 'y' || ch == 'Y') {
									valid = 1;
								} else if(ch == 'n' || ch == 'N') {
									printf("Contact Not deleted\n");
									valid = 1;
								} else {
									printf("Enter [Y/N]:");
									valid = 0;
								}
							} while(valid != 1);
 
							if(ch == 'y' || ch == 'Y') {
								for(i = ind; i < book->contactcount - 1; i++) {
									strcpy(book->c[i].name, book->c[i+1].name);
									strcpy(book->c[i].phone, book->c[i+1].phone);
									strcpy(book->c[i].email, book->c[i+1].email);
								}
								printf("Deleted succesfully \n");
								book->contactcount--;
							}
						} else if(flag == 2) {
							printf("confirm Delete All Contact [Y/N]:");
							do {
								scanf("%c", &ch);
								__fpurge(stdin);
								if(ch == 'y' || ch == 'Y') {
									valid = 1;
								} else if(ch == 'n' || ch == 'N') {
									printf("Contact Not deleted\n");
									valid = 1;
								} else {
									printf("Enter [Y/N]:");
									valid = 0;
								}
							} while(valid != 1);
 
							if(ch == 'y' || ch == 'Y') {
								for(j = 0; j < book->contactcount; j++) {
									strcpy(tempname, book->c[j].name);
									lower(tempname);
									lower(name);
									if(strstr(tempname, name)) {
										for(i = j; i < book->contactcount - 1; i++) {
											strcpy(book->c[i].name, book->c[i+1].name);
											strcpy(book->c[i].phone, book->c[i+1].phone);
											strcpy(book->c[i].email, book->c[i+1].email);
										}
										book->contactcount--;
										j--;
									}
								}
								printf("Deleted succesfully \n");
							}
						} else if(ch == 'N' || ch == 'n') {
							printf("Contact Not deleted\n");
						}
					}
 
					printf("\n");
					break;
 
				case 2:
					printf("Enter a Number want to delete: ");
					do {
						valid = 0;
						scanf("%11s", del);
						__fpurge(stdin);
						valid = number_valid(del);
						if(valid == 0) {
							printf("Enter valid Number: ");
						}
					} while(valid != 1);
 
					printf("\n");
					print();
					present = 0;
 
					for(j = 0; j < book->contactcount; j++) {
						if(strcmp(book->c[j].phone, del) == 0) {
							present = 1;
							printf("%-20s\t%-20s\t%-30s\n", book->c[j].name, book->c[j].phone, book->c[j].email);
							i = j;
							break;
						}
					}
 
					if(present == 0) {
						printf("No Number found the contact list\n");
					}
					print();
					printf("\n");
 
					if(present == 1) {
						printf("Confirm Delete Contact [Y/N]:");
						do {
							scanf("%c", &ch);
							__fpurge(stdin);
							if(ch == 'y' || ch == 'Y') {
								valid = 1;
							} else if(ch == 'n' || ch == 'N') {
								valid = 1;
							} else {
								printf("Enter [Y/N]:");
								valid = 0;
							}
						} while(valid != 1);
 
						if(ch == 'y' || ch == 'Y') {
							for(j = i; j < book->contactcount - 1; j++) {
								strcpy(book->c[j].name, book->c[j+1].name);
								strcpy(book->c[j].phone, book->c[j+1].phone);
								strcpy(book->c[j].email, book->c[j+1].email);
							}
							printf("Deleted succesfully \n");
							book->contactcount--;
						} else if(ch == 'N' || ch == 'n') {
							printf("Contact Not deleted\n");
						}
					}
					printf("\n");
					break;
 
				case 3:
					printf("Enter a mail want to delete: ");
					do {
						valid = 0;
						scanf("%29s", del);
						__fpurge(stdin);
						valid = valid_mail(del);
						if(valid == 0) {
							printf("Enter valid Mail: ");
						}
					} while(valid != 1);
 
					printf("\n");
					print();
					present = 0;
 
					for(j = 0; j < book->contactcount; j++) {
						if((strcmp(book->c[j].email, del)) == 0) {
							present = 1;
							printf("%-20s\t%-20s\t%-30s\n", book->c[j].name, book->c[j].phone, book->c[j].email);
							i = j;
							break;
						}
					}
 
					if(present == 0) {
						printf("No mail found the contact list\n");
					}
					print();
					printf("\n");
 
					if(present == 1) {
						printf("Confirm Delete Contact [Y/N]:");
						do {
							scanf("%c", &ch);
							__fpurge(stdin);
							if(ch == 'y' || ch == 'Y') {
								valid = 1;
							} else if(ch == 'n' || ch == 'N') {
								valid = 1;
							} else {
								printf("Enter [Y/N]:");
								valid = 0;
							}
						} while(valid != 1);
 
						if(ch == 'y' || ch == 'Y') {
							for(j = i; j < book->contactcount - 1; j++) {
								strcpy(book->c[j].name, book->c[j+1].name);
								strcpy(book->c[j].phone, book->c[j+1].phone);
								strcpy(book->c[j].email, book->c[j+1].email);
							}
							printf("Deleted succesfully \n");
							book->contactcount--;
						} else if(ch == 'N' || ch == 'n') {
							printf("Contact Not deleted\n");
						}
					}
					printf("\n");
					break;
			}
		} else {
			printf("Enter valid choice: ");
			isvalid = 0;
		}
	} while(isvalid != 1);
}
 
void save_data(struct addressbook *book) {
	FILE *fp;
	fp = fopen("contact.txt", "w");
	fprintf(fp, "%d\n", book->contactcount);
	for(int i = 0; i < book->contactcount; i++) {
		fprintf(fp, "%s,%s,%s\n", book->c[i].name, book->c[i].phone, book->c[i].email);
	}
	printf("Save succesfully!\n");
	fclose(fp);
}
 
void load_data(struct addressbook *book) {
	FILE *fp;
	fp = fopen("contact.txt", "r");
	if(fp == NULL) {
		printf("File not present\n\n");
		return;
	}
	fscanf(fp, "%d\n", &book->contactcount);
	for(int i = 0; i < book->contactcount; i++) {
		fscanf(fp, "%[^,],%[^,],%[^\n]\n", book->c[i].name, book->c[i].phone, book->c[i].email);
	}
	printf("loaded succesfully!\n\n");
	fclose(fp);
}
 

