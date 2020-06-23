#include "holberton.h"
#include <stdio.h>

/**
*print_array - prints numnber of elements in array.
*@a: array.
*@n: number of elements of array.
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
return dest;
}
