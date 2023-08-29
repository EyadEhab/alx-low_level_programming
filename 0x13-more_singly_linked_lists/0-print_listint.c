#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
