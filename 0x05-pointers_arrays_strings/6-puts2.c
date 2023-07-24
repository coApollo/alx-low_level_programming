#include <stdio.h>
#include "main.h"
/**
 *puts2 - prints a every character from the 1st character
 *
 *@str: character parameter
 *Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')	
		j++;

	for (i = 0; i < j; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
