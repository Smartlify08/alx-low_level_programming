#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - get length of string
 * @str: string
 * Return: length
**/

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
	{
		len = i;
	}
	return (len);
}


/**
 * init_dog - initializes a struct dog
 * @d: instance for struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}

	d->name = malloc(_strlen(name) + 1);
	d->owner = malloc(_strlen(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		return;
	}
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
