#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{

	int *ind;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ind = malloc(sizeof(int) * size);

	if (ind == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		ind[j] = min++;

	return (ind);
}
