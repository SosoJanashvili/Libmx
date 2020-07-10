#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {

    int st_index = mx_strlen(s1);

    for (int i = 0; s2[i] != '\0'; i++) {
        s1[st_index + i] = s2[i];
    }

    return s1;
}
