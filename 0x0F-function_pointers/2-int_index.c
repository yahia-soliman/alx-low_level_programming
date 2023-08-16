#include <stdlib.h>
/**
 * int_index - finds the index of number in array
 * @array:     array to look into.
 * @size:      size of array.
 * @cmp:       function used to cmpare elements
 * Return: index of the number or -1 if not find
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < size && array != NULL)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
