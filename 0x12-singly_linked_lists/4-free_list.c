#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the input head of the linked list
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *lit;

	while ((lit = head) != NULL)
	{
		head = head->next;
		free(lit->str);
		free(lit);
	}
}
