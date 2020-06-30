#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square.
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, n, num1 = 0, num2 = 0;

	n = size * size;
	while (i < n)
	{
		if (i % (size + 1) == 0)
		{
			num1 += a[i];
		}
		i++;
	}
	i = n - size;
	while (i > 0)
	{
		if (i % (size - 1) == 0)
		{
			num2 += a[i];
		}
		i--;
	}
	printf("%d, %d\n", num1, num2);
}
