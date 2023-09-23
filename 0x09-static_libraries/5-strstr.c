#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_strstr - function to  locat a substring
 *
 *@haystack:pointer to main string
 *@needle:pointer to substring address
 *Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{

	return (strstr(haystack, needle));


}
