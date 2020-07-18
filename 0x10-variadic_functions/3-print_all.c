#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* print_all - function to print all.
* @format: constant
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list arguments;
	char *str;

	va_start(arguments, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
			printf("%c", va_arg(arguments, int));
			break;
			case 'i':
			printf("%d", va_arg(arguments, int));
			break;
			case 'f':
			printf("%f", (float)va_arg(arguments, double));
			break;
			case 's':
			str = va_arg(arguments, char *);
			if (!str)
			{
				str = "(nil)";
			}
			printf("%s", str);
			break;
			default:
			continue;
		}
			if (format[i])
			{
				printf(", ");
			}
	}
	printf("\n");
	va_end(arguments);
}
