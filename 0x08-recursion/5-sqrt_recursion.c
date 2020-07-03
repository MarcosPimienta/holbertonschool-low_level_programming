#include "holberton.h"

/**
* _sqrt_recursion - returns square root of a given number.
* _auxFunc - auxiliary function for recursion.
*@n: - Declaration of variable
*Return: int
*/

int _sqrt_recursion(int n)
{
	int x = 1;

	return (auxFunc(n, x));
}

/**
* auxFunc - auxiliary function for recursion.
*@n: - Declaration of variable
*@x: - Declaration of variable
*Return: int
*/

int auxFunc(int n, int x)
{
	if (n < x * x)
	{
		return (-1);
	}
	if (n == x * x)
	{
		return (x);
	}
		return (auxFunc(n, x + 1));
}
