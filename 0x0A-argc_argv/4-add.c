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
int main(int argc, char **argv)
{
	int add = 0;
	if (argc == 1)
	{
	puts("0");
	return (0);
	}
	while (argc > 3)
	{

		while (*argv)
		{
			if (isdigit(atoi((*argv))) == 0)
			{
				puts("Error");
				return (1);
			}
		(*argv)++;
		}
	argv++;
	}
	while (argc && *argv)
	{

		add += atoi((*argv));
		argv++;
	}
	printf("%i\n", add);
	return (0);
}
