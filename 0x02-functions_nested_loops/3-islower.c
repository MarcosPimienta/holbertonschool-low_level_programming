#include "holberton.h"

/**
* _islower - prints if c is lowercase
* @c: variable
* Return: Always 0.
*/

int _islower(int c)
{

if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
_putchar('\n');
}
}
