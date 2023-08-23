#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to return the square root of.
 * Return: natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (check_sqrt(n, root));
}


/**
 * check_sqrt - Finds the natural square root
 *
 * @num: The number to find the square root
 * @r: squareroot to be tested.
 * Return: the square r if no is natural
 *         otherwise returns square r - -1.
 */
int check_sqrt(int num, int r)
{

	if (r == num / 2)
		return (-1);

	if ((r * r) == num)
		return (r);
	return (check_sqrt(num, r + 1));
}
