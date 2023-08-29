#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_realloc -realocates a memory block
 *
 *@ptr:pointer to prev mem
 *@old_size:old size of mem block
 *@new_size:new size of mem block
 *Return:pointer to new allocated mem location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *) ptr)[i];
	}

	free(ptr);

	return (new_ptr);
}
