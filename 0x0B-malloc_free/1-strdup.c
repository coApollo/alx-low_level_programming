#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *_strdup - duplicates a string to a different  memory location
 *
 *@str:original memory address
 *Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = strdup(str);
		if (ptr == NULL)
			return (NULL);

		else

			return (ptr);

	}
}
