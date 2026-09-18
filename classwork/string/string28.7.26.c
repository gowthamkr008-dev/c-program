#include <stdio.h>
#if 0
//global variable upto 155 line of code
int x;

int foo()
{
	printf("in foo() x %d\n", x);

	return ++x;
}

int main()
{
	foo();

	printf("in main() x %d\n", x);

	return 0;
}
/*
in foo() x 0
in main() x 1
*/

#endif


#if 0
auto int x;

int foo()
{
	printf("x %d\n", x);

	return ++x;
}

int main()
{
	foo();

	printf("x %d\n", x);

	return 0;
}
/*
in foo() x 0
in main() x 1
gowtham@Gowtha
*/
#endif


#if 0
register int x;

int foo()
{
	printf("x %d\n", x);

	return ++x;
}

int main()
{
	foo();

	printf("x %d\n", x);

	return 0;
}
/*
error occur 
string28.7.26.c:56:14: error: register name not specified for ‘x’
   56 | register int x;
      |              ^
*/
#endif


#if 0
//global declerations
//this variable can all function in this file 
//lifttime entire program 
//default value of global is '0' if not initialized
int x = 10;

int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
	foo();

	return 0;
}
#endif



#if 0
int x = 10;
int x;
int x;
int x;
int x;
int x;
int x;

int foo()
{
		printf("x %d\n", x);

		return 0;
}

int main()
{
		foo();

		return 0;
}

/*
multiple declarations of the same variable name without initialization as tentative definitions when they’re at global scope.

*/
#endif



#if 0

int foo()
{
		int x = 10;
		int x;
		printf("x %d\n", x);

		return 0;
}

int main()
{
		foo();

		return 0;
}

/*
gowtham@GowthamKR:~/cprogram/classwork/string$ gcc  string28.7.26.c
string28.7.26.c: In function ‘foo’:
string28.7.26.c:142:21: error: redeclaration of ‘x’ with no linkage
  142 |                 int x;
      |                     ^
string28.7.26.c:141:21: note: previous definition of ‘x’ with type ‘int’
  141 |                 int x = 10;
      |                     ^
*/
#endif



#if 0
/*
in global variable has occur in the more than 1 definations so here show erroe because n number of decleration is there in the global but only 1 defination in one variable is there
*/
int x = 10;
int x = 20;
int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
		foo();

	return 0;
}

#endif



#if 0
//static global until 195 

static int x = 10;//defines a static global variable.
//x can access within the file anywhere
int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
	foo();

	return 0;
}
//x 10
#endif

#if 0
/*
“You first declared x as a normal global variable (external linkage),
then tried to redeclare it as static (internal linkage). That’s not allowed.”
*/
int x ;//global variable with external linkage (visible across files).
static int x = 10;//global variable with internal linkage (visible only in this file).

int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
	foo();

	return 0;
}
#endif

#if 0
//auto 


int main()
{
		int i = 0;//That makes it a local variable — and by default, all local variables in C have the storage class auto.

		printf("i %d\n", i);

		return 0;
}
#endif

#if 0

int foo()
{
		int i = 0;

		printf("i %d\n", i);

		return i;
}

int main()
{
		foo();

		return 0;
}
#endif

#if 0

int *foo()
{
	int i = 10;
	int *j = &i;

	return &i;
}

int main()
{
	int *i;

	i = foo();

	printf("hi\n");
	
	printf("*i %d\n", *i);

	return 0;
}
//warning: function returns address of local variable
/*
Exactly right, Gowtham 👍 — what your code and compiler warning are showing is a classic case of a “dangling address” (or dangling pointer).
*/
#endif

#if 0

int *foo()
{
	int i = 10;
	int *j = &i;
	return j;//return pointer address
}

int main()
{
	int *i;

	i = foo();
	printf("*i %d\n", *i);

	return 0;
}/*
so this is undefine behaviour

When you return the address of a local (auto) variable like i, that memory still physically exists on the stack until something else overwrites it.
*/
#endif

#if 0

int *foo()
{
	int i = 10;
	return &i;
}

int main()
{
	int *i;

	i = foo();

	printf("*i %p\n", foo());

	return 0;
}

/*
your Ubuntu terminal shows exactly what’s happening here. Let’s decode it step by step so you understand why the compiler warns and why the output still prints 10.
*/
#endif

#if 0

char *foo()
{
	char ca[12] = "Hello World";

	return ca;//warning: function returns address of local variable
}

int main()
{
	char *ca;

	ca = foo();
	printf("ca is %s\n", ca);

	return 0;
}
/*
That’s because ca is a local array inside foo() — it has the storage class auto by default.
When foo() ends, its stack frame is destroyed, and the memory for ca is released
*/
#endif

#if 0

int book_ticket()
{
	int ticket_sold = 0;

	ticket_sold++;

	return ticket_sold;
}

int main()
{
	int count;

	count = book_ticket();
	count = book_ticket();

	printf("Sold %d\n", count);

	return 0;
}
/*
when the once return the function is in foo the stace frame has been deleted
Sold 1
*/
#endif

#if 0

int main()
{
	int i = 0;

	{
		int j = 0;

		printf("i %d\n", i);
	}

	printf("j %d\n", j);

	return 0;
}
/*
string28.7.26.c: In function ‘main’:
string28.7.26.c:410:26: error: ‘j’ undeclared (first use in this function)
  410 |         printf("j %d\n", j);
      |                          ^
string28.7.26.c:410:26: note: each undeclared identifier is reported only once for each function it appears in
*/

/*
In your code, i is declared in the outer block so it’s visible everywhere in main().
But j is declared inside the inner block, so it goes out of scope after the block ends and cannot be accessed outside
*/
#endif

#if 0

int main()
{
	int j = 10;

	{
		int j = 0;

		printf("j %d\n", j);
	}

	printf("j %d\n", j);

	return 0;
}
#endif

#if 0
int main()
{
		int i = 10;//redefination of i
//only onetime deifnation is occur
		int i = 20;

		{
				printf("i %d\n", i);
		}

		printf("i %d\n", i);

		return 0;
}
#endif

#if 0

int main()
{
	register int i = 0;

	scanf("%d", &i);
	printf("i %d\n", i);

	return 0;
}

/*
you cannot take the address of a register variable, because registers don’t have a memory address in the usua
*/
#endif

#if 0

int main()
{
	register int i = 10;
	register int *j = &i;//This line will never compile successfully, since j cannot be assigned &i.

	printf("*j %d\n", *j);

	return 0;
	}
	//cannot take the address of a register variable.
#endif

#if 0
int main()
{
	int i = 10;
	register int *j = &i;

	printf("*j %d\n", *j);

	return 0;
	}
#endif

#if 0
//static local variable

int *foo()
{
	static int i = 10;
	int *j = &i;

	return j;
}

int main()
{
	int *i;

	i = foo();
	printf("*i %d\n", *i);

	return 0;
}


#endif

#if 0

char *foo()
{
	static char ca[12] = "Hello World";

	return ca;
}

int main()
{
	char *ca;

	ca = foo();
	printf("ca is %s\n", ca);

	return 0;
}
#endif

#if 0

int book_ticket()
{
		static	int ticket_sold = 0;

		ticket_sold++;

		return ticket_sold;
}

int main()
{
		int count;

		count = book_ticket();
		count = book_ticket();

		printf("Sold %d\n", count);

		return 0;
}
#endif

#if 0

int main()
{
		static int i = 5;

		if (--i)
		{
				main();
		}

		printf("i %d\n", i);

		return 0;
}
#endif

#if 0

int main()
{
	static int i = 5;

	if (--i)
	{
		return main();
	}

	printf("i %d\n", i);

	return 0;
}
#endif

#if 0

int foo()
{
	static int i;

	return i;
}

int main()
{
	static int	x = foo();// initializer element is not constant
	printf("x %d\n", x);

	return 0;
}
#endif

#if 0
int *foo()
{
	static int i = 10;
	int *j = &i;

	return j;
}

int main()
{
	int *i;

	i = foo();
	printf("*i %d\n", *i);

	return 0;
}
#endif

#if 0

int *foo()
{
	int i = 10;
	static int *j = &i ;// initializer element is not constant
	return j;
}

int main()
{
	int *i;

	i = foo();
	printf("*i %d\n", *i);

	return 0;
}
#endif


