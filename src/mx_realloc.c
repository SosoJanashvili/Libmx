#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {

    void *p = NULL;

    if (ptr && size == 0)
        free(ptr);

    if (!ptr && size)
        if (!(p = malloc(size)))
            return NULL;





    return p;
}
