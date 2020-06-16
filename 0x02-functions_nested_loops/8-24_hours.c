#include "holberton.h"

/**
* jack_bauer - prints hours and minutes
*
* Return: Always 0.
*/

void jack_bauer(void)
{
	int hr;
	int min;
	char del = ':';

	for (hr = 00; hr <= 23; hr++)
	{
		for (min = 00; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(del);
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
