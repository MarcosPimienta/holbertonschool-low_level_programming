#include "holberton.h"

/**
* _strlen - length of string.
*Return: always i.
*@s: string characters.
*
*/

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
