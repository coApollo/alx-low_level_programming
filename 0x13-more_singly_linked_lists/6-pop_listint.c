#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint- deletes the head node of a linked list
 *
 *@head:head of the list
 *Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num = 0;

	if (head == NULL && *head == NULL)
		return (0);

	num = (*head)->n;
	*head = temp->next;
	free(temp);

	return (num);
}
