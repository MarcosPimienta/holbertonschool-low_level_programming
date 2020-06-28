#include "holberton.h"

/**
* *_memset - fill a block of memory with a particular value.
*@s: - Declaration of variable
*@b: - Declaration of variable type
*@n: - Size of bytes
*Return: Always s for string
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (p);
}
