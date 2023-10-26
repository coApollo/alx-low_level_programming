#include "main.h"

/**
 *get_endianness - checks for endianness
 *
 *Return:1 for little endian
 *	:0 for big
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
