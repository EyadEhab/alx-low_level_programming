#include "lists.h"

/* Function: add_nodeint_end
 * -------------------------
 * Adds a new node containing the provided data at the end of a linked list.
 * 
 * head: Pointer to the pointer of the first element in the list
 * n: Data to insert in the new element
 * 
 * Returns: Pointer to the new node, or NULL if memory allocation fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;
    listint_t *temp = *head;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    /* Set the data of the new node to the provided value */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is initially empty, the new node becomes the first node */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list to find the last node */
    while (temp->next)
        temp = temp->next;

    /* Link the last node's next to the new node, making it the last node */
    temp->next = new_node;

    return (new_node);
}
