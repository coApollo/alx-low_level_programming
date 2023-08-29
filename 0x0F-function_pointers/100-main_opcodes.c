#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints the opcodes of itself.
 *
 *@argc: The number of arguments
 *@argv: An array of pointers to the arguments
 *Return: nothing
 */
void main(int argc, char *argv[])
{
	int bytes;
	int index;
	void (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");
}
