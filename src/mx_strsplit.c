#include "../inc/libmx.h"

static int mx_count_nonspace(char const *s, char c) {

    int total = 0;

    for (int i = 0; i < mx_strlen(s); i++) {
        if (s[i] != c) {
            total++;
        }
    }

    return total;
}

char **mx_strsplit(char const *s, char c) {

    int word_count = mx_count_words(s, c);    // counts words in string
    char **strarr;

    strarr = malloc(word_count * sizeof(char *) + 1); // +1 for null pointer

    for (int i = 0; i < mx_strlen(s); i++) {
        if (s[i] == c) continue;
        else {

            for (int j = 0; s[i] != c; j++) {



                i++;
            }

        }
    }

    // add null to the end of the string array

    return strarr;
}
