#include "holberton.h"

/**
 * get_bit - bits of index
 * @n: number
 * @index: index number
 * Return: n compared to 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

if (index > sizeof(n) * 8)
	return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
return (n & 1);
}
