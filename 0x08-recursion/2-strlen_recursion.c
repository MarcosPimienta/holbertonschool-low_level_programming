#include "holberton.h"

/**
* _strlen_recursion - prints string length
*@s: - Declaration of variable
*Return: Void
*/

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}
	else
	{
		return (0);
	}
}
