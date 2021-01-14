#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - search in an array
 * @array: data set
 * @size: size of array
 * @value: value to be searched
 * *Return: Always s for string
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int left, mid, right, i = 0;

	left = 0;
	right = size - 1;

	if (array != NULL)
	{
		while (left <= right)
		{
			i = left;
			printf("Searching in array: ");
			while (i <= right)
			{
				printf("%d", array[i]);
				if (i < right)
				{
					printf(", ");
				}
				i++;
			}
			printf("\n");

			mid = (left + right) / 2;
			if (array[mid] < value)
			{
				left = mid + 1;
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
