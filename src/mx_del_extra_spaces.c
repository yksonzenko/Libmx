#include <libmx.h>

char *mx_del_extra_spaces(const char *str) {
    char *str2 = mx_strtrim(str);
    char *str3 = (char *) malloc(mx_strlen(str2));
    int j = 0;

    if (!str)
        return NULL;
    for (int i = 0; str2[i] != '\0'; i++) {
        if (!mx_isspace(str2[i])) {
            str3[j] = str2[i];
            j++;
        }
        else if (mx_isspace(str2[i]) && !mx_isspace(str2[i + 1])) {
            str3[j] = ' ';
            j++;
        }
    }
    str3 = (char *)realloc(str3, mx_strlen(str3) + 1);
    free(str2);
    return str3;
}
