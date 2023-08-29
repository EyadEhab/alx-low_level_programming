#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
    size_t num_nodes = 0; /* Initialize the node count */

    while (h)
    {
        printf("%d\n", h->data); /* Print the data of the current node */
        num_nodes++;            /* Increment the node count */
        h = h->next;            /* Move to the next node */
    }

    return (num_nodes); /* Return the total number of nodes */
}
