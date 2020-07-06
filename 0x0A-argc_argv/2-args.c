#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - function that takes power elevated.
*@argc: - Declaration of variable
*@argv: - Declaration of variable
*Return: int
*/

int main(int argc, char **argv)
{
while (argc != '\n' && *argv != NULL)
{
printf("%s\n", *argv);
argv = argv + 1;
}
return (0);
}

