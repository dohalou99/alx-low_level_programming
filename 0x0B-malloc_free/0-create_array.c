#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: the input size of array
 * @c: the input char
 *
 *Return: the pointer to array, NULL if it is fail
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int j;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)

		return (NULL);

	for (j = 0; j < size; j++)
		string[j] = c;
	return (string);
}



