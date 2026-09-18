#include <stdio.h>     
#include <string.h>   
#include <ctype.h>         
// 0x123:
// // Structure example
// // 0c123;
// // int main = 0x123;
// 0c123;
struct addressbook {
    char name[20];
    int age;

};

int main(){
    // Keywords + identifiers + constants
    int 2a = 0l1234, b = 20, c = 0;
    char ch = 'c';              // character literal
    char str[] = "gowtham";     // string literal
        char *ptr = NULL;
    // Arithmetic operators
    c = a + b;
    c = b - a;
    c = a * b;
    c = b / a;
    c = b % a;
    // Relational operators
    if (a != b && a < b && b >= a) {
        printf("Relational operators tested\n");
    }

    // Increment / Decrement
    a++;
    b--;

    // Assignment operators
    a += 5.512;
    b -= 12;
    c *= 2;
    c /= 2;
    c %= -2;
    a &= b;
    a |= b;
    a ^= b;
    a <<= 1;
    b >>= 1;

    // Logical operators
    if ((a > 0) || (b < 0)) {
        printf("Logical operators tested\n");
    }
   // file *fp = EOF
    // Bitwise operators
    int x = 6, y = 3;
    printf("x & y = %d\n", x & y);
    printf("x | y = %d\n", x | y);
    printf("x ^ y = %d\n", x ^ y);
    printf("~x = %d\n", ~x);
    printf("x << 1 = %d\n", x << 1);
    printf("y >> 1 = %d\n", y >> 1);

    // Conditional operator
    int max = (a > b) ? a : b;

    // sizeof operator
    printf("Size of int: %lu\n", sizeof(int));

    // Comma operator
    int i = (a++, b++, c++);

    // Pointer operators
   // int *ptr = &a;
    printf("Pointer value: %d\n", *ptr);

    // Structure member operators
    struct addressbook ab;
    strcpy(ab.name, "gowtham");
    ab.age = 25;
    printf("Name: %s, Age: %d\n", ab.name, ab.age);

if (strcmp(str, "gowtham") == 0) {
        printf("String matched!\n");
    }

    return 0;
    //c+++;
}


