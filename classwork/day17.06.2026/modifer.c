#if 0

#include<stdio.h>
int main(){
	short int count1;
	long int count2;
	short count3;
	printf("short int : %zu\n",sizeof(short int));    //4
	printf("long int : %zu\n", sizeof(long int));    //4/8 compiller dependent gcc is 8bits
	printf("short : %zu\n", sizeof(short));         //2
	return 0;
}
#endif

#if 0

#include<stdio.h>
int main(){
	unsigned int count1;
	signed int count2;
	unsigned char count3;
	signed char count4;

	printf("size of count1 : %zu\n",sizeof(unsigned int));
	 printf("size of count2 : %zu\n",sizeof(signed int));
	  printf("size of count3 : %zu\n",sizeof(unsigned char));
	   printf("size of count4 : %zu\n",sizeof(signed char));
		return 0;
}
#endif


#if 0
#include<stdio.h>
int main(){
	unsigned int count1 =10;
	 signed int count2 =-1;

	 if(count1>count2){
		 printf("yes\n");
	 }
	 else
	 {
		 printf("no\n");
	 }
	 return 0;
}


// out put of the program is no
#endif



#if 0
#include<stdio.h>
int main(){
        int count1 =10;
        int count2 =-1;

         if(count1>count2){
                 printf("yes\n");
         }
         else
         {
                 printf("no\n");
         }
         return 0;
}


//output of the program is the yes
#endif





#if 1

//explicite type casting
#include<stdio.h>

int main(){
        unsigned int count1 =10;
         signed int count2 =-1;

         if((signed)count1>count2){
                 printf("yes\n");
         }
         else
         {
                 printf("no\n");
         }
         return 0;
}
// output of the program  is the yes
#endif


#if 






