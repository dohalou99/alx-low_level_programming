#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width:the input width
 * @height: the input height
 *
 * Return: the pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
int y, x;
	int **arryp;

	if (width < 1 || height < 1)
		return (NULL);

	arryp = (int **)malloc(sizeof(int *) * height);
	if (arryp == NULL)
	{
		free(arryp);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arryp[x] = malloc(sizeof(int) * width);
		if (arryp[x] == NULL)
		{
			for (x = 0; x < height; x++)
			{
				free(arryp[x]);
			}
			free(arryp);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
		{
			arryp[x][y] = 0;
		}

	return (arryp);
}
