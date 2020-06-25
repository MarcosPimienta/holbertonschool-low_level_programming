#include "holberton.h"
#include <stdio.h>

/**
*string_toupper - compare string if is uppercase.
*@s: string destination.
*Return: int.
*
**/

char *string_toupper(char *s)
	{
		int i = 0;

		while (s[i])
		{
			if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
			i++;
		}
		return (s);
	}
