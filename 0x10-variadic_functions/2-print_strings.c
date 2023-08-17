#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints a string
 *
 *@separator:string between the strings
 *@n:number of arguments
 *Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	char *string;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}

		va_end(args);
	}

	printf("\n");

}
