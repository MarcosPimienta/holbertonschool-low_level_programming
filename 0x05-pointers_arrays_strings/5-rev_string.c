#include "holberton.h"
/**
*rev_string - string in reverse return.
*@s: string.
*Return: void.
*
*/
void rev_string(char *s)
{
	int i;
	int j;
	int c;
while (s[i] != '\0')
{
i++;
}
i = i - 1;
for (j = 0; j < i; j++)
{
c = s[j];
s[j] = s[i];
s[i] = c;
i--;
}
}
