#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Calculates the length of a linked list
 * @h: Pointer to the start of the list
 * Return: Number of nodes in the list
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
