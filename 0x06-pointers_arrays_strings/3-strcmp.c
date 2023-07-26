#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcmp - fuction to compare two strings
 *
 *@s1: first sting
 *@s2: second string
 *Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{

	int comp = strcmp(s1, s2);

	return (comp);
}
