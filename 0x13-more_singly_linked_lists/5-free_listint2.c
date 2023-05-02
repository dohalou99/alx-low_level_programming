#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - Write a function that frees a listint_t list.
 *@head : the input pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *newnode;

	if (head == NULL)
		return;
	while (*head)
	{
	newnode = (*head)->next;
	free(*head);
	*head = newnode;
	}
	*head = NULL;
}
