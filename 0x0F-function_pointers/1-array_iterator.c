#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - iterates elements of array
* @array: elements to be printed.
* @size: size of.
* @action: function for each element of the array.
* Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size != 0)
	{
		size_t i = 0;
		while(i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
