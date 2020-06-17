#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_to_98 - print to 98.
* @n: variable
* Return: Always 0.
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
