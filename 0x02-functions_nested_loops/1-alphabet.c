#include "holberton.h"

/**
* print_alphabet - prints alphabet with putchar
* Return: Always 0.
*/

void print_alphabet(void)
{
char alp = 'a';

while (alp <= 'z')
{
_putchar(alp);
alp++;
}
_putchar('\n');
}
