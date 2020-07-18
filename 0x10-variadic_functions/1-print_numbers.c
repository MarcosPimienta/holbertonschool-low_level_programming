#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include"variadic_functions.h"

/**
* print_numbers - print numbers with comma separator.
* @n: number of elements
* @separator: its a comma and space.
* Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;

va_list elements;
va_start(elements, n);
	if (separator)
	{
		while (i < n)
		{
			printf("%d", (va_arg(elements, unsigned int)));
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			printf("%d", (va_arg(elements, unsigned int)));
			i++;
		}
	}
	va_end(elements);
	printf("\n");
}
