#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_memcpy - copies a memory area
 *
 *@dest:a pointer to the destination
 *@src:a pointer to the source of data to be copied
 *@n:numbr of bytes to copy
 *Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	memcpy(dest, src, n);

	return (dest);
}
