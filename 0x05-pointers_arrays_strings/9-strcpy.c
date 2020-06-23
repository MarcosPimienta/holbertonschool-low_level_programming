#include "holberton.h"
#include <stdio.h>

/**
*_strcpy - copy string to another string.
*@dest: array.
*@src: number of elements of array.
*Return: void.
*
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';
return (dest);
}
