#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: the input pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *ale;

	if (head == NULL)
		return;

	while (*head)
	{
	ale = (*head)->next;
	free(*head);
	*head = ale;
	}

	*head = NULL;
}

