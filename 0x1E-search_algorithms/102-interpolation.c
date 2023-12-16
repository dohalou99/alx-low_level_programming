#include "search_algos.h"

/**
 *interpolation_search - 
 *@array: the input pointer to the first element of the array to search in
 *@size: the input number of elements in array
 *@value: the input value to search for
 *Return: the 1rst index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t j, y, z;

	if (array == NULL)
		return (-1);

	for (y = 0, (z = size - 1); z >= y;)
	{
		j = y + (((double)(z - y) / (array[z] - array[y])) * (value - array[y]));
		if (j < size)
		{
			printf("Value checked array [%ld] = [%d]\n", j, array[j]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", j);
			break;
		}

		if (array[j] == value)
			return (j);
		if (array[j] > value)
			z = j - 1;
		else
			y = j + 1;
	}
	return (-1);

}
