#include <stdio.h>
#include <ctype.h>

int main(){
    printf("%d\n", isxdigit('5'));    // 1 (true) - digit
    printf("%d\n", isxdigit('A'));    // 1 (true) - hex letter
    printf("%d\n", isxdigit('f'));    // 1 (true) - hex letter
    printf("%d\n", isxdigit('G'));    // 0 (false) - not hex
    printf("%d\n", isxdigit('Z'));    // 0 (false) - not hex
    printf("%d\n", isxdigit(' '));    // 0 (false) - space
    
    return 0;
}