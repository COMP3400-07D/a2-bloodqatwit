#include <stddef.h> // For NULL

/**
 * fill dest with repeated characters
 */
void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0) return;

    int fill_len = dest_cap - 1;
    for (int i = 0; i < fill_len; i++) {
        dest[i] = c;
    }
    dest[fill_len] = '\0';
}
