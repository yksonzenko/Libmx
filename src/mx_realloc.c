#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *str = NULL;
    size_t len = 0;

    if (ptr && size < 0) {
        free(ptr);
        return NULL;
    }
    if (ptr && size == 0) {
        free(ptr);
        return malloc(0);
    }
    if (!ptr && size)
        return malloc(size);
    len = mx_strlen(ptr);
    if (size < len) {
        str = malloc(len);
        mx_memmove(str, ptr, len);
    }
    else {
        str = malloc(size);
        mx_memmove(str, ptr, size);
    }
    free(ptr);
    return str;
}
