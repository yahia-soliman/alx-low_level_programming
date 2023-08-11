#include <stdlib.h>
/**
 * malloc_checked - malloc with process termination
 * @b: number of bytes to allocate
 * Return: pointer to first byte in the allocation
 */
void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == NULL)
		exit(98);

	return (r);
}
