#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_calloc - allocates memory for an array
 *
 *@nmemb: size of array
 *@size:size of memory to be allocated
 *Return:pointer to allocated memory
 *	:NULL if nmemb is 0 || if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int arr = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = nmemb * size;
	ptr = malloc(arr);

	if (ptr == NULL)
		return (NULL);

	while (i < arr)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
