#include "../inc/libmx.h"

char **mx_strsplit(char const *s, char c) {
    int word_count = mx_count_words(s, c);
    char **strarr = NULL;
    char *word = NULL;
    int count = 0;

    if(!s) return NULL;
    strarr = malloc((word_count + 1) * sizeof(char *)); // +1 for null pointer
    for (int i = 0; i < mx_strlen(s); i++) {
        if (s[i] == c) continue;
        else {
            word = mx_strnew(30);
            for (int j = 0; s[i] != c; j++) {
                word[j] = s[i++];
            }
            strarr[count++] = word;
            word = NULL;
        }
    }
    strarr[count] = NULL;
    return strarr;
}
