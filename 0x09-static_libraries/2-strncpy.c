#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncpy - a function to copy a string
 *
 *@dest: destination string
 *@src: source string
 *@n: number of characters to be copied
 *Return: dest (Success))
 */
char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);

	return (dest);

}
