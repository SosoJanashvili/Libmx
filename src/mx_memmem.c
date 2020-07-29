#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {

    if (!big || !little)
        return NULL;

    const unsigned char *haystack = big;
    const unsigned char *needle = little;

    for (size_t i = 0; i < big_len - little_len; i++) {
        if (mx_memcmp(haystack + i, needle, little_len) == 0) {
            return (void *)&haystack[i];
        }
    }

    return NULL;
}

/*  code for main.c  */
//char str[30] = "this is a very long string";
//char str2[] = "ing";
//mx_printstr( mx_memmem(str, 30, str2, 3) );
