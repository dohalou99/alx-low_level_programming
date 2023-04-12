#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: the second grid
 * @height:the height dimension of grid
 * Description: the frees memory of grid
 * Return: pointer to a 2 dimensional array of integers or null
 *
 */
void free_grid(int **grid, int height)
{
	int j;
	int *c;

	for (j = 0; j < height; j++)
	{
	c = grid[j];
	free(c);
	}
	free(grid);
}
