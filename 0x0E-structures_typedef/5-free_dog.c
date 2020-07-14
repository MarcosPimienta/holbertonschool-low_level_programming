#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - free a struct variables
*@d: pointer pointing to a struct
* Return: void
**/
void free_dog(dog_t *d)
{
	if (!d)
	return;
	free((*d).name);
	free((*d).owner);
	free(d);
}
