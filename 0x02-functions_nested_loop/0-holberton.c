#include "holberton.h"

/**
* main - its the main function
* _putchar - prints characters
*Return: Always 0 (Success)
*/

int main(void)
{
	char name[] = "Holberton";
	int i = 0;

	while (name[i] != '\0')
	{
	_putchar(name[i]);
	i++;
	}
return (0);
}
