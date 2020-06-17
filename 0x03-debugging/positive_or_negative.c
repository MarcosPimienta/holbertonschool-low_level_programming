#include <stdlib.h>
#include <stdio.h>

/**
*positive_or_negative - As its name implies
*@n: variable from the main
*Return: Always n (Success)
*/
int positive_or_negative(int n)
{

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (n);
}
