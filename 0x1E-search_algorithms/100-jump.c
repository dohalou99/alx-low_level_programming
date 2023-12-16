#include <math.h>
#include "search_algos.h"

/** a function that searches for a value in a sorted array
 * jump_search - 
 * @array: the input array to be searched
 * @size: the input size of the array (number of elements)
 * @value: the input int to be searched for
 *
 * Return: 1st index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int n9z = sqrt(size);
	int bda = 0;
	int section_end = 0;

	if (array == NULL || size == 0 || array[bda] > value)
		return (-1);

	while (section_end < (int)size)
	{
		if (array[section_end] < value)
		{
			printf("Value checked array[%d] = [%d]\n", section_end, array[section_end]);

			bda = section_end;
			section_end += n9z;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", bda, section_end);

	if (section_end > (int)size - 1)
		section_end = size - 1;

	while (bda <= section_end)
	{
		printf("Value checked array[%d] = [%d]\n", bda, array[bda]);
		if (array[bda] == value)
			return (bda);
		bda++;
	}

	return (-1);
}
