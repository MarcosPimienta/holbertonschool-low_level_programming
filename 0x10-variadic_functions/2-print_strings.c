#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include"variadic_functions.h"

/**
* print_strings - print strings with comma separator.
* @n: number of elements
* @separator: its a comma and space.
* Return: Nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *c;

va_list string;
va_start(string, n);
	if (separator)
	{
		while (i < n)
		{
			c = va_arg(string, char*);
			if (c)
			{
				printf("%s", c);
				if (i < (n - 1))
				printf("%s", separator);
			}
			else
				printf("(nil)");
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			c = va_arg(string, char*);
			if (c != NULL)
			printf("%s", c);
			else
			printf("(nil)");
			i++;
		}
	}
	va_end(string);
	printf("\n");
}
