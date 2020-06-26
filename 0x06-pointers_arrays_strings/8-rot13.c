#include "holberton.h"
/**
 * leet - encrypts.
 * @s: Argument pointer to char
 *
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i;
	int j;
	char ch1[] = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz";
	char ch2[] = "NOPQRSTUVWXYZABCDEFGHJKLMnopqrstuvwxyzabcdefghjklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (ch1[j] != '\0')
		{
			if (s[i] == ch1[j])
			{
				s[i] = ch2[j];
				break;
			}
			j++;
		}
	}
return (s);
}
