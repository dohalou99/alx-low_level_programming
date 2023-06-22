#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the input array
 * @size: the input size
 * @cmp: the input pointer
 * Return: 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
