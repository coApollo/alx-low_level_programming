#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a node at an index
 *
 *@head: head of a linked list
 *@idx: the index
 *@n:value
 *Return: address of the new node
 *	: NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (i < (idx - 1))
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;

	return (temp->next);
}
