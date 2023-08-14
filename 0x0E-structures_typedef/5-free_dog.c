#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a dog from the struct
 * @d:        pointer  to the dawg struct
 */
void free_dog(dog_t *d)
{
if (d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
}
