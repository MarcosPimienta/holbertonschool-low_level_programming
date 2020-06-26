#include "holberton.h"
/**
 * leet - encrypts.
 * @s: Argument pointer to char
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i;
	int j;
	char ch[] = "a,A,e,E,o,O,t,T,l,L";
	char num[] = "4,4,3,3,0,0,7,7,1,1";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (ch[j] != '\0')
		{
			if (s[i] == ch[j])
			{
				s[i] = num[j];
			}
			j++;
		}
	}
return (s);
}
