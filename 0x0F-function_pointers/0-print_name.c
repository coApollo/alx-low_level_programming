#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name -prints a name
 *
 *@f: function pointer
 *@name: string
 *Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL) 
		f(name);
}
