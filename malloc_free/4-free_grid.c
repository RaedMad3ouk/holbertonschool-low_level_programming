#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to 2D array
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
