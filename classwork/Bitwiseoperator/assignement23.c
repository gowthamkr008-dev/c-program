#include<stdio.h>
#define SWAP(type,x,y)\ {\           
   type temp = x; \
        x  = y;  \
        y =temp; \
}

int main(){
    int choice;
    int num1,num2;
    scanf("%d",&choice);
    switch(choice){
        case 1: 
            num1,num2;
            scanf("%d",&num1);
            scanf("%d",&num2);
            printf("%d\n", SWAP(int,num1,num2) );
            printf("num1: %d\nnum2: %d\n",num1,num2);
        break;
    }
}