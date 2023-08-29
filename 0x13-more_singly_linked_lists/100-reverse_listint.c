#include "lists.h"

/* Function: reverse_listint
 * ------------------------
 * Reverses a linked list in place.
 * 
 * head: Pointer to the pointer of the first node in the list
 * 
 * Returns: Pointer to the new first node (previously the last node)
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *previous_node = NULL;
    listint_t *current_node = NULL;
    listint_t *next_node = NULL;

    current_node = *head;

    while (current_node)
    {
        next_node = current_node->next;
        current_node->next = previous_node;
        previous_node = current_node;
        current_node = next_node;
    }

    *head = previous_node;

    return (*head);
}
