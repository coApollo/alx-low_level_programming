#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_strpbrk - serches for a string for any set of bytes
 *
 *@s:pointer to string
 *@accept:points to the address of the first occurance of a character
 *Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{

	return (strpbrk(s, accept));



}
