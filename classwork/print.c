#include<stdio.h>
int main(){
    char name_letter;
    int pincode;
    float height;
    double latitude, longitude;


    printf("Enter firstletter of your name :");
    scanf("%c", &name_letter);
    printf("Enter your Pincode :");
    scanf("%d", &pincode);
    printf("Enter your height in feet :");
    scanf("%f", &height);
   printf("enter your latitude and longitude of your address :");
    scanf("%lf  %lf", &latitude , &longitude);

    printf("here what you have entered : \n");
    printf("first Letter in name : %c\n", name_letter);
    printf("Pincode : %d\n",pincode);
    printf("Height : %f\n ",height);
    printf("location : %lf  %lf\n",latitude ,longitude );

    return 0;
}
