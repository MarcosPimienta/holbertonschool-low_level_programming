#include "holberton.h"

/**
* is_prime_number - returns prime numbers.
*@n: - Declaration of variable
*Return: int
*/

int is_prime_number(int n)
{
	int x = 2;

	return (auxPrime(n, x));
}

/**
* auxPrime - auxiliary function for recursion.
*@n: - Declaration of variable
*@x: - Declaration of variable
*Return: int
*/

int auxPrime(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	if (n % (x) == 0)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	else
	return (auxPrime(n, x + 1));
}
