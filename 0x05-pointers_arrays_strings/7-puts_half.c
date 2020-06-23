#include "holberton.h"
/**
*puts_half - prints halfstring.
*@str: string pointer.
*Return: void.
*
*/

void puts_half(char *str)
{
int i;
int n;

while (str[i] != '\0')
{
i++;
}
	if (i % 2 != 0)
	{
		n = (i + 1) / 2;
	}
	else
	{
		n = (i) / 2;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
_putchar('\n');
}
