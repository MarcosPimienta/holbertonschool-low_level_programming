#include "holberton.h"
#include <stdio.h>

/**
*_strncpy - copy string of even numnbers.
*@dest: string destination.
*@src: string source.
*@n:number of bytes for limiting.
*Return: void.
*
**/

char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
while (i < n)
{
	dest[i] = '\0';
	i++;
}
return (dest);
}
