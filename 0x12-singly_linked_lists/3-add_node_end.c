#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *
 * @head: pointer to original list_t
 * @str: pointer to string string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlength(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head  = new_node;
		return (*head);
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;

		current->next = new_node;
		return (current);
	}


}

/**
 * strlength - finds length of a string
 *
 * @str: String
 * Return: String length
 */
int strlength(const char *str)
{
	int ch = 0;

	while (*str)
	{
		str++;
		ch++;
	}

	return (ch);
}
