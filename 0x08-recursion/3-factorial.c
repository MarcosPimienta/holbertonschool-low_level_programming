#include "holberton.h"

/**
* factorial - returns the factorial of a given number
*@n: - Declaration of variable
*Return: Void
*/

int factorial(int n)
{

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

if (n > 0)
{
	return (factorial(n - 1) * n);
}
else
{
return (-1);
}
}
