#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - function that prints argc numbers.
*@argc: - Declaration of variable
*@argv: - Declaration of variable
*Return: int
*/

int main(int argc, char **argv)
{
	int mult;

if (argc != 3)
{
	puts("Error");
	return (1);
}

else
{
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
}
return (0);
}
