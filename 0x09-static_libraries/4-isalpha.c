#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *
 *@c: integer parameter
 *Return: 1 if alphabetic character exist otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
