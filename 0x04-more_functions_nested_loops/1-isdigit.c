#include "main.h"

/**
 *_isdigit - checks for digits between o and 9
 *
 *@c: integer parameter
 *Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	else
		return (0);


}
