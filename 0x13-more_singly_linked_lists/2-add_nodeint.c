#include "lists.h"

/**
 * add_nodeint -adds a new node at the beginning of a listint_t
 * @head: the iput pointer
 * @n: the input data to inserted
 *
 * Return: the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newst;

	newst = malloc(sizeof(listint_t));
	if (!newst)
	return (NULL);

	newst->n = n;
	newst->next = *head;
	*head = newst;

	return (newst);
}
