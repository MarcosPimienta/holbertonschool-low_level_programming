#include "holberton.h"
#include <stdio.h>

/**
*_strncat - prints string of even numnbers.
*@dest: string destination.
*@src: string source.
*@n:number of bytes for limiting.
*Return: void.
*
**/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
