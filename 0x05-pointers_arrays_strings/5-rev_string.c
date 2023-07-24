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
	int i = 0;
	int len = 0;
	char c;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		c = s[len - i - 1];
	}
}
