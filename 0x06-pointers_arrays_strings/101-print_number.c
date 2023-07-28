#include <stdio.h>
/**
 *print_number - prints a number
 *
 *@n: integer parameter
 *Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int n1;
	ni = n;

	if (n < 0)
	{
		_putchar(' ');
		n1 = -n;

	}
	if (n1 / 10 != 0)
	{

		_putchar(n1 / 10);
	}
	_putchar ((n1 % 10) + '0');
}
