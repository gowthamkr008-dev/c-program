#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char ch;
    char str[20];
    int arr[3];

    printf("Enter int: ");
    scanf("%d", &a);//store a integer valuse

    printf("Enter float: ");
    scanf("%f", &b);//store the float value

    printf("Enter double: ");
    scanf("%lf", &c);//store double variable

    printf("Enter char: ");
    scanf(" %c", &ch);//store a character

    printf("Enter string: ");
    scanf("%s", str); // store a string

    printf("Enter 3 integers: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }//store a set of integer number

    printf("\nYou entered:\n");
    printf("int = %d\n", a);
    printf("float = %.2f\n", b);
    printf("double = %.2lf\n", c);
    printf("char = %c\n", ch);
    printf("string = %s\n", str);

    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;


    /*
    take a i/p as a character to store in as per given format specifier
    
    
    */
}