#include "holberton.h"
#include <stdio.h>
/**
* print_chessboard - compare strings and prints from the repeating string
*@8: - Declaration of variable
*Return: Always s for string
*/

void print_chessboard(char(*a)[8])
{
	int i = 0;

while (**a)
{
	while (*a != '\0' && i < 8)
	{
		printf("%c", *(*a + i));
		i++;
	}
	i = 0;
	a++;
	printf("\n");
}
}
