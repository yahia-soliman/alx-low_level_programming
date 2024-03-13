#include "search_algos.h"

int b_srch(int *array, int value, size_t from, size_t to);

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (b_srch(array, value, 0, size - 1));
}

/**
 * b_srch - search for a value in an array recursively
 * @array: pointer to the array to search in
 * @from: the start index (0)
 * @to: the last index (size - 1)
 * @value: value to search for
 *
 * Return: 1 if found, -1 if not
 */
int b_srch(int *array, int value, size_t from, size_t to)
{
	size_t idx;

	if (from > to)
		return (-1);

	printf("Searching in array: ");
	for (idx = from; idx < to; idx++)
		printf("%i, ", array[idx]);
	printf("%i\n", array[idx]);

	idx = (from + to) / 2;
	if (array[idx] == value)
		return (idx);
	if (array[idx] > value)
		return (b_srch(array, value, from, idx - 1));
	return (b_srch(array, value, idx + 1, to));
}
