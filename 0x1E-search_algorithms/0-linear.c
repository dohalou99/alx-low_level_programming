#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: the input pointer to first element in array
 * @size: the input size of the array
 * @value: yhe input value to searched for
 *
 * Return: 1st index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL || size == 0)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
