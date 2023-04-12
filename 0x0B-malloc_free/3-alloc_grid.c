#include"main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: the first input
 *@height: th second input
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **mal;
	int j;
	int k;
	int a;
	int *c;

	if (width <= 0 || height <= 0)
		return (NULL);
	mal = (int **)malloc(height * sizeof(int *));
	if (mal == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		*(mal + j) = (int *)malloc(width * sizeof(int));
		if (*(mal + j) == NULL)
		{
			for (j = 0; j < height; j++)
			{
				c = mal[j];
				free(c);
			}
			free(mal);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (k = 0; k < width; k++)
		{
			mal[a][k] = 0;
		}
	}
	return (mal);
}
