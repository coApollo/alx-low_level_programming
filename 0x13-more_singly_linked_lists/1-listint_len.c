#include <stdio.h>
#include "lists.h"
/**
 *listint_len -returns number of elements in a linked list
 *
 *@h: head of the list
 *Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t len = 0;

	while (temp != 0)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
