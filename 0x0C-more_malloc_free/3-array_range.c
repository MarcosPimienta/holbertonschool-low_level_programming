#include "holberton.h"
#include <stdlib.h>
/**
*array_range - allocation int.
*@min: string to be measured.
*@max: unsigned int size.
*Return: 0.
**/

int *array_range(int min, int max)
{
	int i;
	int *nint = NULL;

	if (min > max)
	{
		return (NULL);
	}
	nint  = malloc((max - min + 1) * sizeof(int));
	if (nint == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < 1 + (max - min); i++)
	{
		nint[i] = min + i;
	}
	return (nint);
}
