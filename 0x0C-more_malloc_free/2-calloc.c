#include "main.h"
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array
* @nmemb: the input string.
* @size: the input string.
* Return: the input Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *poi;
	unsigned int j, l;

	l = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	poi = malloc(l);
	if (poi == NULL)
		return (NULL);

	for (j = 0; j < (l); j++)
	{
		poi[j] = 0;
	}
	return (poi);
}
