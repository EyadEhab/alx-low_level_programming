#include <stdio.h>

/* Prototype for the function with the constructor attribute */
void first(void) __attribute__ ((constructor));

/**
 * first - Function with constructor attribute to print a message
 *         before the main function is executed.
 */
void first(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
