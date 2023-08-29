#include "lists.h"

/* Function: get_nodeint_at_index
 * ------------------------------
 * Returns a pointer to the node at a specific index in a linked list.
 * 
 * head: Pointer to the first node in the linked list
 * index: Index of the node to return
 * 
 * Return: Pointer to the desired node, or NULL if index is out of range
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0; /* Initialize index counter */
    listint_t *temp = head; /* Initialize a temporary pointer */

    /* Traverse the list while not reaching the end or the desired index */
    while (temp && i < index)
    {
        temp = temp->next; /* Move to the next node */
        i++; /* Increment the index counter */
    }

    /* Return the desired node if found, otherwise return NULL */
    return (temp ? temp : NULL);
}
