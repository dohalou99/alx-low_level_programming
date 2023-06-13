#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * @grid: the input second grid
 * @height: the input grid height dimension
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; ++j)
	{
		free(grid[j]);
	}
	free(grid);
}
