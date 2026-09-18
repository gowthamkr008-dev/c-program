#include<stdio.h>
struct college{//name of the datatupe
	struct student{ //name of the data type
		int id;
		char name[20];
		char address[30];
	}student;//variable of type structure student
	struct {
		int id;
		char name[20];
		char address[30];
	}faculity;//variable of type structure 
};
#if 0
int main(){
	struct college member;
	member.student.id =10;
	member.faculity.id =20;
	
	printf("%d\n",member.student.id);
	printf("%d\n",member.faculity.id);
	return 0;
}

#endif

#if 0
int main(){
	struct college c;
	printf("size of c: %zu\n",sizeof(c));
	
	struct student s;
	printf("size of c: %zu\n",sizeof(s));
}
/*
size of c: 112
size of c: 56
*/

#endif

#if 1
int main(){
	struct college c;
	//printf("size of c: %zu\n",sizeof(c));
	c.student.id = 123;
	c.faculity.id =124; 
	printf("student id: %d\n",c.student.id );
	printf("faculity id: %d\n\n",c.faculity.id );
	
	
	
	struct student s;
	printf("size of c: %zu\n",sizeof(s));
	s.id = 153;
	//s.faculity.id =124; 
	printf("student id: %d\n",s.id );
	//printf("faculity id: %d\n",s.faculity.id );
	
	
}

#endif











