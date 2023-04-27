#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
* print_list - prints all the elements of a list_t list
* @h: the input pointer
* Return: the number of nodes of the linked list.
*/

size_t print_list(const list_t *h)
{
	size_t lit = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		lit++;
	}
	return (lit);
}
