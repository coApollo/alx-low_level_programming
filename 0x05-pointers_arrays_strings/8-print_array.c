#include <stdio.h>
#include "main.h"
/**
 *print_array - prints elements of an array
 *
 *@a:array
 *@n:number of element
 *Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{


	for (n = 0; n < 5; n++)
	{
		if (n != 4)
			printf("%d, ", a[n]);
		else
			printf("%d\n", a[n]);
	}
}
