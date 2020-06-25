#include "holberton.h"
/**
*reverse_array - prints string in reverse.
*@n: size of array.
*@a: array.
*Return: void.
*
*/

void reverse_array(int *a, int n)
{
int *f = a;
int *l = a + n - 1;
while (f < l)
{
	int tmp = *f;
	*f = *l;
	*l = tmp;
	f++;
	l--;
}
}
