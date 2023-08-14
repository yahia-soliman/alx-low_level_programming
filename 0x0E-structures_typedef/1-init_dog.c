#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a dog informations to a struct dog
 * @d: pointer to struct dog
 * @name: of the dog
 * @age:  of the dog
 * @owner: of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
