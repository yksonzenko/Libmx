#include "libmx.h"

void mx_del_strarr(char ***arr) {
    char **ttt = &(**arr);
    int count = 0;

    if (arr) {
        while (ttt[count]) {
            free(ttt[count]);
            count++;
        }
        free(ttt);
        ttt = NULL;
    }
}
