#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: integer array
 * @size: size of array
 * @cmp: pointer to a function
 * Return: -1 when size is <= 0 and if no element matches
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);

			}
		}
	}

	return (-1);
}
