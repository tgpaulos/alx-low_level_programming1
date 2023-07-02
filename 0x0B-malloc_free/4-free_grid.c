#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: 2D grid
 * @height: dimension of grid
 * Return: Null
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}

	free(grid);
	grid = NULL;
}
