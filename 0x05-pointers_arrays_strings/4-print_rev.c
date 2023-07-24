#include "main.h"
#include <string.h>
/**
 *print_rev - prints a string in reverse
 *
 *@s: character parameter
 *Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; i > 0; i--)
		_putchar(s[i - 1]);

	_putchar('\n');


}
