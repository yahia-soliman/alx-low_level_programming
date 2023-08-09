#include <stdlib.h>
/**
 * create_array - creat an array of specefic char
 * @size: size of the array in bytes
 * @c: character to initialize the array with
 * Return: pointer to first element of the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = NULL;

	if (i < size)
		arr = malloc(size);
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
