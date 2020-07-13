#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *s2 = mx_strnew(n);
    for (size_t c = 0; c < n; c++) {
        s2[c] = s1[c];
    }
    return s2;
}
