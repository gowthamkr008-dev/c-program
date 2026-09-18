#include<stdio.h>
int main(){
    float principleamount;
    float rateofintrest;
    float timeperiod;

    scanf("%f\n",&principleamount);
    scanf("%f\n",&rateofintrest);
    scanf("%f",&timeperiod);


    float month =  timeperiod/12.0;


    float simpleintrest;
    simpleintrest =  (principleamount * rateofintrest * month)/100.0;

    printf("%g\n",  simpleintrest);

    return 0;



}
