#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * @size: size of array
 * @c: the specific char
 * Description: creat array of size size and assign char c
 * Return: the pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	return (NULL);

	for (j = 0; j < size; j++)
	array[j] = c;

	return (array);
}
