#include <stdio.h>
#include <string.h>
#include "main.h"
int prime(int n, int i);
/**
 *is_prime_number - checks for prime number
 *
 *@n:integer value
 *Return: Always 0 (Success)
 */
int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	return (prime(n, n - 1));

}

/**
 *prime - checks for prime number
 *@i:for repitation
 *@n:integer value
 *Return: Always 0 (Success)
 */
int prime(int n, int i)
{

	if (n == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, n - 1));

}
