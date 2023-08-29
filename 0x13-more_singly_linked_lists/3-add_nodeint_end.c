#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - inserts node at end of list
 *
 *@head:head of the list
 *@n: value in the nodes
 *Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next =  0;

	if (*head == NULL)
	{
		*head = newnode;
		return (NULL);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
