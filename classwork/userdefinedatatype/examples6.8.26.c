#include<stdio.h>
#include<string.h>

struct Student{
	int id;
	char name[150];
	char address[150];
};
#if 0
void update_data(struct Student *s)
{
	printf("update %zu\n",sizeof(s));
	s ->id =123;
	strcpy(s->name,"gowtham");
	strcpy(s->address,"salem");
}
int main(){	
		struct Student s;
		printf("main %zu\n",sizeof(s));
		
		printf("id: %d\n",s.id);
		printf("name: %s\n",s.name);
		printf("address; %s\n\n",s.address);
		
		update_data(&s);
		
		printf("id: %d\n",s.id);
		printf("name: %s\n",s.name);
		printf("address; %s\n",s.address);
		
		return 0;
	}
	/*
	main 104
id: 32768
name:
address;

update 8
id: 123
name: gowtham
address; salem
	*/
#endif


#if 0
struct Student update_data()
{
	struct Student new= {10,"gowtham","tamilnadu"};
	return new;
}
int main(){	
		struct Student s;
		printf("main %zu\n",sizeof(s));
		
		printf("id: %d\n",s.id);
		printf("name: %s\n",s.name);
		printf("address; %s\n\n",s.address);
		
		s = update_data();
		
		printf("id: %d\n",s.id);
		printf("name: %s\n",s.name);
		printf("address; %s\n",s.address);
		
		return 0;
	}
	
	/*
	main 104
id: 32768
name:
address;

id: 10
name: gowtham
address; tamilnadu
	*/
#endif



#if 0
void read_data(struct Student *s,int size){
	for(int i=0;i<size;i++){
		scanf("%d %s %s",&s[i].id,s[i].name,s[i].address);
		}
}
void print_data(struct Student *s,int size){
	for(int i=0;i<size;i++){
		printf("%d %s %s\n",s[i].id,s[i].name,s[i].address);
		}
}
int main(){
	   struct Student s[3];
		//printf("main %zu\n",sizeof(s));
		
		read_data(s,3);
		print_data(s,3);
		
		
		return 0;
	}
	/*
	1
gowtham
salem
123
gowthamkr
salem
123
gowtham
tamilnadu
1 gowtham salem
123 gowthamkr salem
123 gowtham tamilnadu
	*/

#endif

#if 0
void read_data(struct Student *s){
	printf("enter the id name address\n");
	
		scanf("%d %s %s",&s->id,s->name,s->address);
	
}
void print_data(struct Student *s){

		printf("%d %s %s\n",s->id,s->name,s->address);

}
int main(){
	   struct Student s;
		//printf("main %zu\n",sizeof(s));
		read_data(&s);
		print_data(&s);
		
		
		return 0;
	}

#endif

#if 1
int main(){
	student s;
	printf("%zu\n",sizeof(Student));
	printf("%zu\n",sizeof(s));
	
	return 0;
	
}
/*
examples6.8.26.c: In function ‘main’:
examples6.8.26.c:148:9: error: unknown type name ‘student’
  148 |         student s;
      |         ^~~~~~~
examples6.8.26.c:149:31: error: ‘Student’ undeclared (first use in this function)
  149 |         printf("%zu\n",sizeof(Student));
      |                               ^~~~~~~
examples6.8.26.c:149:31: note: each undeclar
*/



#endif

#if 1

#endif

#if 1

#endif

