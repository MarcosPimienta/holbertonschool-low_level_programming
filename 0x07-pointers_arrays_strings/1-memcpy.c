#include "holberton.h"

/**
* *_memset - fill a block of memory with a particular value.
*@s: - Declaration of variable
*@b: - Declaration of variable type
*@n: - Size of bytes
*Return: Always s for string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *tmp1 = dest;
	char *tmp2 = src;

	for ( i = 0; i < n; i++)
	{
		*tmp1 = *tmp2;
		tmp1++;
		tmp2++;
	}
	return (dest);
}
