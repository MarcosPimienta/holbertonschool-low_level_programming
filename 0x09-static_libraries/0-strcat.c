#include "holberton.h"
#include <stdio.h>

/**
*_strcat - copy string to another string.
*@dest: array.
*@src: number of elements of array.
*Return: char.
*
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}

return (dest);
}
