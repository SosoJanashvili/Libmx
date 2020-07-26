#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {

    t_list *new = mx_create_node(data);
    t_list *last_node = NULL;
    t_list *cur = *list;

    while ( cur->next != NULL ) {
        last_node = cur->next;
        cur = cur->next;
    }

    last_node->next = new;
}
