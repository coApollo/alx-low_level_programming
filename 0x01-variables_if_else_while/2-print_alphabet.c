#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char Alph = 'a';

	for (Alph = 'a'; Alph <= 'z'; Alph++)
		putchar(Alph);

	putchar('\n');
	return (0);

}
