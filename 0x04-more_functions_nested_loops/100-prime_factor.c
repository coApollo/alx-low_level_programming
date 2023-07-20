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
	long maxf;
	double sq = sqrt(num);

	for (x = 0; x <= sq; x++)
	{
		if (num % x == 0)
			maxf = num / x;


	}
	printf("%ld", maxf);

	return (0);
}
