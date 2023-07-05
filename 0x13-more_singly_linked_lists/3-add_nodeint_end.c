#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t
 * @head: the input pointer
 * @n: the input data to insert
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newst;
	listint_t *ale = *head;

	newst = malloc(sizeof(listint_t));
	if (!newst)
	return (NULL);

	newst->n = n;
	newst->next = NULL;

	if (*head == NULL)
	{
	*head = newst;
	return (newst);
	}
	while (ale->next)
	ale = ale->next;

	ale->next = newst;

	return (newst);
}

