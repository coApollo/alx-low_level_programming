#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *
 *@n: the bit at the given index
 *@index:index of the bit to be set
 *Return:1 on success
 *	:-1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || !n)
		return (-1);

	*n = (~(1UL << index) & *n);
		return (1);
}
