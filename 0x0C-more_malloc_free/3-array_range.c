#include <stdlib.h>
/**
 * array_range - creates as array of integers
 * @min: value of the first element
 * @max: value of the last  element
 * Return: array of integers in the range (min, max)
 */
int *array_range(int min, int max)
{
	int *r = malloc(sizeof(int) * (max - min + 1)), i = 0;

	if (min > max || r == NULL)
		return (NULL);

	while (min <= max)
	{
		*(r + i) = min;
		min++;
		i++;
	}
	return (r);
}
