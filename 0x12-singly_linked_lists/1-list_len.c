#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  number of elements in a linked list_t list
 * @h: the input pointer to the list_t list
 *
 * Return: the input number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
	a++;
	h = h->next;
	}
	return (a);
}
