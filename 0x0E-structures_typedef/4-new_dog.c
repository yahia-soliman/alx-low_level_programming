#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * copyof - a string in a new allocated memory
 * @string: pointer to copy from
 * Return:  pointer the the new copy
 */
char *copyof(char *string)
{
	char *r;
	int i;

	if (string == NULL)
		return (NULL);

	i = strlen(string);
	r = malloc(i);

	if (r)
	{
		*(r + i) = '\0';
		while (i--)
			*(r + i) = string[i];
	}
	return (r);
}

/**
 * new_dog - create a new dog entry
 * @name:    of
 * @age:             the
 * @owner:                     dawg
 * Return:   pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d)
	{
		d->name = copyof(name);
		if (d->name == NULL)
		{
			free(d->name);
		}

		d->age = age;

		d->owner = copyof(owner);
		if (d->owner == NULL)
		{
			free(d->owner);
		}
		return (d);
	}
	else
	{
		free(d);
		return (NULL);
	}
}
