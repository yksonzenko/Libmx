#include "libmx.h"

char *mx_file_to_str(const char *file) {
	int any_file;
	char buffer;
	int i = 0;
	int length = 0;

	any_file = open(file, O_RDONLY);
		if(any_file == -1) {
			return NULL;
		}
		while(read(any_file, &buffer, 1)) {
			length++;
		}
			close(any_file);

	any_file = open(file, O_RDONLY);
		char *string = mx_strnew(length);
		while(read(any_file, &buffer, 1)) {
			string[i] = buffer;
			i++;
		}
	close(any_file);
			return string;

	return NULL;
}
