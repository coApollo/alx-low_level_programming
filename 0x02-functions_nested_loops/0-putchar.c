#include "main.h"
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char a[10] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};


	for (i = 0; i < 9; i++)
		_putchar(a[i]);

	_putchar('\n');

	return (0);
}
