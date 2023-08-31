#include "main.h"

/**
 * binary_to_uint - Converts g to an unsigned integer
 * @b: The input binary string
 *
 * This function takes a bt and converts it into an
 * equivalent unsigned intege iterating through each
 * character of the inpuing, vng its binary nature, and building
 * the corresponding integer rwise operations.
 *
 * Return: The unsig equivale of the input binary number, or 0 on failure.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
