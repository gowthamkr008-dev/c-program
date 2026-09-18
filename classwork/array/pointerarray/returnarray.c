#include<stdio.h>

#if 0
int *returnarray();//function decleration
void print_array(int arr[],int size);

int main(){
	int size =5;//decleare size of array
	int *ptr;//decleare pointer

	ptr = returnarray();//function call
	print_array(ptr ,size);//function call
	return 0;
}
//function defination
void print_array(int arr[],int size){//function defination
int i;
for(i =0;i<5;i++){
printf("%d ",arr[i]);
}
printf("\n");
}

int *returnarray(){//local variable will there till the end of function it go to  ain function 
	/*static */int arr[5]  ={10,20,30,40,50};
	return arr;
}



/*
static data segment it will be there till end of the program
When we using the static o/p 
10 20 30 40 50 



stack will be there till the end of the program

returnarray.c: In function ‘returnarray’:
returnarray.c:24:16: warning: function returns address of local variable [-Wreturn-local-addr]
   24 |         return arr;
   
   
ignore the warning and run lead to segmentation fault

   Segmentation fault (core dumped)

*/
#endif



#if 0
void foo(){//function defination
	/* static */int x=0;
	x++;
	printf("x = %d\n",x);
}//end of the function delet the x value
//it use the static 
//in x can store the data segment 
//static valriable it create one time and th hold the updated value
//it will delete the value at the end of the program
//diff b/w normal and local variable
int main(){

	foo();
	foo();
	foo();
	return 0;
}

/*
x = 1
x = 1
x = 1


*/


#endif


#if 0
int *foo(){//function defination
	int x= 123;
	 return &x;
}
int main(){
	int *ptr;
	ptr = foo();
	printf("%d",*ptr);
	return 0;
}
/*

returnarray.c: In function ‘foo’:
returnarray.c:89:17: warning: function returns address of local variable [-Wreturn-local-addr]
   89 |          return &x;
   
   gowtham@GowthamKR:~/cprogram/classwork/array/pointerarray$ ./a.out
Segmentation fault (core dumped)
   
*/



#endif

#if 0
int *foo(){//function defination
	int x= 123;
	int *ptr = &x;
	 return ptr;
}
int main(){
	int *ptr;
	ptr = foo();
	printf("%d",*ptr);
	return 0;
}

//o/p 123
//there is no garanty always getting perfect value
//undefined behavier
// when the save to ptr and return the value
#endif


#if 0
int *foo(){//function defination
	int x= 123;
	int *ptr = &x;
	 return ptr;
}
int main(){
	int *ptr;
	ptr = foo();
	printf("Gowtham\n");
	printf("%d\n",*ptr);
	return 0;
}

//o/p Gowtham
//0
//that's wha we call the undefined behaviour
// in before the *ptr print the any value it lead to undefined behavior

#endif

/*
befor the all 3 program to use static to get the proper o/p to avoid undefined behaviors

*/ 


#if 0
int *function(void){//should not return any value
	int a=10;
	return &a;//function void means should not return anything
}
int main(){
		int *ptr;
		ptr = function();
		printf("Hello world\n");
		printf("%d\n",*ptr);
		return 0;
}

/*
Hello world
Segmentation fault (core dumped)
*/
#endif


#if 0
void function(void){//should not return any value
	printf("Hello world\n");
	return 25;
}
int main(){
		int c;
		c = function();
		printf("Hello world\n");
		printf("%d\n",c);
		return 0;
}


/*

gowtham@GowthamKR:~/cprogram/classwork/array/pointerarray$ gcc returnarray.c
returnarray.c: In function ‘function’:
returnarray.c:182:16: warning: returning ‘int’ from a function with return type ‘void *’ makes pointer from integer without a cast [-Wint-conversion]
  182 |         return 25;
      |                ^~
returnarray.c: In function ‘main’:
returnarray.c:186:19: warning: assignment to ‘int’ from ‘void *’ makes integer from pointer without a cast [-Wint-conversion]
  186 |                 c = function();
      |                   ^
gowtham@GowthamKR:~/cprogram/classwork/array/pointerarray$ ./a.out
Hello world
Hello world
25
gowtham@GowthamKR:~/cprogram/classwork/array/pointerarray$

*/
#endif



#if 1
void function(void){//should not return any value
	char buff[] = {"Hello World"};
	return buff;//ignore it 
}
int main(){
		printf("%s\n",function());//no return valur show the error
		// error: invalid use of void expression
		return 0;
}

/*
gowtham@GowthamKR:~/cprogram/classwork/array/pointerarray$ gcc returnarray.c
returnarray.c: In function ‘function’:
returnarray.c:218:16: warning: ‘return’ with a value, in function returning void
  218 |         return buff;//ignore it
      |                ^~~~
returnarray.c:216:6: note: declared here
  216 | void function(void){//should not return any value
      |      ^~~~~~~~
returnarray.c: In function ‘main’:
returnarray.c:221:31: error: invalid use of void expression
  221 |                 printf("%s\n",function());
      |                               ^~~~~~~~~~

*/
#endif



















