#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - adds a new node at the beginniing of a list_t
 *
 *@head: head of the list_t
 *@str: string(to be duplicated)
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = dup;
	new_node->len = strlength(str);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
/**
  * strlength - Returns the length of a string
  * @str: String
  *
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
