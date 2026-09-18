#include <stdio.h>

int main() {
    int num;
    printf("Enter a number (decimal or hex with 0x): ");
    scanf("%i", &num);   // %i accepts decimal, octal (0 prefix), and hex (0x prefix)

    int result = ~num;

    printf("Input (decimal): %d\n", num);
    printf("Input (hex): %#x\n", num);
    printf("Complement (decimal): %d\n", result);
    printf("Complement (hex): %#x\n", result);

    return 0;
}

