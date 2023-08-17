#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all -adds all arguments that are passed
 *
 *@n:number of arguments passed
 *Return: 0 when n is 0 otherwise returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);

	}
	va_end(args);


	return (sum);
}
