#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 *binary_to_uint -converts a binary number to unsigned int
 *
 *@b: pointer to a string
 *Return: coverted value
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int value = 0;
	int bit = 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			value = value + bit;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		bit = bit * 2;
		i--;
	}

	return (value);
}
