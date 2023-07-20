#include "main.h"
/**
 *_isupper - checks for uppercase character
 *
 *@c: integer parameter
 *Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (0);

	else
		return (1);


}
