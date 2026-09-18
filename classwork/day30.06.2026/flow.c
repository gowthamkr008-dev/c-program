#include<stdio.h>

#if 0

int main(){
	char ch = 127;
		ch = ch + 45;
		printf("ch: %d\n",ch);
}
//o/p -84
#endif



#if 0

int main(){
        char ch = -127;
                ch = ch -45;
                printf("ch: %d\n",ch);
}
//ch: 84
#endif



#if 0

int main(){
        int num = -1;
        printf("4byte : %u",num);//: 4294967295
	  printf("2byte : %hu",num);//65535
	   printf("1byte : %hhu",num);//255
}
/*
 4byte : 42949672952byte : 655351byte : 255
 */
#endif



#if 1

int main(){
       unsigned long int num = -1;

       printf("8byte : %lx\n",num);//: use to print hexadecimal value
				   //
				   //
         printf("8byte : %lu\n",num);//: 4294967295
	printf("4byte : %u\n",num);//: 4294967295
          printf("2byte : %hu\n",num);//65535
           printf("1byte : %hhu\n",num);//255
}
/*
 *
 * 8byte : 4294967295
4byte : 4294967295
2byte : 65535
1byte : 255
 */
#endif
