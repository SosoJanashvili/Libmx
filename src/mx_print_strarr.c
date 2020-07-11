#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {

    if( !(*arr) || !delim)
        return;

    int i = 0;
    char ch = *delim;

    for ( ; arr[i]; i++ ) {
        mx_printstr(arr[i]);
        mx_printchar(ch);
    }

    mx_printstr(arr[i]);

    mx_printchar('\n');
}

