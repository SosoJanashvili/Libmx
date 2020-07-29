#include "../inc/libmx.h"


//void *mx_realloc(void *ptr, size_t size) {

//    void *p = NULL;
//    int old_size = malloc_size(ptr);
//    if (ptr && size == 0) free(ptr);
//    if (!ptr && size) {
//        if (!(ptr = malloc(size)))
//            return NULL;
//        return ptr;
//    }
//    if ((int)size > old_size) {
//        if (!(p = malloc(size)))
//            return NULL;
//        return p;
//    } else {
//        free(ptr);
//        if (!(ptr = malloc(size)))
//            return NULL;
//        return ptr;
//    }
//}
