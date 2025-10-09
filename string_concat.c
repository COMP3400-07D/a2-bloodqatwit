#include <stddef.h> // For NULL

/**
 * Put src2 into src1 with out exceeding src1_cap
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src2 == NULL || src1_cap <= 0) return;

    int len1 = 0;
    while (src1[len1] != '\0' && len1 < src1_cap) {
        len1++;
    }

    int i = 0;
    while (src2[i] != '\0' && len1 + i < src1_cap - 1) {
        src1[len1 + i] = src2[i];
        i++;
    }
    src1[len1 + i] = '\0';
}

