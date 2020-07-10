#include "../inc/libmx.h"

char *mx_strchr(const char *s, int c) {

    int i = 0;

    while (s[i] != c) {
        i++;
    }

    return (char *) &s[i];
}
