#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - adds all elements of a linked list
 *
 *@head:head of the list
 *Return: sum and 0 if the list id=s empty
 */
int sum_listint(listint_t *head)
{
	listint_t *traverse = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (traverse != 0)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}
	return (sum);
}
