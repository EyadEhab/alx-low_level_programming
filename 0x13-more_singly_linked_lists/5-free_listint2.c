#include "lists.h"

/* Function: free_listint2
 * -----------------------
 * Frees the memory occupied by a linked list and sets the head pointer to NULL.
 * 
 * head: Pointer to the pointer of the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
    listint_t *temp;

    /* Check if head pointer is NULL */
    if (head == NULL)
        return;

    while (*head)
    {
        temp = (*head)->next; /* Store the next node */
        free(*head);          /* Free the current node */
        *head = temp;         /* Move to the next node */
    }

    *head = NULL; /* Set head pointer to NULL */
}
