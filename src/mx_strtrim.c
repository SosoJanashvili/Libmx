#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {

    if (!str || !(*str))
        return NULL;

    int start = 0;
    int end = mx_strlen(str);
    int new_str_len;
    char *trimmed = NULL;

    while (mx_isspace(str[++start]));
    while (mx_isspace(str[--end]));

    new_str_len = end - start + 1;

    if (!(trimmed = mx_strnew(new_str_len)))
        return NULL;

    mx_strncpy(trimmed, &str[start], new_str_len);

    return trimmed;
}
