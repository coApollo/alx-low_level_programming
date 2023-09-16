#include "main.h"

/**
 *get_endianness - checks endianness
 *
 *Return: 0 for big
 *	:1 for little endian
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	unsigned char *ptr = (unsigned char *)&numb;

	if (*ptr == 1)
		return (1);

	else
		return (0);

}
