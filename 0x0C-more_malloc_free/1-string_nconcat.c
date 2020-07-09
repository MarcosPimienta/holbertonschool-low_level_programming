#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates using malloc.
*Return: always newstr.
*@s1 : char pointer variable to  new array.
*@s2 : char pointer variable to  new array.
*@n : char pointer variable to  new array.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, fill, fill2 = 0, len = 0;
char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	len = i + j;
	if (n > j)
	{
		newstr = malloc((len + 1) * sizeof(char));
		if (newstr == '\0')
		return (NULL);
	}
	else
	{
		len = i + n;
		newstr = malloc((len + 1) * sizeof(char));
		if (newstr == '\0')
		return (NULL);
	}
		if (newstr == NULL)
		return (NULL);
		for (fill = 0; fill < len; fill++)
		newstr[fill] = s1[fill];
		for (fill = i; fill < len; fill++)
		{
			newstr[fill] = s2[fill2];
			fill2++;
		}
		newstr[fill] = '\0';
		return (newstr);
}
