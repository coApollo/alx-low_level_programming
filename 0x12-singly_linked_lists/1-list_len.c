#include <stdio.h>
#include "lists.h"
/**
 *list_len - returns number of elements
 *
 *@h:head of the list/node
 *Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int num = 0;
	const list_t *first_node = h;

	while (first_node != NULL)
	{
		num++;
		first_node = first_node->next;
	}
	return (num);

}
