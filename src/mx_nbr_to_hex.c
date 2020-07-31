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

//#include "../inc/libmx.h"
//
//static int length_str(unsigned long nbr) {
//    int length = nbr == 0 ? 1 : 0;
//
//    while (nbr) {
//        nbr /= 16;
//        length++;
//    }
//    return length;
//}
//
//char *mx_nbr_to_hex(unsigned long nbr) {
//    int len = length_str(nbr);
//    char *result = mx_strnew(len);
//    int temp = 0;
//
//    if (!nbr)
//        result[0] = '0';
//    while (nbr) {
//        temp = nbr % 16;
//        if (temp < 10)
//            result[len - 1] = temp + '0';
//        else
//            result[len - 1] = temp + 'a' - 10;
//        len--;
//        nbr /= 16;
//    }
//    return result;
//}
