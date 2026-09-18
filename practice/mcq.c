#include <stdio.h>
struct MyStruct {
char b;
double c;
char d;

};

struct MyStruct1{
char b;
double c;
char d;

};
struct MyStruct3{
char b;
int c;
char d;

};
int main() {
    printf("my struct %zu\n", sizeof(struct MyStruct));
     printf("my struct 1%zu\n", sizeof(struct MyStruct1));
      printf("my struct 2%zu\n", sizeof(struct MyStruct3));
    return 0;
}
//why change the size in different  