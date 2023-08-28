#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint- adds newnode at the beginning of list
 *
 *@head:head of the list
 *@n: value at newnode
 *Return: Address of newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
