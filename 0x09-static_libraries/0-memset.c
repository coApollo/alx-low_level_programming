#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_memset - function to fill memory with a constant byte
 *
 *@s:pointer to a memory location
 *@b:value to be filled
 *@n:number of bytes to be filled
 *Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{


	memset(s, b, n * sizeof(char));

	return (s);
}
