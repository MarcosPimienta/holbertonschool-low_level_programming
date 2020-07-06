#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
*main - function that prints argc numbers.
*@argc: - Declaration of variable
*@argv: - Declaration of variable
*Return: int
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int add;

	if (argc == 1)
	{
	puts("0");
	return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
			j++;
		}
	i++;
	}
	for (i = 1; i < argc; i++)
	{
		add += atoi(argv[i]);
	}
	printf("%i\n", add);

	return (0);
}
