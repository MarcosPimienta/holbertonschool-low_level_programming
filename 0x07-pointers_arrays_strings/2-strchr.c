#include "holberton.h"

/**
* *_strchr - finds specific character in a string
*@s: - Declaration of variable
*@c: - Declaration of variable type
*Return: Always s for string
*/



char *_strchr(char *s, char c)
{

	for ( ; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == '\0')
	{
		return ('\0');
	}
	return (s);
}
