#include "holberton.h"
/**
* *_strspn - finds specific character in a string
*@s: - Declaration of variable
*@accept: - Declaration of variable type
*Return: Always s for string
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (n != i)
		{
			break;
		}
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	} return (n);
}
