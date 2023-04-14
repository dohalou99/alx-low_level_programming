#include "main.h"
#include <stdlib.h>

/**
* _calloc -  allocates memory for an array, using malloc
*@nmemb : the number of elements
*@size: byte of each number
*
*Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ind;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ind = malloc(nmemb * size);
	if (ind != NULL)
	{
		for (j = 0; j < (nmemb * size); j++)
			ind[j] = 0;
		return (ind);
	}
	else
		return (NULL);
}
