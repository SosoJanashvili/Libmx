#include "../inc/libmx.h"

static char *mx_optimize_string(char *str) {

    for (int i = 0; i < mx_strlen(str); i++) {
        if (mx_isspace(str[i])) {
            str[i] = ' ';
        }
    }

    return str;
}

char *mx_del_extra_spaces(const char *str) {

    char *tempstr = mx_strdup(str);
    char **arr = mx_strsplit(mx_optimize_string(tempstr), ' ');
    char *clean_str = NULL;

    if (!str) return NULL;

    clean_str = arr[0];

    for (int i = 1; arr[i]; i++) {
        clean_str = mx_strjoin(clean_str, " ");
        clean_str = mx_strjoin(clean_str, arr[i]);
    }

    mx_strdel(&tempstr);

    return clean_str;
}
