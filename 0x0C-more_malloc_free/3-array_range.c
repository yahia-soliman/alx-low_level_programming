#include <stdlib.h>
/**
 * array_range - creates as array of integers
 * @min: value of the first element
 * @max: value of the last  element
 * Return: array of integers in the range (min, max)
 */
int *array_range(int min, int max)
{
	int *r, i = 0;

	if (min > max)
		return (NULL);

	r = malloc(sizeof(int) * (max - min + 1));
	if (r == NULL)
		return (NULL);

	while (min <= max)
	{
		*(r + i) = min;
		min++;
		i++;
	}
	return (r);
}
