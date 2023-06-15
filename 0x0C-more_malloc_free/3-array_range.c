#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: the input min of array.
 * @max: the input max of array.
 *
 * Return: the input array.
 */
int *array_range(int min, int max)
{
	int *c;
	int j, ever;

	ever = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	c = malloc(sizeof(int) * ever);
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; min <= max; j++)
	{
		c[j] = min++;
	}
	return (c);
}
