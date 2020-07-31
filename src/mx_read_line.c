#include "../inc/libmx.h"

static int next_line_starts_at = 0;

int get_line_length(char delim, const int fd) {

    int len = 0;
    char ch;

    while (read(fd, &ch, 1) > 0 && ch != delim) {
        len++;
    }

    return len;
}

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {

    int len;

    if (!fd)
        return -2;

    len = get_line_length(delim, fd);

//    read(fd, &lineptr, len);

    char *str = mx_strnew(6);
    read(fd, &str, 6);

    //*lineptr = str;

    return 0;
}

