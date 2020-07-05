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
if (argv != NULL)
{
printf("%d\n", argc - 1);
return (0);
}
return (argc);
}
