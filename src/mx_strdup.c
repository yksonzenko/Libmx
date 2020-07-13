#include "libmx.h"

char *mx_strdup(const char *str) {
	int n = mx_strlen(str);
	char *str2 = mx_strnew(n);
	mx_strcpy(str2, str);
	return str2;
}
