#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - contigous allocation.
*Return: always newstr.
*@nmemb : char pointer variable to  new array.
*@size : char pointer variable to  new array.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *newstr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	newstr = malloc(nmemb * size);
	if (newstr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		newstr[i] = 0;
	}
	return (newstr);
}
