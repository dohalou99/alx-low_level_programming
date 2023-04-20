#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 * @array: the input array
 * @size: the input size of the array
 * @cmp: the function pointer
 * Return: 0
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
