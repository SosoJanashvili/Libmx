//
// Created by Soso Janashvili on 05.09.2020.
//

#include "../inc/libmx.h"

static void swap(t_list *a, t_list *b);

void mx_sort_list_bubble(t_list *head) {

    int swapped = 1;
    t_list *ptr1 = NULL;
    t_list *lptr = NULL;

    if (head == NULL)
        return;

    while (swapped) {

        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {

            if (*(int *)ptr1->data > *(int *)ptr1->next->data) {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }

            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
}

static void swap(t_list *a, t_list *b) {
    int temp = (int)a->data;
    a->data = b->data;
    b->data = (void *)temp;
}
