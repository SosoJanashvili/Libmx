#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {

    t_list *temp = NULL;
    t_list *cur = *head;

    if (cur->next == NULL) {
        free(*head);
        return;
    }

    while (cur->next != NULL) {
        temp = cur->next;
        if (temp->next == NULL) {
            break;
        }
        cur = cur->next;
    }

    cur->next = NULL;
    free(temp);
}
