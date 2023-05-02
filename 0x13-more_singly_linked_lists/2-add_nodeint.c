#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: the input pointer
 *@n : the node to add
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_no;

	new_no = malloc(sizeof(listint_t));
	if (new_no == NULL)
	{
	return (NULL);
	}
	new_no->n = n;
	new_no->next = *head;
	*head = new_no;
	return (new_no);
}
