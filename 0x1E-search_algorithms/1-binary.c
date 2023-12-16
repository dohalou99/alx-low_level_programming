#include "search_algos.h"

/**
 * print_array - a function that prints an array of integers
 * @array: the input pointer to the start of the array
 * @size: the input size of the array
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int j;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (j = 0; j < size; j++)
	{
		if (j == 0)
			printf("%d", array[j]);
		else
			printf(", %d", array[j]);
	}

	printf("\n");
}

/**
 * binary_search - a function that searches for a value in a sorted array
 * @array: the input pointer to first element in array to be searched
 * @size: the input size of the array
 * @value: the input value to be searched for
 *
 * Return: the index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int peu = 0;
	int gra = size - 1;
	int midl;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);

	while (peu <= gra)
	{
		midl = (peu + gra) / 2;

		print_array(&array[peu], (gra - peu) + 1);

		if (array[midl] == value)
			return (midl);

		if (array[midl] > value)
			gra = midl - 1;

		else
			peu = midl + 1;
	}

	return (-1);
}
