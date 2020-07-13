#include "libmx.h"

static void my_str_negative_reverse(char *result, int *length) {
    int end = *length;
    int half = end / 2;
    int start;

    for(start = 0; start <= half; end--){
        mx_swap_char(&result[end], &result[start]);
        start++;
    }
}

char *mx_itoa(int number) {
    long num = number;
    long num_1 = number;
    int length = 0;
    int i = 0;
    bool is_negative = false;

    //assigning 0 value and the end of string
    if (number == 0) {
        return "0";
    }
    if (number < 0) {
        num_1 *= -1;
        num *= -1;
        i++;
        length++;
        is_negative = true;
    }
    //counting number of integers to know length 
    while (num > 0) {
        num /= 10;
        length++;
    }
    char *result = (char *) malloc(sizeof(char) * length + 1);
    //if the number was negative assign first element minus
    if (i == 1) {
        result[length] = '-';
    }
    //converting int to char by ascii
    for (; i < length; i++) {
        char rem = (num_1 % 10) + 48;
            num_1 /= 10;
            result[i] = rem;
    }
    //reverse string
    if (is_negative) {
        my_str_negative_reverse(result, &length);
        result[length] = '\0';
    }
    else {
        mx_str_reverse(result);
        result[length] = '\0';
    }
    return result;
}
