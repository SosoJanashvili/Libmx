#include "../inc/libmx.h"

static char mx_get_num(unsigned long num) {

    int i = 0;

    char hex_digits[16] = {'0', '1', '2', '3', '4', '5',
                            '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    unsigned long digits[16] =
            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    while (num != digits[++i]);

    return hex_digits[i];
}

char *mx_nbr_to_hex(unsigned long nbr) {

    char *hex = NULL;

    if (!(hex = mx_strnew(16)))
        return NULL;

    for (int i = 0; nbr > 0; i++) {
        hex[i] = mx_get_num(nbr % 16);
        nbr = nbr / 16;
    }

    mx_str_reverse(hex);

    return hex;
}
