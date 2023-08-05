#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc:integer parameter
 *@argv:pointer to an array of stings
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);

	return (0);
}
