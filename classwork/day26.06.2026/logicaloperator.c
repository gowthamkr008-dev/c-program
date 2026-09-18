#include<stdio.h>

#if 0
int main(){

	int num1=1,num2=0;
		if(++num1|| ++num2)
	printf("%d%d",num1,num2);
	
	

if(num1++&&++num2)
		printf("%d%d",num1,num2);
}

#endif



#if 0
int main(){

	int num1=1,num2=0;
	if(++num1 && ++num2)
	printf("num1: %d num2: %d",num1,num2);
	else
	printf("num1:%dnum2: %d",num1,num2);
}

#endif



#if 0
int main(){

        int num1=0,num2=0;
        if(num1++ && ++num2)
        printf("num1: %d num2: %d",num1,num2);
        else
        printf("num1:%dnum2: %d",num1,num2);
}
// num:1 num2:0
#endif



#if 0
int main(){

        int num1=0,num2=0;
        if(num1++ || ++num2)
        printf("num1: %d num2: %d",num1,num2);
        else
        printf("num1:%dnum2: %d",num1,num2);
}
//num:1 num2:1
#endif



#if 0
int main(){

        int num1=100i,num2;
	num2 = !num1;
        printf("num1: %d num2: %d",num1,num2);
       
}
//result of logical operator is 0 or 1
//the o/p is num1 =100 ,num2 =0;

#endif




#if 0
int main(){

        int num1=100,num2;
        num2 = !!!!num1;
        printf("num1: %d num2: %d",num1,num2);

}
//result of logical operator is 0 or 1
//the o/p is num1 =100 ,num2 =1;
//!!!!100
//!!!f
//!!t
//!f
//t =1;
//num2 =1   i

#endif



#if 0
int main(){

        float num =0.7;

	if(num == 0.7)
		printf("Yes it equal %f",num);
	else
		 printf("no it not equal %f",num);


}
//0.7 is not complete value
//it will store like 0.699999
//so it print else statement
//no it not equal 

#endif


#if 0 
int main(){

        float num =0.5;

        if(num == 0.5)
                printf("Yes it equal %f",num);
        else
                 printf("no it not equal %f",num);


}
//0.5 is  complete value
//it will store like 0.50000
//so it print if statement
//yes it  equal
#endif




#if 1
int main(){

        float num =0.7;
printf("%0.10f ,%.10f\n",num,0.7);
        if(num == 0.7f)
                printf("Yes it equal %f\n",num);
        else
                 printf("no it not equal %f\n",num);

	printf("%zu %zu",sizeof(0.7),sizeof(0.7f));


}
//0.5 is  complete value
//it will store like 0.50000
//so it print if statement
//yes it  equal
#endif
