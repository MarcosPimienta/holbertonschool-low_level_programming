#include "holberton.h"

/**
* _pow_recursion - returns the factorial of a given number
*@x: - Declaration of variable
*@y: - Declaration of variable
*Return: Void
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
	else
	{
	return (0);
	}
}
