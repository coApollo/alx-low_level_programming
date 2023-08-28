#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint- prints all eelements of a link list
 *
 *@h: pointer to head of the  list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
