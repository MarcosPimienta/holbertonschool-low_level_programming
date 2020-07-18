#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - adds n numbers through variadic functions
* @n: number of elements
* Return: Nothing.
*/

int sum_them_all(const unsigned int n, ...)
{
	int nSum = 0;
	unsigned int i = 0;

	va_list  ArgP;
	va_start(ArgP, n);
	
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		nSum += va_arg(ArgP, int);
		i++;
	}
	va_end(ArgP);
	return (nSum);
}
