#include <stdio.h>

/**
 * print_str - prints a string
 *
 * Return: Nothing
 */
void print_str(void) __attribute__ ((constructor));
void print_str(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
