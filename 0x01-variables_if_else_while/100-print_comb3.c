#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int n = 1;
int x = 2;

while (n <= 89)
{
	if (n % 10 == 0 && n / 10 != 0)
	{
		n = n + x ;
		x++;
	}
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
		if (n < 89)
		{
			putchar(',');
			putchar(' ');
		}
	n++;
}
putchar('\n');
return (0);
}
