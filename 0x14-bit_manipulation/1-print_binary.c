#include "holberton.h"

/**
 * print_binary - function that  converts an unsigned int number to a binary.
 * @n: unsigned long int
 * Return: unsigned int
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
