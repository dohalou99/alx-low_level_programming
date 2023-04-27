#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a list
* @h: the input Pointer
* Return: Numbers of elements
*/
size_t list_len(const list_t *h)
{
	size_t lit = 0;

	while (h != NULL)
	{
		lit++;
		h = h->next;
	}
	return (lit);
}
