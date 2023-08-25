#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 *
 * @head: pointer to the first node of linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *free_node;

	while (head)
	{
		free_node = head;
		head = head->next;
		free(free_node->str);
		free(free_node);
	}

	free(head);
}
