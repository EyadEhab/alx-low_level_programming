#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts a new node at the beginning of a linked list
 * @head: Double pointer to the list_t list
 * @str: String to be inserted into the new node
 * Return: Address of the new node, or NULL if memory allocation fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    unsigned int length = 0;

    /* Calculate the length of the input string */
    while (str[length])
        length++;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    /* Copy the string and assign values to the new node */
    new_node->str = strdup(str);
    new_node->len = length;
    new_node->next = (*head);

    /* Update the head pointer */
    (*head) = new_node;

    return (*head);
}
