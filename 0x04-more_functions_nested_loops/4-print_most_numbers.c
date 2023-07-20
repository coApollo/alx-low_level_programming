#include "main.h"
/**
 *print_numbers - prints 0 t0 9
 *
 *Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		if ((i == 50) || (i == 52)
			continue;

		else
			_putchar(i);

	}

	_putchar('\n');
}
