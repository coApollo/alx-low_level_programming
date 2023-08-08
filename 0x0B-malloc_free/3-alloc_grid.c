#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *alloc_grid -allocates space for a two dimentional array
 *
 *@width: represents rows
 *@height: represents array columns
 *Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int **matrix = (int **)malloc(sizeof(int *) * width);
	int i;
	int j;
	int num = 0;

	if (matrix == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < width; i++)
		{
			matrix[i] = (int *)malloc(sizeof(int) * height);
			if (matrix[i] == NULL)
			{
				return (NULL);
			}
			else
			{
				for (j = 0; j <= height; j++)
				{
					matrix[i][j] = num;
				}
			}

		}
	}

	return (matrix);
}
