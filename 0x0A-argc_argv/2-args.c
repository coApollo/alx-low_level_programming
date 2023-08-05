#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *@argc: integer
 *@argv:pointer to an array of strings
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
