cmake_minimum_required(VERSION 3.16)
project(Libmx C)

set(CMAKE_C_STANDARD 11)

add_executable(Libmx

        inc/libmx.h

        src/mx_printchar.c
        src/mx_print_unicode.c
        src/mx_printstr.c
        src/mx_isspace.c
        src/mx_isdigit.c
        src/mx_print_strarr.c
        src/mx_printint.c
        src/mx_pow.c
        src/mx_sqrt.c
        src/mx_nbr_to_hex.c
        src/mx_hex_to_nbr.c
        src/mx_itoa.c
        src/mx_foreach.c
        src/mx_binary_search.c
        src/mx_bubble_sort.c
        src/mx_swap_arr_elements.c
        src/mx_strtrim.c
        src/mx_atoi.c
        src/mx_quicksort.c

        src/mx_strlen.c
        src/mx_swap_char.c
        src/mx_str_reverse.c
        src/mx_strdel.c
        src/mx_get_char_index.c
        src/mx_strcpy.c
        src/mx_strncpy.c
        src/mx_strcmp.c
        src/mx_strncmp.c
        src/mx_strnew.c
        src/mx_strdup.c
        src/mx_strndup.c
        src/mx_strcat.c
        src/mx_strstr.c
        src/mx_strchr.c
        src/mx_get_substr_index.c
        src/mx_count_substr.c
        src/mx_count_words.c
        src/mx_del_strarr.c
        src/mx_strsplit.c
        src/mx_strjoin.c
        src/mx_del_extra_spaces.c

        src/mx_memset.c
        src/mx_memcpy.c
        src/mx_memccpy.c
        src/mx_memcmp.c
        src/mx_memchr.c
        src/mx_memrchr.c
        src/mx_memmem.c
        src/mx_memmove.c
        src/mx_realloc.c

        main.c)
