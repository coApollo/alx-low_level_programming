#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcat - A function to concatenate two strings
 *
 *@dest: destination string
 *@src:  source string
 *Return: dest (Success)
 */
char *_strcat(char *dest, char *src)
{

	strcat(dest, src);

	return (dest);
}
