#include "holberton.h"

/**
* print_alphabet_x10 - prints alphabet with putchar 10 times
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
char alp = 'a';
int i = 0;

while (i <= 9)
{
while (alp <= 'z')
{
_putchar(alp);
alp++;
}
alp = 'a';
i++;
_putchar('\n');
}
}
