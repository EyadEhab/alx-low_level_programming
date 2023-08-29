#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/* Struct for singly linked list node */
typedef struct listint_s
{
    int n;                    /* Integer data */
    struct listint_s *next;   /* Pointer to the next node */
} listint_t;

/* Function to print the linked list */
size_t print_listint(const listint_t *h);

/* Function to calculate the length of the linked list */
size_t listint_len(const listint_t *h);

/* Function to add a new node at the beginning of the linked list */
listint_t add_nodeint(listint_t *head, const int n);

/* Function to add a new node at the end of the linked list */
listint_t add_nodeint_end(listint_t *head, const int n);

/* Function to free the memory occupied by the linked list */
void free_listint(listint_t *head);

/* Function to free the memory occupied by the linked list and set head to NULL */
void free_listint2(listint_t **head);

/* Function to remove and return the first node's value from the linked list */
int pop_listint(listint_t **head);

/* Function to get the node at a specific index in the linked list */
listint_t get_nodeint_at_index(listint_t *head, unsigned int index);

/* Function to calculate the sum of all values in the linked list */
int sum_listint(listint_t *head);

/* Function to insert a new node at a specific index in the linked list */
listint_t insert_nodeint_at_index(listint_t *head, unsigned int idx, int n);

/* Function to delete a node at a specific index in the linked list */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* Function to reverse the linked list */
listint_t reverse_listint(listint_t *head);

/* Function to safely print the linked list (handles loops) */
size_t print_listint_safe(const listint_t *head);

/* Function to safely free the memory occupied by the linked list (handles loops) */
size_t free_listint_safe(listint_t **h);

/* Function to find the start of a loop in the linked list */
listint_t find_listint_loop(listint_t *head);

#endif
