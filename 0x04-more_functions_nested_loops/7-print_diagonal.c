#include "main.h"
/**
 *print_diagonal - prints diagonal
 *
 *@n: integer parameter
 *Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(32);


			_putchar(92);
			_putchar('\n');
		}
	}
}
