#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the dog name, age, owenr
 * @d: address of the dog's struct dog varialble
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n"
			, (*d).name, (*d).age, (*d).owner);
}
