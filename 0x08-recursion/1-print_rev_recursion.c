#include "holberton.h"

/**
* _puts_recursion - prints pointer string
*@s: - Declaration of variable
*Return: Void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s == '\0')
	{
		return;
	}
}
