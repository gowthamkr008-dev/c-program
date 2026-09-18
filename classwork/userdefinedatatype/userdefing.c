#include<stdio.h>
#include<string.h>
struct Student{
	int id;
	char name[20];
	char address[60];
};
#if 0

int main(){
	struct Student s;
	printf("%zu\n",sizeof(struct Student));
	printf("%zu\n",sizeof(s));
//84
//84

	
	return 0;
	
}
#endif

#if 0
int main(){
	struct Student s;
	s.id =123;
	strcpy(s.name,"gowtham");
	strcpy(s.address,"tamil nadu");
	printf("Id : %d\n",s.id); //Id : 123
	printf("name : %s\n",s.name);//name : gowtham
	printf("address : %s\n",s.address);//address : bangalore	
	return 0;
}
/*
	s.name ="gowtham";
	s.address ="banglore";
	
	
	userdefing.c:27:16: error: assignment to expression with array type
   27 |         s.name ="gowtham";
      |                ^
userdefing.c:28:19: error: assignment to expression with array type
   28 |         s.address ="banglore";
	*/

#endif

#if 0
int main(){
	struct Student s = {123,"gowtham","salem"};//doint during the decleration
	printf("Id : %d\n",s.id); //Id : 123
	printf("name : %s\n",s.name);//name : gowtham
	printf("address : %s\n",s.address);//address : salem	
}

#endif
#if 0
int main(){
	struct Student s = {"gowtham","salem",123,};//maintain the proper order
		printf("Id : %d\n",s.id); //Id : 123
	printf("name : %s\n",s.name);//name : gowtham
	printf("address : %s\n",s.address);//address : salem
		
}

/*
userdefing.c: In function ‘main’:
userdefing.c:59:29: warning: initialization of ‘int’ from ‘char *’ makes integer from pointer without a cast [-Wint-conversion]
   59 |         struct Student s = {"gowtham","salem",123,};//doint during the decleration
      |                             ^~~~~~~~~
userdefing.c:59:29: note: (near initialization for ‘s.id’)
*/
#endif
#if 0
int main(){
	struct Student s = {.name = "gowtham",.address ="salem",.id =123,};//maintain the proper order
	struct Student s1; //contain garbage value
	printf("Id : %d\n",s.id); //Id : 123
	printf("name : %s\n",s.name);//name : gowtham
	printf("address : %s\n",s.address);//address : salem
	
	printf("Id : %d\n",s1.id); //Id : 23
	printf("name : %s\n",s1.name);//name : h
	printf("address : %s\n",s1.address);//address : 

		
}

/*
gowtham@GowthamKR:~/cprogram/classwork/userdefinedatatype$ ./a.out
Id : 123
name : gowtham
address : salem
Id : 23
name : h
address :
*/
#endif
#if 0
int main(){
	struct Student s = {.name = "gowtham",.address ="salem",.id =123,};//maintain the proper order
	struct Student s1; //contain garbage value
	s1 = s;  //structure copy possible
	printf("Id : %d\n",s.id); //Id : 123
	printf("name : %s\n",s.name);//name : gowtham
	printf("address : %s\n",s.address);//address : salem
	
	printf("Id : %d\n",s1.id); //Id : 123
	printf("name : %s\n",s1.name);//name : gowtham
	printf("address : %s\n",s1.address);//address : salem

		
}
/*
gowtham@GowthamKR:~/cprogram/classwork/userdefinedatatype$ ./a.out
Id : 123
name : gowtham
address : salem
Id : 123
name : gowtham
address : salem
*/
#endif
#if 0
int main(){
	struct Student s = {.name = "gowtham",.address ="salem",.id =123};
	printf("address of struct : %u\n",&s);
	//struct address and 1st member of the address are same address
	
	printf("address of id : %u\n",&s.id);
	printf("address of name : %u\n",s.name);
	printf("address of address : %u\n",s.address);
	 
}
/*
address of struct : 2549554160
address of id : 2549554160
address of name : 2549554164
address of address : 2549554184
*/

#endif

#if 0
int main(){
	struct Student s = {.name = "gowtham",.address ="salem",.id =123};
	struct Student *sptr;
	sptr =&s;
	//dereference must be inside the();
	(*sptr).id= 123;
	strcpy((*sptr).name ,"gowtham");
	strcpy((*sptr).address ,"bangalore");
	printf("Id : %d\n",s.id); //Id : 123
	printf("name : %s\n",s.name);//name : gowtham
	printf("address : %s\n",s.address);//address : salem
	
	printf("Id : %d\n",(*sptr).id); //Id : 123
	printf("name : %s\n",(*sptr).name);//name : gowtham
	printf("address : %s\n",(*sptr).address);//address : salem
	
	return 0;
	}
	

#endif

#if 0
int main(){
	struct Student s = {.name = "gowtham",.address ="salem",.id =123};
	struct Student *sptr;
	sptr =&s;
	//dereference must be inside the();
	sptr -> id= 123;
	strcpy(sptr -> name ,"gowtham");
	strcpy(sptr -> address ,"bangalore");
	printf("Id : %d\n",s.id); //Id : 123
	printf("name : %s\n",s.name);//name : gowtham
	printf("address : %s\n\n",s.address);//address : salem
	
	printf("Id : %d\n",(*sptr).id); //Id : 123
	printf("name : %s\n",(*sptr).name);//name : gowtham
	printf("address : %s\n\n",(*sptr).address);//address : salem
	
	
	printf("Id : %d\n",sptr -> id); //Id : 123
	printf("name : %s\n",sptr -> name);//name : gowtham
	printf("address : %s\n\n",sptr -> address);//address : salem
	
	return 0;
	}
	/*
	Id : 123
name : gowtham
address : bangalore

Id : 123
name : gowtham
address : bangalore

Id : 123
name : gowtham
address : bangalore
	*/


#endif

#if 0

int main(){
	struct Student s;
	struct Student *sptr;
	sptr = &s;
	printf("size of %zu\n",sizeof(sptr)); //size of the pointer 
	printf("size of %zu\n",sizeof(*sptr)); //size of the hole pointer
	return 0;
}

/*
size of 8
size of 84
*/
#endif

#if 1
void update_data(struct Student s){
	printf("main : %zu\n",sizeof(s));
	s.id =123;
	strcpy(s.name, "gowtham");
	strcpy(s.address,"salem");
}

int main(){
	struct Student s;
	printf("main : %zu\n",sizeof(s));
	
	printf("Id : %d\n",s.id);
	printf("name : %s\n",s.name);
	printf("address : %s\n\n",s.address);
	
	update_data(s);
	
	printf("Id : %d\n",s.id);
	printf("name : %s\n",s.name);
	printf("address : %s\n\n",s.address);
}



#endif


#if 1


#endif


#if 1



#endif

#if 1


#endif

#if 1


#endif

#if 1

#endif

#if 1


#endif

#if 1


#endif
