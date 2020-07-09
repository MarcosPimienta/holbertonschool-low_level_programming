
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - checks if malloc is void.
*@b: size of.
* Return: alloc.
*/

void *malloc_checked(unsigned int b)
{
	void *alloc = NULL;

	alloc = (void *) malloc(b);

if (alloc == NULL)
{
	exit(98);
}
	return (alloc);
}
