#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char E = 'a';
	char C = 'A';

	for (E = 'a'; E <= 'z'; E++)
		putchar(E);

	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);

	putchar('\n');
	return (0);

}
