#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *set_string - sets the value of a pointer to a char
 *
 *@s:pointer to a pointer
 *@to:pointer to a character
 *Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	**s = &to;


}
