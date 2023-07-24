#include <stdio.h>
/**
 *swap_int - swaps two integer in the pointed address
 *
 *@a: 1st interger
 *@b: 2nd interger
 *Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;


}
