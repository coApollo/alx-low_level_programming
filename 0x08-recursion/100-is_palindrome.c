#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - finds length of a string
 * @str: string
 * Return: strlen
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(str + 1));
}

/**
 * comparator - compares each character of the string.
 * @str: string
 * @n1: 1st iterator.
 * @n2: 2nd  iterator.
 * Return: nothing
 */
int comparator(char *str, int n1, int n2)
{
	if (*(str + n1) == *(str + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(str, n1 + 1, n2 - 1));
	}
	return (0);
}

