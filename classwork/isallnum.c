#include <stdio.h>
#include <ctype.h>

int main() {
    char test[] = "Hello123!@#";
    
    printf("Checking if characters are alphanumeric:\n");
    for (int i = 0; test[i] != '\0'; i++) {
        if (isalnum(test[i])) {
            printf("'%c' is alphanumeric\n", test[i]);
        } else {
            printf("'%c' is NOT alphanumeric\n", test[i]);
        }
    }
    
    return 0;
}
