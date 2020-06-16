#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int a, b, c, d, x;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = a; c <= 9; c++)
			{
				if (a == c)
				{
					x = b + 1;
				}
				else
				{
					x = 0;
				}
				for (d = x; d <= 9; d++)
				{
					putchar (a + '0');
					putchar (b + '0');
					putchar (' ');
					putchar (c + '0');
					putchar (d + '0');

					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
putchar ('\n');
return (0);
}
