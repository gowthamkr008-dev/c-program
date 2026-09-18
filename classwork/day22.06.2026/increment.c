

#if 0
#include<stdio.h>
int main(){
	int x =10;//decleare a variables
	int y;
	//increment using post increment
	y=x++;
	//printf the x & y value
	printf("%d\n",x);
	printf("%d\n",y);

return 0;
}


//output is 
//11
//10
#endif


#if 0
#include<stdio.h>
int main(){
        int x =10;//decleare a variables
        int y;
        //increment using pre increment
        y=++x;
        //printf the x & y value
        printf("%d\n",x);
        printf("%d\n",y);

return 0;
}


//output is
//11
//11
#endif

#if 0
#include<stdio.h>
int main(){
        int x =0;//decleare a variables
        int y;
        //increment using post increment if it true print true
        if(x++){//the value of the condition is 0 then next line is 1
        //printf the x
        printf("true %d\n",x);
	}
	else{
		//print the value of x
		printf("false %d\n",x);
	}
return 0;
}


//output is
//true 1
#endif

#if 1
#include<stdio.h>
int main(){
        int x =0;//decleare a variables
        //increment using post increment if it true print true
        if(++x){
		//the value of the condition is_1 the output true_1
        //printf the x
        printf("true %d\n",x);
        }
        else{
                //print the value of x
                printf("false %d\n",x);
        }
return 0;
}


//output is
//true1
#endif 
