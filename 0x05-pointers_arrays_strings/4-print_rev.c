#include "holberton.h"
/**
*print_rev - prints string in reverse.
*@s: string.
*Return: void.
*
*/

void print_rev(char *s)
{
	int i;

while (*s != '\0')
{
	++i;
	++s;
}
	i = i - 1;
while (i >= 0)
{
	--s;
	--i;
	_putchar(*s);
}
	_putchar('\n');
}
