#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 *
 * @d:pointer to dog structure
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
