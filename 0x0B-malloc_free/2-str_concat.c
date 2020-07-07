#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates using malloc.
*Return: always newstr.
*@s1 : char pointer variable to  new array.
*@s2 : char pointer variable to  new array.
*/

char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int fill = 0;
int fill2 = 0;
int len = 0;
char *newstr;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	len = i + j;
	newstr = malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
	{
	return (NULL);
	}
	for (fill = 0; fill < i; fill++)
	{
	newstr[fill] = s1[fill];
	}
	for (fill = i; fill <= len; fill++)
	{
	newstr[fill] = s2[fill2];
	fill2++;
	}
	return (newstr);
}
