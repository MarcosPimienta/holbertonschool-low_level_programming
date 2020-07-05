#include "holberton.h"
/**
* *_strpbrk - finds specific character in a string and breaks it
*@s: - Declaration of variable
*@accept: - Declaration of variable type
*Return: Always s for string
*/

char *_strpbrk(char *s, char *accept)
{
char *n;
n = accept;

while (*s != '\0')
{

while (*accept != '\0')
{
	if (*s == *accept)
	{
		return (s);
	}
		accept++;
	}
	accept = n;
	s++;
}
return ('\0');
}
