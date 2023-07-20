#include "main.h"
#include <stdio.h>
/**
 *print_line - prints lines
 *
 *@n: number of lines to be printed
 *Return: always 0
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');

	}
	else
	{
		for (m = 0; m < n; m++)
			_putchar(95);
	}
	_putchar('\n');


}
