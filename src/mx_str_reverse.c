#include "libmx.h"

int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
	int length = mx_strlen(s) - 1;
	int half = length / 2;
	
		for (int i = 0; i <= half; length--) {
			mx_swap_char(&s[length], &s[i]);
			i++;
		}
}
