#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char C;

	for (d = '0' ; d <= '9' ; d++)
		putchar(d);


	for (C = 'a' ; C <= 'f' ; C++)
		putchar(C);

	putchar('\n');

	return (0);
}
