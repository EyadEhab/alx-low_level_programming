#include "lists.h"

/* Function: sum_listint
 * ---------------------
 * Calculates the sum of all the data in a listint_t linked list.
 * 
 * head: Pointer to the first node in the linked list
 * 
 * Return: Sum of the data in the linked list
 */
int sum_listint(listint_t *head)
{
    int sum = 0; /* Initialize the sum */
    listint_t *temp = head; /* Initialize a temporary pointer */

    /* Traverse the linked list and add the data of each node to the sum */
    while (temp)
    {
        sum += temp->n; /* Add the data of the current node to the sum */
        temp = temp->next; /* Move to the next node */
    }

    return (sum); /* Return the resulting sum */
}
