#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deallocates a linked list and its contents.
 * @head: Pointer to the head of the list_t list
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next; /* Store the next node */
        free(head->str);   /* Deallocate the string inside the node */
        free(head);        /* Deallocate the current node */
        head = temp;       /* Move to the next node */
    }
}
