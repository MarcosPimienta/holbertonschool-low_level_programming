#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - iterates elements of array
* @array: elements to be printed.
* @size: size of.
* @cmp: function that compares with each element of the array.
*
* Return: Nothing.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
return (-1);
}
