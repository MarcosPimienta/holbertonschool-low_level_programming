#include "holberton.h"

/**
* _abs - prints absolute value
* @n: variable integer
* Return: Always 0.
*/

int _abs(int n)
{
	int v;

	if (n < 0)
	{
	v = n * -1;
	return (v);
	}
	else
	{
		return (n);
	}
}
