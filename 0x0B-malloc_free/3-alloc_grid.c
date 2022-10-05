#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-d array of integers
 * @width: columns
 * @height: rows
 *
 * Return: NULL on failure, or if width <= 0 or height <= 0,
 * otherwise, return pointer.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0) /* validate size of array */
		return (NULL);

	grid = malloc(sizeof(int *) * height); /* row mem allocation */

	if (grid == NULL) /* check segmentation error */
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* column memory allocation */
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}




