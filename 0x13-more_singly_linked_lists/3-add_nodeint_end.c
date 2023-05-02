#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: the input pointer
 *@n : the node add
 *
 *Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *amn = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}
	while (amn->next)
	amn = amn->next;
	amn->next = newnode;
	return (newnode);
}
