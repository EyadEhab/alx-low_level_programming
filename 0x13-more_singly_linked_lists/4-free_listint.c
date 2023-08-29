#include "lists.h"

/* Function: free_listint
 * ----------------------
 * Frees the memory occupied by a linked list.
 * 
 * head: Pointer to the head of the list to be freed
 */
void free_listint(listint_t *head)
{
    listint_t *temp;

    while (head)
    {
        temp = head->next; /* Store the next node */
        free(head);        /* Free the current node */
        head = temp;       /* Move to the next node */
    }
}
