#include "lists.h"

/* Function: add_nodeint
 * ---------------------
 * Adds a new node containing the provided data at the beginning of a linked list.
 * 
 * head: Pointer to the pointer of the first node in the list
 * n: Data to insert in the new node
 * 
 * Returns: Pointer to the new node, or NULL if memory allocation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    /* Allocate memory for the new node */
    listint_t *new_node = malloc(sizeof(listint_t));
    
    /* If memory allocation fails, return NULL */
    if (!new_node)
        return (NULL);

    /* Set the data of the new node to the provided value */
    new_node->n = n;
    
    /* Point the new node to the current first node */
    new_node->next = *head;
    
    /* Update the head pointer to point to the new node, making it the new first node */
    *head = new_node;
    
    /* Return a pointer to the new node */
    return (new_node);
}

