#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This function frees a 2 dimensional grid
 * previously created by the alloc_grid function
 * @grid: grid to be fred
 * @height: grid height
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height == 0)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
