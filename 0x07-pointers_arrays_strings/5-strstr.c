#include "holberton.h"
/**
* *_strstr - compare strings and prints from the repeating string
*@haystack: - Declaration of variable
*@needle: - Declaration of variable type
*Return: Always s for string
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);

		haystack = h + 1;
	}
	return ('\0');
}
