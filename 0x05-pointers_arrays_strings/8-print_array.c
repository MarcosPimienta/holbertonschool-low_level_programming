#include "holberton.h"
#include <stdio.h>

/**
*print_array - prints numnber of elements in array.
*@a: array.
*@n: number of elements of array.
*Return: void.
*
*/

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
{
	printf(", ");
}
i++;
}
printf("\n");
}
