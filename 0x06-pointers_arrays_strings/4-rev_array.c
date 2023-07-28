#include <stdio.h>
#include "main.h"
/**
 *reverse_array - reverses the contents of an array
 *
 *@a: pointer to array
 *@n: number of elements of an  array
 *Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}

}
