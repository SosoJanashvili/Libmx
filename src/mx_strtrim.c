#include "../inc/libmx.h"

static int get_start_index(const char *str) {
    int i = 0;
    for (; mx_isspace(str[i]); i++);
    return i;
}

static int get_end_index(const char *str) {
    int i = mx_strlen(str);
    for (; mx_isspace(str[i - 1]); i--);
    return i;
}

char *mx_strtrim(const char *str) {

    if (!str || !(*str))
        return NULL;

    int start = get_start_index(str);
    int end = get_end_index(str);
    int new_str_len = end - start; //  + 1???
    char *trimmed = NULL;

    if (!(trimmed = mx_strnew(new_str_len)))
        return NULL;

    mx_strncpy(trimmed, &str[start], new_str_len);

    return trimmed;
}
