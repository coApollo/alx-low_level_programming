#include "main.h"
/**
 *print_binary - prints the binary representation of a number
 *
 *@n: number to print in binary.
 *Return: binary number.
 */
void print_binary(unsigned long int n)
{
	int i = 63;
	int tot = 0;
	unsigned long int numb;

	while (i >= 0)
	{
		numb = n >> i;

		if (numb & 1)
		{
			_putchar('1');
			tot++;
		}
		else if (tot)
		{
			_putchar('0');
		}
		i--;
	}
	if (!tot)
		_putchar('0');
}
