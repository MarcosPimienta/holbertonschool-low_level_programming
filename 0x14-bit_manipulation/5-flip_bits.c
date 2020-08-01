#include "holberton.h"
/**
 *flip_bits - the value of a bit to 0 at a given index.
 *@n: pointer to unsigned long integer
 *@m: index of intger to sets
 *
 *Return: num which is number of bits that where different.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	int num = 0;

	while (i < (sizeof(n) * 8))
	{
		if ((((n ^ m) >> i) & 1) == 1)
		{
			num++;
		}
		i++;
	}
	return (num);
}
