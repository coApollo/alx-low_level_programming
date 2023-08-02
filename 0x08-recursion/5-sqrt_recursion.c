#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int _sqrt_recursion(int n, int i)
{

	if (n < 0)
		return (-1);

	return (actual_sqrt_root(n, 0));
	
}

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int actual_sqrt_root(int n, int i)
{

	if (i * i < n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_root(n, i + 1));
	
}
