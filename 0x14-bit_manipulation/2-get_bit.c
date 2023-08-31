#include "main.h"

/*
 * get_bit - Retrieves the value of a bit at a specific index in a decimal number
 * @n: Decimal number to search
 * @index: Index of the bit
 *
 * Return: The value of the bit (0 or 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
