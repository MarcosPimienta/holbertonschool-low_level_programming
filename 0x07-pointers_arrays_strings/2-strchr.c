#include "holberton.h"
#include <stdlib.h>

/**
* *_strchr - finds specific character in a string
*@s: - Declaration of variable
*@c: - Declaration of variable type
*Return: Always s for string
*/



char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return ('\0');
	}
	return (NULL);
}
