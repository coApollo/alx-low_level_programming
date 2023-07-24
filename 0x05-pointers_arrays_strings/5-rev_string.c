#include <stdio.h>
#include <string.h>
/**
 *rev_string - prints a sting in reverse
 *
 *@s: character parameter
 *Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = len; i > 0; i--)
		*s = s[i - 1];

}
