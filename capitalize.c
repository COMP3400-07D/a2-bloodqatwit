#include <stddef.h> 
#include <ctype.h> 
#include <stdlib.h>
// TODO: Include any necessary header files here

/**
 * Return a string in lowercase converted to uppercase
 */
char* capitalize(const char* s) {
    if (s == NULL) return NULL;

    int len = 0;
    while (s[len] != '\0') len++;

    char *res = malloc(sizeof(char) * (len + 1));
    if (res == NULL) return NULL;

    for (int i = 0; i < len; i++) {
        if (islower(s[i])) {
            res[i] = toupper(s[i]);
        } else {
            res[i] = s[i];
        }
    }
    res[len] = '\0';
    return res;
}

