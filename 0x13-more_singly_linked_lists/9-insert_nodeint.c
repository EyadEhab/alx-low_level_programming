#include "lists.h"

/* Function: insert_nodeint_at_index
 * ---------------------------------
 * Inserts a new node with the provided data at a given position in a linked list.
 * 
 * head: Pointer to the pointer of the first node in the list
 * idx: Index where the new node is to be added
 * n: Data to insert in the new node
 * 
 * Return: Pointer to the new node, or NULL if memory allocation fails or index is invalid
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new_node;
    listint_t *temp = *head;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (!new_node || !head)
        return (NULL);

    /* Set the data of the new node to the provided value */
    new_node->n = n;
    new_node->next = NULL;

    /* If the new node is to be inserted at the beginning */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list to the desired position */
    for (i = 0; temp && i < idx; i++)
    {
        if (i == idx - 1)
        {
            new_node->next = temp->next;
            temp->next = new_node;
            return (new_node);
        }
        else
            temp = temp->next;
    }

    return (NULL); /* Return NULL if the index is invalid */
}
