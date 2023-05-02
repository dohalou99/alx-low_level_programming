#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - that prints all the elements of a listint_t list.
 *@h : the constant structure of listint_t
 *
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j;

	for (j = 0; h; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
