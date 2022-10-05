#include "main.h"

/**
 * free_grid - frees a 2d grid
 * that was initially created by alloc_grid function
 * @grid: pointer to 2d array
 * @height: row
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

