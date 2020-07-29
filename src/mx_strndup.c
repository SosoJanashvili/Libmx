#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {

    char *str = NULL;

    if (!s1)
        return NULL;

    if (!(str = mx_strnew(n)))
        return NULL;

    if (!(str = mx_strncpy(str, s1, n)))
        return NULL;

    return str;
}
