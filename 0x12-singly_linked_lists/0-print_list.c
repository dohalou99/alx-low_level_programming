#include <stdio.h>
#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list
 * @h: the input pointer to be printed
 *
 * Return: the input number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
	if (!h->str)

	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->length, h->str);
	h = h->next;
	a++;
	}
	return (a);
}

