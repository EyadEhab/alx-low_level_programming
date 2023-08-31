#include "main.h"

/*
 * Converts a binary string to an unsigned integer.
 *
 * This function takes a binary string as input and converts it to an equivalent
 * unsigned integer value.
 *
 * @param b: The binary string to be converted.
 *
 * @return: The converted unsigned integer value.
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
