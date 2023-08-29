# Linked List Functions

This repository contains C functions that operate on singly linked lists. These functions offer various operations, such as adding, deleting, and reversing nodes in a linked list, as well as handling loops in linked lists.

## Functions

### `add_nodeint_end`

Adds a new node at the end of a linked list.

```c
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n);
