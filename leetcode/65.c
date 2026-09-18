#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isNumber(char* s) {
    int i = 0;
    int flag = 0;       // tracks if we’ve seen valid digits
    int seenDot = 0;    // tracks decimal point
    int seenExp = 0;    // tracks exponent

    // trim leading spaces
    while (s[i] == ' ') i++;

    // optional sign at start
    if (s[i] == '+' || s[i] == '-') i++;

    while (s[i] != '\0') {
        if (isdigit(s[i])) {
            flag = 1; // digit found
        }
        else if (s[i] == '.') {
            if (seenDot || seenExp) return false; // only one dot, not after exponent
            seenDot = 1;

            // must have digit before or after dot
            if (!( (i > 0 && isdigit(s[i-1])) || (s[i+1] != '\0' && isdigit(s[i+1])) )) {
                return false;
            }
        }
        else if (s[i] == 'e' || s[i] == 'E') {
            if (seenExp || !flag) return false; // only one exponent, must follow digit
            seenExp = 1;
            flag = 0; // reset, must see digits after exponent

            // optional sign after exponent
            if (s[i+1] == '+' || s[i+1] == '-') i++;
            if (s[i+1] == '\0') return false; // must have digit after exponent
        }
        else if (s[i] == '+' || s[i] == '-') {
            // sign only valid at start or right after exponent
            if (!(i == 0 || s[i-1] == 'e' || s[i-1] == 'E')) return false;
        }
        else if (s[i] == ' ') {
            // trim trailing spaces
            while (s[i] == ' ') i++;
            if (s[i] != '\0') return false; // spaces only allowed at end
            break;
        }
        else {
            return false; // invalid character
        }
        i++;
    }
    return flag == 1;
}

int main() {
    char* tests[] = {
        "2", "0089", "-0.1", "+3.14", "4.", "-.9",
        "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789",
        ".", "e9", "1e", " "
    };
    int n = sizeof(tests)/sizeof(tests[0]);

    for (int i = 0; i < n; i++) {
        printf("\"%s\" -> %s\n", tests[i], isNumber(tests[i]) ? "Valid" : "Invalid");
    }
    return 0;
}
