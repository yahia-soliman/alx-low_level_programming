#include <stdlib.h>
/**
 * _calloc - allocates array of zeros in memory
 * @nmemb: number of array members
 * @size: size of each member in bytes
 * Return: allocated memory for the array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r = malloc(nmemb * size);

	if (r == NULL || nmemb == 0 || size == 0)
		return (NULL);

	size *= nmemb;
	nmemb = 0;
	while (nmemb < size)
	{
		*(r + nmemb) = 0;
		nmemb++;
	}
	return (r);
}
