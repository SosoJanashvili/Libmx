#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {

    char *pstr1 = NULL;

    if (!haystack)
        return NULL;

    if (!needle)
        return (char *)haystack;

    for (int i = 0; i < mx_strlen(haystack); i++) {
        if (mx_strncmp(haystack + i, needle, mx_strlen(needle)) == 0) {
            pstr1 = (char *)haystack + i;
            return pstr1;
        }
    }

    return NULL;
}
