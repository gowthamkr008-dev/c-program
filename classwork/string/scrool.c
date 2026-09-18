#include <stdio.h>
#include <string.h>

void delay() {
    // crude delay loop (adjust for speed)
    for (long i = 0; i < 10000000; i++) {
        // empty loop
    }
}

int main() {
    char msg[] = "HELLO WORLD             ";
    int len = strlen(msg);
    int step = 0;

    // Super loop: runs forever
    while (1) {
        // Print rotated message (left scroll)
        for (int i = 0; i < len; i++) {
            putchar(msg[(i + step) % len]);
        }
        putchar('\r');   // overwrite line
        step++;          // move one step
        if (step >= len) step = 0;  // wrap around
    }

    return 0;
}

