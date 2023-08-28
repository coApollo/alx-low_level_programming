#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - free memory of listint_t
 *
 *@head: head of the list
 *Return:Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *nxt;

	temp = head;
	while (temp != 0)
	{
		nxt = temp->next;
		free(temp);
		temp = nxt;
	}
}
