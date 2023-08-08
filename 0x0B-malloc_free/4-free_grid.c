#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid -frees memory that was allocated by malloc
 *
 *@grid:an array or matrix
 *@height:number of rows of a grid/matrix
 *Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
		free(grid[i]);


	free(grid);
}
