#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
*init_dog - initialize a struct variables
*@d: pointer pointing to a struct
*@name: pointer type char
*@age: float var
*@owner: pointer type char
*Return - void
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
