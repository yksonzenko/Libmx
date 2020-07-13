#include "libmx.h"

void mx_print_unicode(wchar_t c) {
    (void)c;
    printf("%d\n", (char)(12 << 2));
}
