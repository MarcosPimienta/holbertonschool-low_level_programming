#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* print_all - function to print all.
* @format: constant
*/
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list arguments;
	char *str = NULL;

	va_start(arguments, format);
	while (format[i] != '\0')
		i++;
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
			printf("%c", (char)va_arg(arguments, int));
			break;
			case 'i':
			printf("%i", va_arg(arguments, int));
			break;
			case 'f':
			printf("%f", (float)va_arg(arguments, int));
			break;
			case 's':
			str = va_arg(arguments, char*);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
			}
			if ((format[j] == 'c' || format[j] == 'i' ||
				format[j] == 'f' || format[j] == 's') && (j < (i - 1)))
			{
				printf(", ");
			}
		j++;
	}
	va_end(arguments);
	printf("\n");
}
