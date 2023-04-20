#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - given as a parameter on each element of an array
 * @array: the input array
 * @size: the input size of the array
 * @action: the function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
