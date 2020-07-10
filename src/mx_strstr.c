#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {

    if (!needle)
        return (char *) haystack;

    int len = mx_strlen(needle);
    char *pstr1 = NULL;

    for (int i = 0; i < mx_strlen(haystack); i++) {
        if ( mx_strncmp( haystack + i, needle, len ) == 0 ) {
            pstr1 = (char *) haystack + i;
            return pstr1;
        }
    }

    return NULL;
}
