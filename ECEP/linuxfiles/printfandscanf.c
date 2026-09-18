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
    printf("Enter your height in feet");
    scanf("%f", &height);
    printf("Enter your latitude & longitude of your address");
    scanf("%lf", &latitude);
    scanf("%lf", &longitude);
    
    printf("here what you have entered :");
    Printf("first Letter in name : %c\n", name_letter);
    printf("Pincode : %d\n",pincode);
    printf("Height : %f\n ",height);
    printf("location : %lf \n",latitude );
    
    return 0;
}
