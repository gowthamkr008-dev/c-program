#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

int main(void)
{
    int i = -42;
    unsigned int u = 42u;
    long l = -42000000000L;
    unsigned long ul = 42000000000UL;
    long long ll = -4200000000000000000LL;
    unsigned long long ull = 4200000000000000000ULL;
    short s = -32000;
    unsigned short us = 65000;
    char c = 'A';
    const char *str = "Hello, format specifiers!";
    void *ptr = (void *)&i;
    float f = 3.14159f;
    double d = 2.718281828459045;
    long double ld = 1.618033988749894848L;
    int count = 0;

    printf("%%d  : signed int          = %d\n", i);
    printf("%%i  : signed int          = %i\n", i);
    printf("%%u  : unsigned int        = %u\n", u);
    printf("%%o  : unsigned octal      = %o\n", u);
    printf("%%x  : unsigned hex lower  = %x\n", u);
    printf("%%X  : unsigned hex upper  = %X\n", u);
    printf("%%f  : float / double     = %f\n", d);
    printf("%%F  : float / double     = %F\n", d);
    printf("%%e  : scientific lower   = %e\n", d);
    printf("%%E  : scientific upper   = %E\n", d);
    printf("%%g  : shorter of %%f/%%e = %g\n", d);
    printf("%%G  : shorter of %%F/%%E = %G\n", d);
    printf("%%a  : hex float lower    = %a\n", d);
    printf("%%A  : hex float upper    = %A\n", d);
    printf("%%c  : character         = %c\n", c);
    printf("%%s  : string            = %s\n", str);
    printf("%%p  : pointer           = %p\n", ptr);
    printf("%%%%  : literal percent  = %%\n");

    printf("%%hd : short int         = %hd\n", s);
    printf("%%hu : unsigned short    = %hu\n", us);
    printf("%%ld : long int          = %ld\n", l);
    printf("%%lu : unsigned long     = %lu\n", ul);
    printf("%%lld: long long int     = %lld\n", ll);
    printf("%%llu: unsigned long long= %llu\n", ull);
    printf("%%zd : size_t            = %zd\n", (size_t)u);
    printf("%%td : ptrdiff_t         = %td\n", (ptrdiff_t)-1);
    printf("%%jd : intmax_t          = %jd\n", (intmax_t)ll);
    printf("%%ju : uintmax_t         = %ju\n", (uintmax_t)ull);

    printf("field width/precision examples:\n");
    printf("  %%10d = %10d\n", i);
    printf("  %%.5f = %.5f\n", d);
    printf("  %%10.3e = %10.3e\n", d);
    printf("  %%-10s = %-10s\n", str);

    printf("%%n  : bytes written so far = ");
    printf("%d\n", printf("intermediate output\n") , &count);
    printf("Bytes written reported by %%n may vary   = %d\n", count);

    return 0;
}

