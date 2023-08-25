# Singly Linked Lists

## Description
A singly linked list is a data structure that consists of a sequence of elements, each containing a value and a pointer to the next element in the sequence. It is a fundamental data structure used in computer science and programming for various applications.

## Data Structure
In this project, we work with a singly linked list data structure represented by the following structure:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
