#include "holberton.h"
#include <stdlib.h>
/**
*create_array - allocation function
*@c: string to be measured.
*@size: unsigned int size.
*Return: 0.
**/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str  = malloc(size * sizeof(char));
	if (size == 0)
	{
	return (NULL);
	}
	if (!str)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
