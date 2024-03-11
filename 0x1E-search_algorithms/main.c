#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int binary[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int linear[] = { 10, 1, 42, 3, 4, 42, 6, 7, -1, 9 };

    size_t size = sizeof(linear) / sizeof(linear[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(linear, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(linear, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(linear, size, 999));

	printf("\n--------------Binery-------------\n\n");
	size = sizeof(binary) / sizeof(binary[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(binary, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(binary, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(binary, size, 999));
    return (EXIT_SUCCESS);
}
