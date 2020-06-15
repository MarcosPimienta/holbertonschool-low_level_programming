#include <stdio.h>
#include <stdlib.h>
/**
*main-prints number 01 to 99
*Return: 0
*/
int main(void)
{
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 1;

while (w <= 9)
{
	while (x <= 9)
	{
		while (y <= 9)
		{
			while (z <= 9)
			{
				putchar (w + '0');
				putchar (x + '0');
				putchar (' ');
				putchar (y + '0');
				putchar (z + '0');
				if ((x != 9) || (y != 9) || (z != 9) || (w != 9))
				{
				putchar (',');
				putchar (' ');
				}
				z++;
			}
			y++;
			z = 0;
		}
		x++;
		y = 0;
		z = 0;
	}
		w++;
		x = 0;
		y = 0;
		z = 0;
}
	putchar('\n');
	return (0);
}
