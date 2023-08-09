#include <stdlib.h>
/**
 * alloc_grid - makes 2d array of integers
 * @width:  the width  of the array
 * @height: the height of the array
 * Return: pointer the 2d grid
 */
int **alloc_grid(int width, int height)
{
	int row, col, **g = NULL;

	if (width < 1 || height < 1)
		return (g);

	g = malloc(sizeof(int *) * height);
	row = 0;
	while (g != NULL && row < height)
	{
		*(g + row) = malloc(sizeof(int) * width);
		if (*(g + row) == NULL)
		{
			while (row >= 0)
				free(*(g + row--));
			free(g);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			*(*(g + row) + col) = 0;
		row++;
	}
	return (g);
}
