#include<stdio.h>

#if 0

//pass by value

void modify(int num){
	num =num+1;
}

int main(){
	int num =10;
	printf("Before Num : %d\n",num);
        modify(num);
	printf("After num : %d\n",num);


	return 0;
} 


// pass by value
// actual paramenter pass or copy to formal parameter of the function
// changes or modification to formal parameter will not affect the actual parameter
// 
// stack.c:11:14: error: void value not ignored as it ought to be
// 11 |          num =  modify(num);
//    |              ^
//
//



/*
 Before Num : 10
After num : 10
 */
#endif


#if 0
//passby value
int modify(int num){
        num =num+1;

	return num;
}



int main(){
        int num =10;
        printf("Before Num : %d\n",num);
        num = modify(num);
        printf("After num : %d\n",num);


        return 0;
}


/*
 Before Num : 10
After num : 11
 */
#endif



#if 1
//passby value
int modify(int num1,int num2){
        num1 =num1+1;
	num2 = num2+1;
        return num1,num2;
}



int main(){
        int num1 =10,num2 =20;
        printf("Before Num1 : %d\n",num1);
	printf("Before Num2 : %d\n",num2);
        num1,num2 = modify(num1,num2);
        printf("After num1 : %d\n",num1);
	printf("After Num2 : %d\n",num2);

        return 0;
}


/*
Before Num1 : 10
Before Num2 : 20
After num1 : 10
After Num2 : 21
*/
#endif
