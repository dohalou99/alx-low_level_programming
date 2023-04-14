#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: unsigned int
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *bit;

	bit = malloc(b);
	if (bit == NULL)
		exit(98);
	return (bit);
}
