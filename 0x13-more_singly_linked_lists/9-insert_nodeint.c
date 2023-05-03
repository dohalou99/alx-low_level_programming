#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head : the input pointer
 *@idx : the input index
 *@n: the input struct
 *
 *Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newnode;
	listint_t *lit = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
	return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
	newnode->next = *head;
	*head = newnode;
	return (newnode);
	}
	for (j = 0; lit  && j < idx; j++)
	{
	if (j == idx - 1)
	{
	newnode->next = lit->next;
	lit->next = newnode;
	return (newnode);
	}
	else
	lit = lit->next;
	}
	return (NULL);
}
