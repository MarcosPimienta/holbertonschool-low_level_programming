#include "holberton.h"

/**
 * binary_to_uint - binary to integer
 * @b: character pointer
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);

		dec = dec << 1;

		if (*b == '1')
			dec = dec ^ 1;
			b++;
	}
	return (dec);
}
