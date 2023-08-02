#include <math.h>
#include <stdio.h>
#include "main.h"
/**
 *_pow_recursion - returns valueof x raised to power y
 *
 *@x:number to raise
 *@y:value to be raised by
 *Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
