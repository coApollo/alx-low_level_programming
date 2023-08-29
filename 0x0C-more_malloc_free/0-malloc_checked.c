#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - allocates memory with malloc
 *
 *@b: size of memory to be allocated
 *Return: a void pointer to a memory location
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
