#include<stdio.h>


#if 0
void modify(int *ptr){

	*ptr = *ptr+1;//affect the value at the address 
}

int main(){
	int num = 10;

	printf("Before modification : %d",num);
	modify(&num);//send the address to the function
	printf("Before modification : %d",num);



	return 0;
}

//Before modification : 10
//Before modification : 11
#endif

#if 0
void modify(int *num1 ,int *num2){

        *num1 = *num1+1;//affect the value at the address
	*num2 =*num2+1;


}

int main(){
        int num1 = 10;
	int num2 =20;

        printf("Before modification :num1= %d\n num2 = %d\n",num1,num2);
        modify(&num1,&num2);//send the address to the function
        printf("Before modification :num1 =%d \nnum2 = %d",num1,num2);



        return 0;
}


/*
 gowtham@GowthamKR:~/cprogram/classwork/pointer/passbyreference$ ./a.out
Before modification :num1= 10
 num2 = 20
Before modification :num1 =11
num2 = 21
*/

#endif





#if 1
void modify(int *num1 ,int *num2){

	long long int *temp = *num1;
	
        *num1 = *num2;    
	*num2 = *temp;



	/*

	   without temp

	   *num1 =   *num1 + *num2;
	    *num2 =  *num1 - *num2;
	     *num1 = *num1 - *num2;
	 */


}

int main(){
        int num1 = 10;
        int num2 =20;

        printf("Before modification :\nnum1= %d\n num2 = %d\n",num1,num2);
        modify(&num1,&num2);//send the address to the function
        printf("after modification :\nnum1 =%d \nnum2 = %d\n",num1,num2);
        return 0;
}


/*

  swapping the 2 number 
Before modification :
num1= 10
 num2 = 20
after modification :
num1 =20
num2 = 10
*/

#endif
