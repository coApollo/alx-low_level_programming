#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *array_range - creates an array of int
 *
 *@min: minimum value of the array
 *@max:maximum value of array
 *Return:pointer to a newly allocated space in mem
 *	:NULL if min > max || if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
