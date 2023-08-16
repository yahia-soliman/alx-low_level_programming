#include <stdlib.h>
/**
 * array_iterator - excutes a function on each
 * @arry:           element of  a  given array
 * @size:   size of the array
 * @action: the function to excute on elements
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i = 0;

	while (i < size && array != NULL)
	{
		action(array[i]);
		i++;
	}
}
