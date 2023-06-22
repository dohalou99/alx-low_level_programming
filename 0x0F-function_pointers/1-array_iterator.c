#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - find the index of a int
 * @array: the input array
 * @size:the input size
 * @action:the input pointer
 * Return:the input void
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
