#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>  /* For _putchar */

int _putchar(char c)
{
    return write(1, &c, 1);
}

int main(void)
{
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (1);

    new->str = strdup("Hello");
    new->len = 5;
    new->next = &hello;

    n = print_list(new);
    printf("-> %lu elements\n", n);

    free(new->str);
    free(new);
    return (0);
}
