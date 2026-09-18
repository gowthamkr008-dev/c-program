#include <stdio.h>

int main() {
    int num, remainder;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Validate if the number is positive
    if (num <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 0;
    }

    printf("Reversed number: ");

    // Loop runs until all digits are processed
    while (num > 0) {
        remainder = num % 10;      // Extracts the last digit
        printf("%d", remainder);    // Prints the digit immediately
        num = num / 10;            // Removes the last digit from the number
    }

    printf("\n");
    return 0;
}
