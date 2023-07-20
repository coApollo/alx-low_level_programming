#include <stdio.h>
#include <math.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long x;
	long num = 612852475143;
	long max
	double sq = sqrt(num);

	for (x = 0; x <= sq; x++)
	{
		if (num % x == 0)
			max = num / x;


	}
	printf("%ld", max);

	return (0);
}
