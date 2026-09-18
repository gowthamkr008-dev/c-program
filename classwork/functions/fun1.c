#if 0

#include<stdio.h>
int add_number(int,int); // specification 



int main(){ //main function



	int n1 =10,n2 = 20;

	int sum =0; 
	  
	  v<-------------------------------------------------------|
	sum = add_number(n1,n2); // function call -----------|     |
	printf("%d",sum);                                    |     |
	return 0;                                            |     |  
}                                                            |     |
int add_number(int n1,int n2){ //function defination<--------|     |
	int s =0;                                                  |
	s = n1 + n2;                                               | 
	return s; //value go to the where function call------------|
}
// o/p 30
#endif





#if 0

#include<stdio.h>
//int add_number(int,int);//program run without decleration


int main(){



        int n1 =10,n2 = 20;

        int sum =0;
        sum = add_number(n1,n2);
        printf("%d",sum);
        return 0;
}


int add_number(int n1,int n2){

        int s =0;
        s = n1 + n2;
        return s;
}

#endif





#if 0

#include<stdio.h>
//int add_number(int,int);//program run without decleration


int main(){



       float n1 =15.976,n2 = 12.65;

        float sum =0;
        sum = add_number(n1,n2);
        printf("%f",sum);
        return 0;
}


float add_number(float n1,float n2){

        float s =0;
        s = n1 + n2;
        return s;
}
/*
fun1.c: In function ‘main’:
fun1.c:78:15: warning: implicit declaration of function ‘add_number’ [-Wimplicit-function-declaration]
   78 |         sum = add_number(n1,n2);
      |               ^~~~~~~~~~
fun1.c: At top level:
fun1.c:83:2: error: expected ‘;’ before ‘float’
   83 | i
      |  ^
      |  ;
   84 | float add_number(float n1,float n2){
      | ~~~~~
fun1.c:84:7: error: conflicting types for ‘add_number’; have ‘float(float,  float)’
   84 | float add_number(float n1,float n2){
      |       ^~~~~~~~~~
fun1.c:78:15: note: previous implicit declaration of ‘add_number’ with type ‘int()’
   78 |         sum = add_number(n1,n2);
      |               ^~~~~~~~~~

	      */
#endif




#if 1

#include<stdio.h>
int add_number(int,int);//program run without decleration


int main(){



       int n1 =10,n2 = 15;

       int sum =0;
        
        printf("%d",add_number(n1,n2));
        return 0;
}


int add_number(int n1,int n2){
return n1 + n2;

}

#endif
