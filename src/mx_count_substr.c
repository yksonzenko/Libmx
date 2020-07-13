#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count_substr = 0;

    if (str == NULL || sub == NULL)
        return -1;
    if (mx_strlen(sub) <= 0)
        return 0;
    for (int i = 0; i < mx_strlen(str); i++) {
        if (mx_strstr(str + i, sub) == str + i)
            count_substr++;
            //to start after first matching
            i = i + mx_strlen(sub) - 1;
    }
        return count_substr;
}
