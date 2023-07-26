#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncat - function concatenates two strings
 *
 *@dest: destination string
 *@src: source string
 *@n: number of characters at be concatenated
 *Return: dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);

	return (dest);
}
