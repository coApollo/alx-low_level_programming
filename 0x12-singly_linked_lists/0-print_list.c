#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *print_list - prints all elements of a list
 *
 *@h: head of a list
 *Return: number of nodes(num)
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
	if (current->str == NULL)
		printf("[%ld] (nil)\n", num);
	else
		printf("[%ld] %s\n", num, current->str);

	num++;
	current = current->next;
	}

	return (num);
}

