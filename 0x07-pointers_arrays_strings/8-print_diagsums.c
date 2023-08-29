#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_diagsums  - prints sum of two diagonals of a square matrix
 *
 *@a:pointer to first value of an array
 *@size: size of array
 *Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int diag1 = 0;
	long int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				diag1 += a[(i * size) + j];
			}
			if (i == size - j - 1)
			{
				diag2 += a[(i * size) + j];
			}
		}
	}
	printf("%ld, %ld\n", diag1, diag2);
}
