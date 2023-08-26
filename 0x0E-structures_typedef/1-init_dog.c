#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initializes a variable of type struct dog
 *
 *@d: structure (struct dog)
 *@name: dogs name
 *@age: dog's age
 *@owner: dog's owner
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
