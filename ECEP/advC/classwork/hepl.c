// #include <stdio.h>

// // Define HELP at compile time if you want help enabled
// // #ifdef HELP
// void show_help(void) {
//     printf("Usage: ./a.out [options]\n");
//     printf("Options:\n");
//     printf("  --help   Show this help message\n");
// }
// // #endif

// int main(void) {
// #ifdef HELP
//     show_help();   // This will only compile if HELP is defined
// #else
//     printf("Program running normally...\n");
// #endif
//     return 0;
// }


#include <stdio.h>
#include <string.h>

void view(void) { printf("view called\n"); }
void edit(void) { printf("edit called\n"); }
void help(void) { printf("help called\n"); }

/* Preprocessor macro that expands into the real main(argc, argv),
   but dispatches automatically before your code runs */
#define main(void) \
    real_main(int argc, char *argv[]); \
    int main(int argc, char *argv[]) { \
        if (argc > 1) { \
            if (strcmp(argv[1], "--help") == 0) { help(); return 0; } \
            if (strcmp(argv[1], "--view") == 0) { view(); return 0; } \
            if (strcmp(argv[1], "--edit") == 0) { edit(); return 0; } \
        } \
        return real_main(argc, argv); \
    } \
    int real_main(void)

int main()
{
    printf("no matching option, running default program\n");
    return 0;
}