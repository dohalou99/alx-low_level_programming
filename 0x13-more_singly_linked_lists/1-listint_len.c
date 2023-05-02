#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked
 *@h : the struct of listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t j;

	for (j = 0; h; j++)
		h = h->next;
	return (j);
}
