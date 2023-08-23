#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints every thing
 *
 * @format: a parameter,acts as the specifier
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	unsigned int next;
	char *s;
	va_list list;

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		next = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s",  s);
			break;
		default:
			next = 0;
			break;
		}
		if (format[i + 1] && next)
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
