#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char psword[84];
	int i = 0;
	int sum = 0;
	int 1st;
	int 2nd;

	while (sum < 2772)
	{
		psword[i] = 33 + rand() % 94;
		sum += psword[i++];
	}

	psword[i] = '\0';

	if (sum != 2772)
	{
		1st = (sum - 2772) / 2;
		2nd = (sum - 2772) / 2;


	}
}
