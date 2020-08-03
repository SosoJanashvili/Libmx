#include "../inc/libmx.h"

static char *mx_optimize_string(char *str) {

    if (!str)
        return NULL;

    for (int i = 0; i < mx_strlen(str); i++) {
        if (mx_isspace(str[i])) {
            str[i] = ' ';
        }
    }

    return str;
}

char *mx_del_extra_spaces(const char *str) {

    char *tempstr = NULL;
    char *clean_str = NULL;
    char **arr = NULL;

    if (!str)
        return NULL;

    tempstr = mx_strdup(str);
    arr = mx_strsplit(mx_optimize_string(tempstr), ' ');
    clean_str = mx_strdup(arr[0]);

    for (int i = 1; arr[i]; i++) {
        clean_str = mx_strjoin(clean_str, " ");
        clean_str = mx_strjoin(clean_str, arr[i]);
    }

    mx_strdel(&tempstr);
    mx_del_strarr(&arr);
    return clean_str;
}
