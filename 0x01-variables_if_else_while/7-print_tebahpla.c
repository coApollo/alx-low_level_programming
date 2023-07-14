#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char C = 'z';

	for (C = 'z' ; C >= 'a' ; C--)
		putchar(C);

	putchar('\n');
	return (0);
}
