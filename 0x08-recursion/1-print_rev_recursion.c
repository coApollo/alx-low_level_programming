#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *
 *@s: pointer to address of a string
 *Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
