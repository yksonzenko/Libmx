#include "libmx.h"

// // for mx_hex_to_nbr
// int main(void) {
// 	printf("%lu\n", mx_hex_to_nbr("ffffff"));
// }

// //for str_join
// int main(void) {
// 	char const *str1 = "this";
// 	char const *str2 = "dodge ";
// 	char const *str3 = NULL;
// 	printf("%s\n", mx_strjoin(str2, str1));
// 	printf("%s\n", mx_strjoin(str1, str3));
// 	printf("%s\n", mx_strjoin(str3, str3));
// 	system("leaks -q a.out");
// 	return 0;
// }


//for pop_back
// int main(void) {
// 	t_list *word = mx_create_node("follow");

// 	mx_push_back(&word, "the");
// 	mx_push_back(&word, "white");
// 	mx_push_back(&word, "rabbit");

// 	mx_pop_back(&word);

// 	while(word) {
// 		printf("%s\n", word -> data);
// 		word = word -> next;
// 	}
//     system("leaks -q a.out");
// 	return 0;
// }

// //for itoa
// int main() {
//     char *test = mx_itoa(21564);
//     printf("%s\n", test);
//     return 0;
// }

// //for binary search
// int main() {
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     // char **arr = NULL;
//     int count = -11;
//     printf("place = %d\n, count = %d\n", mx_binary_search(arr, 6, "asdf", &count), count);
// }

// //for bubble sort
// int main() {
// 	// char *arr[] = {"z", "1", "c"};
//     char **arr = NULL;
// 	printf("%d\n", mx_bubble_sort(arr, 3));
// 	// char *arr[] = {"abc", "acb", "a"};
// 	// printf("%d\n", mx_bubble_sort(arr, 3));
// 	return 0;
// }


// //for mx_push_front
// int main(void) {
// 	t_list *word = mx_create_node("follow");
// 	mx_push_front(&word, "the");
// 	mx_push_front(&word, "white");
// 	mx_push_front(&word, "rabbit");
// 	while(word) {
// 		printf("%s\n", word -> data);
// 		word = word -> next;
// 	}
// 	return 0;
// }

// //for mx_push_back
// int main(void) {

// 	t_list *word = mx_create_node("follow");
// 	mx_push_back(&word, "the");
// 	mx_push_back(&word, "white");
// 	mx_push_back(&word, "rabbit");

// 	while(word) {
// 		printf("%s\n", word->data);
// 		word = word->next;
// 	}
// 	return 0;
// }


// // for mx_count_words
// int main() {
//     char str[] = "follow *     the     white     rabbit";
//     //printf("%d\n", mx_count_words(str, '*'));
//     printf("%d\n", mx_count_words(str, ' '));
// }

// //main for quicksort
// int main() {
//     char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
//     printf("%d\n", mx_quicksort(arr, 0, 3));
//     printf("%s\n", arr[0]);
//     printf("%s\n", arr[1]);
//     printf("%s\n", arr[2]);
//     printf("%s\n", arr[3]);
//     return 0;
// }

// //main for mx_strndup
// int main() {
//     char source[] = "asdfasdf";
//     char *target = mx_strndup(source, 40);
//     printf("%s", target);
//     // system("leaks -q a.out");
//     return 0;
// }

// //main for mx_strncpy
// int main() {
// 	const char ns1[10] = "Follow me";
// 	char ns2[4];
// 	printf("%s\n", mx_strncpy(ns2, ns1, 3));
// 	return 0;
// }

// //main for mx_strstr
// int main() {
//     const char s1[] = "1234567345";
//     const char *s2 = "345";
//     //printf("%s\n", strstr(s1, s2));
//     printf("%s\n", mx_strstr(s1, s2));
//     // printf("%s\n", s1);
// }

// // //main for mx_strncmp
// int main() {
// 	printf("%d", mx_strcmp("1234567", "345"));
// }

// //main for mx_get_substr_index
// int main() {
//     printf("%d\n", mx_get_substr_index("McDonalds", "Don"));
//     printf("%d\n", mx_get_substr_index("McDonalds Donuts", "on"));
//     printf("%d\n", mx_get_substr_index("McDonalds", "Donatello"));
//     printf("%d\n", mx_get_substr_index("McDonalds", NULL));
//     printf("%d\n", mx_get_substr_index(NULL, "Don"));
//     printf("%d\n", mx_get_substr_index("MconDonalds Donuts", "ona"));
// }

// //for mx_count_substr
// int main() {
//     const char str[] = "yo, yo, yo Neo";
//     const char sub[] = "yo";
//     printf("%d\n", mx_count_substr(str, sub));
//     // printf("%d\n", mx_count_substr(str, NULL));
//     // printf("%d\n", mx_count_substr(NULL, sub));
// }

// //for mx_strtrim
// int main() {
//     const char name[] = "\f   My name... is Neo    \t\n";
//     char *dd = mx_strtrim(name);
//     printf("%s\n", dd);
//     system("leaks -q a.out");
// }

// //for mx_del_extra_spaces
// int main() {
//     const char name[] = "\f   My name...\tis  \r Neo    \t\n";
//     char *dd = mx_del_extra_spaces(name);
//     printf("%s\n", dd);
//     system("leaks -q a.out");
// }

// //for mx_strsplit
// int main() {
//     const char s[] = "**Good** bye,* *Mr.*      *Anderson**";
//     char **arr = mx_strsplit(s, '*');
//     // char **arr = mx_strsplit("*************", '&');
//     // const char s[] = "     Knock, knock,    Neo.   "
//     // char arr = mx_strsplit(s, ' ');
//     // printf("%s\n", arr);
//     int x = 0;
//     while (arr && arr[x] != NULL) {
//         printf("%s\n", arr[x]);
//         x++;
//     }
//     system("leaks -q a.out");
// }

// //for mx_replace_substr
// int main() {
//     // const char str[] = "1234123164";
//     const char str[] = "1133";
//     // const char *str = NULL;
//     const char sub[] = "133";
//     // const char *sub = NULL;
// 	const char replace[] = "7";
//     // const char *replace = NULL;
//     printf("%s\n", mx_replace_substr(str, sub, replace));
// 	// system("leaks -q a.out");
// }

// //for mx_memset
// int main() {
//     char *str = mx_strnew(10);
//     // char *str = NULL;
//     mx_memset(str, 33, 10);
//     // memset(str, 33, 10);
//     printf("%s\n", str);
//     return 0;
// }

// //for mx_memcpy
// int main() {
//     unsigned char src[] = "1234567890";
//     // unsigned char *src = NULL;
//     unsigned char dst[] = "0000000000";
//     mx_memcpy(dst, src, 5);
//     // memcpy(dst, src, 1);
//     printf("%s\n", dst);
//     // system("leaks -q a.out");
// }

// //for mx_memccpy
// int main() {
// 	char *sourse = mx_strnew(6);
// 	sourse = "abcdifg";
// 	int num = 8;
// 	int stop = 100;
// 	char *input = mx_strnew(num);
// 	mx_memccpy(input, sourse, stop, num);
// 	printf("%s\n", input);
// 	return 0;
// }

// //for mx_memcmp
// int main() {
// 	const char *s1 = mx_strnew(3);
// 	s1 = "153333333333333333333333333";
//     // s1 = "";
//     // s1 = NULL;
// 	int num = 3;
// 	const char *s2 = mx_strnew(num);
//     s2 = "1c3";
//     // s2 = NULL;
// 	printf("%d\n", mx_memcmp(s1, s2, num));
// 	return 0;
// }

// //for mx_memchr
// int main() {
// 	const unsigned char s[10] = "123456789";
//     // s1 = "";
//     // s1 = NULL;
//     // s2 = NULL;
// 	mx_memchr(s, 50, 10);
//     printf("%s\n", s);
//     printf("%s\n", mx_memchr(s, 50, 10));
// 	return 0;
// }

// //for mx_memrchr
// int main() {
// 	const char *s = mx_strnew(9);
// 	s = "123456789";
//     // s1 = "";
//     // s1 = NULL;
// 	int c = 50;
//     size_t b = 10;
//     // s2 = NULL;
//     printf("%s\n", mx_memrchr(s, c, b));
// 	return 0;
// }

// //for mx_memmem
// int main() {
//     const unsigned char big[] = "1234567345";
//     const unsigned char little[] = "345";
//     printf("%s\n", mx_memmem(big, 5, little, 3));
// }

// //for mx_memmove
// int main() {
//     const unsigned char src[] = "1234567890";
//     unsigned char dst[] = "0000000000";
//     printf("%s\n", mx_memmove(dst, src, 5));
// }

// //for mx_realloc
// int main () {
//     char *str = malloc(sizeof (char) * 10);
//     for (int i = 0; i < 9; i++) {
//         str[i] = '1';
//     }
//     str[9] = '\0';
//     printf("%s\n", str);
//      str = mx_realloc(str, 150);
//     // str = realloc(str, 150);
//     // printf("size = %zu\n", malloc_size(str));
//     mx_memset(str+9, 'a', 140);
//     printf("%s\n", str);
// }

// //for mx_del_strarr
// int main() {
//     char **test = (char **)malloc(sizeof(char *) * 5);
//     test[0] = mx_strdup("Follow");
//     test[1] = mx_strdup("the");
//     test[2] = mx_strdup("white");
//     test[3] = mx_strdup("rabbit");
//     test[4] = NULL;
//     mx_del_strarr(&test);
//     // test = NULL;
//     printf("%s\n", test[0]);
//     system("leaks -q a.out");
//     return 0;
// }

// int main(void) {
// 	printf("%s", mx_file_to_str("teshht.txt"));
// 	return 0;
// }

// // // for print unicode
// int main() {
//     // int c = 1114111;
//     int c = 128521;
//     // wchar_t c = 0x10000 - 1;
//     mx_print_unicode(c);
//     printf("%c", '\n');
//     system("leaks -q a.out");
//     return 0;
// }
