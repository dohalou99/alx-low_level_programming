#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: the input freed listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *ale;

	while (head)
	{
	ale = head->next;
	free(head);
	head = ale;
	}
}

