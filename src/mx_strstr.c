#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {

//    if (!needle)
//        return (char *)haystack;
//
//    int len = mx_strlen(needle);
//    char *pstr1 = NULL;
//
//    for (int i = 0; i < mx_strlen(haystack); i++) {
//        if (mx_strncmp(haystack + i, needle, len) == 0) {
//            pstr1 = (char *)haystack + i;
//            return pstr1;
//        }
//    }
//
//    return NULL;


    int i = 0;
    int j = 0;

    if (!needle)
        return ((char *) haystack);

    while (haystack[i]) {
        while (haystack[i] == haystack[j]) {
            i++;
            j++;
            if (!needle[j])
                return (char *) haystack + (i - mx_strlen(needle));
        }
        j = 0;
        i++;
    }

    return NULL;

}

