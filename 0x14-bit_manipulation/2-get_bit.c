#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: Decimal number to search
 * @index: Index of the bit
 *
 * Return: the value of the bit (0 or 1)
 */

int get_bit(unsigned long int n, unsigned int index) /*get_bit:  Chece  -1. */
{
	int bit_val;

	if (index > 63)
		return (-1);
/* Perform a bitwise right shift on n by index places.*/
	bit_val = (n >> index) & 1;
/* Return the value of the LSB. */
	return (bit_val);
}
