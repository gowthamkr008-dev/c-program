#include<stdio.h>

#if 1

// little endiness
//it only change the i byte of the value



int main(){
int num = 0x12345678;
int *ip = &num;
char *cp = (char *)&num;


printf("num : %x\n",num);
printf("*ip : %x\n",*ip);
printf("*cp : %x\n",*cp);

*cp = 0x12;
printf("num : %x\n",num);
printf("*ip : %x\n",*ip);
printf("*cp : %x\n",*cp);
return 0;
}


/*

endiness.c: In function ‘main’:
endiness.c:5:10: warning: initialization of ‘char *’ from incompatible pointer type ‘int *’ [-Wincompatible-pointer-types]
    5 | char *cp=&num;
      |          ^




num : 12345678
*ip : 12345678
*cp : 78
num : 12345612
*ip : 12345612
*cp : 12
*/


#endif
