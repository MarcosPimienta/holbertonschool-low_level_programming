#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0 + '0';

	while (n <= '9')
	{
		putchar(n);
        if(n <= '8')
        {
        putchar(',');
        }
        putchar(' ');
		n++;
	}
		putchar('\n');
	return (0);
}
