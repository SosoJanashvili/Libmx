#include "../inc/libmx.h"

int mx_list_size(t_list *list) {

    int count = 0;
    t_list *cur = list;

    while (cur->next != NULL) {
        cur = cur->next;
        count++;
    }
    count++;

    return count;
}
