#include <stddef.h> // For NULL
#include <stdbool.h>
#include <ctype.h>

/**
 * Sets rules for minimum password requirements
 */
bool valid_password(const char* s) {
    if (s == NULL) return false;

    int len = 0, lower = 0, upper = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (!isalnum(c)) return false;
        if (islower(c)) lower++;
        if (isupper(c)) upper++;
        len++;
    }

    if (len < 6 || len > 10) return false;
    if (lower < 2 || upper < 2) return false;

    return true;
}
