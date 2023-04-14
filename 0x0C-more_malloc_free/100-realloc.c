#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: the pointer to the memory previously
* @old_size: the size of ptr
* @new_size: the size of the new memory
*
* Return: pointer to the newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ind;

	if (new_size > old_size)
	{
		ind = malloc(new_size);
		free(ind);
		return (ind);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ind = malloc(new_size);
		free(ptr);
		return (ind);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
