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
while (argc && *argv)
{
printf("%s\n", *argv);
argv++;
}
return (0);
}
