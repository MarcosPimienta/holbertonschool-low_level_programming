#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char alp = 'a';
	char alp2 = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (alp2 <= 'Z')
	{
		putchar(alp2);
		alp2++;
	}
		putchar('\n');
	return (0);
}
