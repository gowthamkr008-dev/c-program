#if 1
#include<stdio.h>
int main(){
        int num;

        scanf("%d",&num);

        getchar;

        int result = 0;
        int copy = num;
        int org = num;//1456
        do{
                num = num % 10;    //l1 = 6
                copy = copy / 10;//l1 1
                           result = (result*10)+num;
                           num = copy;
        }while(num>0);

        if(org == result)
                printf("The given number is palandrome");
        else
                printf("The given number is not a palandrome");
        return 0;
}
#endif

