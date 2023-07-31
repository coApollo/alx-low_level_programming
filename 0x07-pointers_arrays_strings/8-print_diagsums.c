#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_diagsums  - prints sum of two diagonals of a square matrix
 *
 *@a:pointer to first value of an array
 *@size: size of array
 *Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum = sum + a[i][j];
		}


	}
	printf("%d", sum);

}
