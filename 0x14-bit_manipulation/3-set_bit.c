#include "main.h"

/*
 * set_bit - Sets a bit at a specified index to 1
 * @n: Pointer to the number to modify
 * @index: Index of the bit to set to 1
 *
 * Return: 1 for successful bit set, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}