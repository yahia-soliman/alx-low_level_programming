#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the dog name, age, owenr
 * @d: address of the dog's struct dog varialble
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	putchar('\0');
else
{
	if ((*d).name == NULL)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).age == 0.0)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %0.6f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("Owner: %s\n", "(nil)");
	else
		printf("Owner: %s\n", (*d).owner);
}
}
