#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *get_nodeint_at_index - gets the node at a certain index
 *
 *@head: the head of the list
 *@index: index of the node
 *Return: the node at the index(temp)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;
	unsigned int count = 0;

	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	if (index > (count - 1))
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}
