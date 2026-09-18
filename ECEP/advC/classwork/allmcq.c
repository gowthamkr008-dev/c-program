#if 0
#include <stdio.h>

int main() {
    unsigned int u = 5;
    int i = -10;
    if (i > u) {
        printf("i is greater\n");
    } else {
        printf("u is greater or equal\n");
    }
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                break;
            }
            printf("%d%d ", i, j);
        }
    }
    printf("\n");
    return 0;
}
#endif

#if 1

#endif