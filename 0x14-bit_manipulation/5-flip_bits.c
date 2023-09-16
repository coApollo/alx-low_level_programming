#include "main.h"
/**
 *flip_bits - returns the number of bits you would need
 *	to flip to get from one number to another
 *
 *@n: number to be flipped
 *@m: number flipped to
 *Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	unsigned int numb = 0;

	while (value)
	{
		numb += value & 1;
		value >>= 1;
	}

	return (numb);
}

