#include "holberton.h"
/**
*_puts - prints string.
*@str: string pointer.
*Return: void.
*
*/

void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
