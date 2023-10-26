#include "main.h"
/**
 *print_binary - Prints the binary representation of a number
 *
 *@n: number to print in binary rep.
 *Return: binary number.
 */
void print_binary(unsigned long int n)
{
	int i = 63;
	int sum = 0;
	unsigned long int numb;

	while (i >= 0)
	{
		numb = n >> i;

		if (numb & 1)
		{
			_putchar('1');
			sum++;
		}
		else if (sum)
		{
			_putchar('0');
		}
		i--;
	}
	if (!sum)
		_putchar('0');
}
