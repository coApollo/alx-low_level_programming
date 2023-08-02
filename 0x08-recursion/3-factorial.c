#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *factorial - returns factorial of a number
 *
 *@n: number
 *Return: -1,1 and n according to the value of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
