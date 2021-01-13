#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search in an array
 * @array: data set
 * @size: size of array
 * @value: value to be searched
 * *Return: Always s for string
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
