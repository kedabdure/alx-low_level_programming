#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: A pointer to a 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;
	int size = width * height;

	if (size <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
