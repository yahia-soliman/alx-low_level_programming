#include <stdlib.h>
/**
 * free_grid - frees memory from a grid
 * @grid: the return of alloc_grid
 * @height: of grid
 * Return: pointer the 2d grid
 */
void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(*(grid + row));
		row++;
	}
	free(grid);
}
