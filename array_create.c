#include <stddef.h> 
#include <stdlib.h> For NULL
// TODO: Include any necessary header files here

/**
 * Creates a new dynamically allocated array with evens in range
 */
int* array_create_evens(int begin, int end) {
    if (begin > end) return NULL;

    if (begin % 2 != 0) begin++;
    if (begin > end) return NULL;

    int count = ((end - begin) / 2) + 1;
    int *arr = malloc(sizeof(int) * count);
    if (arr == NULL) return NULL;

    int val = begin;
    for (int i = 0; i < count; i++, val += 2) {
        arr[i] = val;
    }
    return arr;
}
