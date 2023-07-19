#include "main.h"
/**
 *_islower - checks for lowercase character
 *
 *@c: integer parameter
 *Return: 1 if there is lowercase character otherwise 0.
 */
int _islower(int c)
{


	if ((c >= 'a' && c <= 'z'))
		return (1);

	else
		return (0);



}

