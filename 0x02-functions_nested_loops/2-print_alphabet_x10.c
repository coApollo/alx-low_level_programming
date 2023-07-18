#include "main.h"

/**
 *print_alphabet - Prints all lowercase letters of the alphabet
 *Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int i;
	char A = 'a';

	for (i = 1 ; i <= 10 ; i++)
	{
		for (A = 'a' ; A <= 'z' ; A++)
			 _putchar(A);

	}
	_putchar('\n');


}
      
