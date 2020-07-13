 #include "libmx.h"

static char *my_strtrim(const char *str, char c) {
    char *str2 = NULL;
    int j = 0;
    int i = 0;
    int length = mx_strlen(str);

    if (!str)
        return NULL;
    while (str[i] == c)
        i++;
    while (str[length - 1] == c)
        length--;
    str2 = mx_strnew(length - i);
    while (i < length) {
        str2[j] = str[i];
        i++;
        j++;
    }
    return str2;
}

static void rewrite(char **words, char *trimed_str, char c) {
    int word_len = 0;
    int word_count= 0;
    bool check = false;

    for (int i = 0; trimed_str[i]; i++) {
        check = false;
        while(trimed_str[i] == c) {
            check = true;
            i++;
            word_count = 0;
        }
        if (check)
            word_len++;
        words[word_len][word_count] = trimed_str[i];
        word_count++;
    }
    free(trimed_str);
}

static bool check_return(const char *s, char c) {
    char *trimed_str = NULL;
    if (!s)
        return false;
    trimed_str = my_strtrim(s, c);
    if (!trimed_str) {
        free(trimed_str);
        return false;
    }
    free(trimed_str);
    return true;
}

char **mx_strsplit(const char *s, char c) {
    int word_count = 0;
    int word_len = 0;
    char **words = NULL;
    char *trimed_str = NULL;
    int y = 0;

    if (!check_return(s, c))
        return NULL;
    trimed_str = my_strtrim(s, c);
    word_count = mx_count_words(trimed_str, c);
    words = (char **)malloc(sizeof(char *) * (word_count + 1));
    for (int i = 0; i < word_count; i++) {
        word_len = 0;
        while(trimed_str[y] != '\0' && trimed_str[y] != c) {
            word_len++;
            y++;
        }
        while (trimed_str[y] == c)
            y++;
        words[i] = mx_strnew(word_len);
    }
    words[word_count] = NULL;
    rewrite(words, trimed_str, c);
    return words;
}
