#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_strspn -function that get the length of a prefix
 *
 *@s:pointer to a string
 *@accept:value of prefix
 *Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{

	return (strspn(s, accept));

}
