#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *_strcpy - copies a string
 *@str1: destination
 *@str2: source
 *Return: Nothing
 */
void _strcpy(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
}

/**
 * _strlen - gets length of a string
 * @str: the string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *new_dog - creates a new dog
 *
 *@name: dogs name
 *@age: dogs age
 *@owner: dogs owner
 *Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *second_dog;

	second_dog = malloc(sizeof(dog_t));
	if (second_dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	(*second_dog).name = malloc((sizeof(char) * _strlen(name)) + 1);
	if ((*second_dog).name == NULL)
	{
		free(second_dog);
		return (NULL);
	}
	_strcpy(name, (*second_dog).name);
	(*second_dog).owner = malloc((sizeof(char) * _strlen(owner)) + 1);
	if ((*second_dog).owner == NULL)
	{
		free((*second_dog).name);
		free(second_dog);
		return (NULL);
	}
	_strcpy(owner, (*second_dog).owner);
	(*second_dog).age = age;

	return (second_dog);
}
