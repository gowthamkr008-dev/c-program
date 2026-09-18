#include<stdio.h>
#include<ctype.h>

int main( {
    char ch1 = 'a';
    char ch2 = '4';
    
    printf("%d %d",isdigit(ch1),isdigit(ch2));
    return 0;
}