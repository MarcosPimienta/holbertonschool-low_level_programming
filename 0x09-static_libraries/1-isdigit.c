#include "holberton.h"

/**
* _isdigit - prints if c is digit
* @c: variable
* Return: Always 0.
*/

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
_putchar('\n');
}
}
